"""
Extract csv's from all *.ulg files in `directory`, generate `run_configs.m`.

TODO: use a config.py as base?
"""

import glob
import logging

from io import StringIO

import click

from dacite import from_dict

from px4.log_analysis import (
    extract_message_csv_from_ulog,
    batch_extract_messages_from_ulgs,
)

INDEX_START = 16

MESSAGE_NAME = "loe_detector_input"

TEMPLATE = "run_configs{{{index}}} = run_config_defaults;\n\
run_configs{{{index}}}.csv_file = '{csv_file}';\n\
run_configs{{{index}}}.t_fail = 0;\n"


TEMPLATE_2 = "run_configs{{{index}}} = run_config_defaults;\n\
run_configs{{{index}}}.title = '{index}';\n\
run_configs{{{index}}}.csv_file = '{csv_file}';\n\
run_configs{{{index}}}.fail_id = {fail_id};\n\
run_configs{{{index}}}.t_fail = {t_fail};\n\
run_configs{{{index}}}.video_filename = '{video_filename}';\n\
run_configs{{{index}}}.video_t_fail = {video_t_fail};\n\
run_configs{{{index}}}.video_t_crash_peak = {video_t_crash_peak};\n\
run_configs{{{index}}}.notes = '{notes}';\n"


# run_configs{{{index}}}.title = '{title}';\n\


from dataclasses import dataclass, asdict
from pathlib import Path
from typing import List, Optional


LOGGER = logging.getLogger()


@dataclass
class MetaData:
    filename: str
    fail_id: Optional[int] = None
    t_fail: Optional[float] = None
    video_filename: Optional[str] = None
    video_t_fail: Optional[float] = None
    video_t_crash_peak: Optional[float] = None
    sl_saw_amp: Optional[int] = None
    sl_saw_freq: Optional[int] = None
    windspeed: Optional[int] = None
    notes: Optional[str] = None


@dataclass
class ExpandedMetaData(MetaData):
    ulg_file: Optional[str] = None
    csv_file: Optional[str] = None
    # not really optionals, dataclass inheritance limitation..


def find_metadata_files(directory: str):
    metadatas_glob_pattern = directory + "/**/metadata.py"
    return glob.glob(metadatas_glob_pattern)


import runpy


def get_metadata_from_file(metadata_file: str) -> List[MetaData]:
    metadata_dicts: List[dict] = runpy.run_path(metadata_file)["METADATA"]
    return [from_dict(MetaData, metadata_dict) for metadata_dict in metadata_dicts]


@click.command(help="The directory in which to search for ulg-files.")
@click.option("-m", "--parse-metadatas", is_flag=True)
@click.argument("directory")
def main(directory: str, parse_metadatas: bool):
    if parse_metadatas:

        metadata_files = find_metadata_files(directory)

        all_expanded_metadatas: List[ExpandedMetaData] = []

        for i, metadata_file in enumerate(metadata_files):
            metadata_path = Path(metadata_file)

            LOGGER.info("Found: {full_metadata}")

            metadata_directory = metadata_path.parent

            metadatas = get_metadata_from_file(metadata_file)

            for metadata in metadatas:
                ulg_file = Path(metadata_directory, metadata.filename).resolve()

                expanded_metadata: ExpandedMetaData = ExpandedMetaData(
                    **asdict(metadata)
                )  # ugly
                expanded_metadata.ulg_file = str(ulg_file)
                csv_file = extract_message_csv_from_ulog(str(ulg_file), MESSAGE_NAME)
                expanded_metadata.csv_file = csv_file
                all_expanded_metadatas.append(expanded_metadata)

        sorted_all_expanded_metadatas = sorted(
            all_expanded_metadatas, key=lambda md: md.csv_file
        )

        for i, expaned_metadata in enumerate(sorted_all_expanded_metadatas):
            template_substitutions = asdict(expaned_metadata)
            run_config_item = TEMPLATE_2.format(
                index=INDEX_START + i, **template_substitutions
            )

            # Print lines except those containing `None`
            for line in StringIO(run_config_item):
                if not "None" in line:
                    print(line, end="")
            print("")  # newline

        # for i, expaned_metadata in enumerate(sorted_all_expanded_metadatas):
        #     template_substitutions = asdict(expaned_metadata)
        #     run_config_item = TEMPLATE_2.format(
        #         index=INDEX_START + i, **template_substitutions
        #     )

        #     # Print lines except those containing `None`
        #     for line in StringIO(run_config_item):
        #         if not "None" in line:
        #             print(line, end="")
        #     print("")  # newline

    else:
        csv_files = batch_extract_messages_from_ulgs(directory, MESSAGE_NAME)
        for i, csv_file in enumerate(csv_files):
            run_config_item = TEMPLATE.format(index=INDEX_START + i, csv_file=csv_file)
            print(run_config_item)


if __name__ == "__main__":
    main()  # pylint: disable=no-value-for-parameter

