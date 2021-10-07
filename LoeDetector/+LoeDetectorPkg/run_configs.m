function [run_configs, n_run_configs] = run_configs()

run_config_defaults = {};

run_configs{1} = run_config_defaults;
run_configs{1}.title = '1';
run_configs{1}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-02-01/11_43_10_rate_control_input_0.csv';
run_configs{1}.fail_id = 2;
run_configs{1}.t_fail = 12.39;
run_configs{1}.notes = 'nice eject';

run_configs{2} = run_config_defaults;
run_configs{2}.title = '2';
run_configs{2}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-02-01/13_06_06_rate_control_input_0.csv';
run_configs{2}.fail_id = 2;
run_configs{2}.t_fail = 100.2;
run_configs{2}.notes = 'uncommanded eject above mattress';

run_configs{3} = run_config_defaults;
run_configs{3}.title = '3';
run_configs{3}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-02-01/13_11_20_rate_control_input_0.csv';
run_configs{3}.fail_id = 2;
run_configs{3}.t_fail = 127.1;
run_configs{3}.notes = 'noisy, delayed';

run_configs{4} = run_config_defaults;
run_configs{4}.title = '4';
run_configs{4}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-02-01/13_17_31_rate_control_input_0.csv';
run_configs{4}.fail_id = 2;
run_configs{4}.t_fail = 75.21;
run_configs{4}.notes = 'eject caused by lower altitude setting';

run_configs{5} = run_config_defaults;
run_configs{5}.title = '5';
run_configs{5}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-02-01/13_20_36_rate_control_input_0.csv';
run_configs{5}.fail_id = 2;
run_configs{5}.t_fail = 14.54;
run_configs{5}.notes = '';

run_configs{6} = run_config_defaults;
run_configs{6}.title = '6';
run_configs{6}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-02-01/13_24_30_rate_control_input_0.csv';
run_configs{6}.fail_id = 2;
run_configs{6}.t_fail = 35.69;
run_configs{6}.notes = 'late?';

run_configs{7} = run_config_defaults;
run_configs{7}.title = '7';
run_configs{7}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-02-01/13_27_41_rate_control_input_0.csv';
run_configs{7}.fail_id = 2;
run_configs{7}.t_fail = 69.3;
run_configs{7}.notes = 'slow eject';

run_configs{8} = run_config_defaults;
run_configs{8}.title = '8';
run_configs{8}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-02-01/13_40_22_rate_control_input_0.csv';
run_configs{8}.fail_id = 2;
run_configs{8}.t_fail = 24.79;
run_configs{8}.notes = 'eject caused by yaw input, slow (detection?)';

run_configs{9} = run_config_defaults;
run_configs{9}.title = '9';
run_configs{9}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-02-01/14_05_13_rate_control_input_0.csv';
run_configs{9}.fail_id = 2;
run_configs{9}.t_fail = 47.71;
run_configs{9}.notes = 'fail + FTC';

run_configs{10} = run_config_defaults;
run_configs{10}.title = '10';
run_configs{10}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-02-01/14_09_17_rate_control_input_0.csv';
run_configs{10}.fail_id = 2;
run_configs{10}.t_fail = 39.59;
run_configs{10}.notes = 'video';

run_configs{11} = run_config_defaults;
run_configs{11}.title = '11';
run_configs{11}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-02-01/14_17_31_rate_control_input_0.csv';
run_configs{11}.fail_id = 2;
run_configs{11}.t_fail = 62.59;
run_configs{11}.notes = 'video';

run_configs{12} = run_config_defaults;
run_configs{12}.title = '12';
run_configs{12}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-02-01/14_33_23_rate_control_input_0.csv';
run_configs{12}.fail_id = 2;
run_configs{12}.t_fail = 40.27;
run_configs{12}.notes = 'video';

run_configs{13} = run_config_defaults;
run_configs{13}.title = '13';
run_configs{13}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-02-01/14_36_17_rate_control_input_0.csv';
run_configs{13}.fail_id = 2;
run_configs{13}.t_fail = 23.94;
run_configs{13}.notes = '';

run_configs{14} = run_config_defaults;
run_configs{14}.title = '14';
run_configs{14}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-02-01/14_38_41_rate_control_input_0.csv';
run_configs{14}.fail_id = 2;
run_configs{14}.t_fail = 56.15;
run_configs{14}.notes = '';

run_configs{15} = run_config_defaults;
run_configs{15}.title = '15';
run_configs{15}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-02-01/15_10_41_rate_control_input_0.csv';
run_configs{15}.fail_id = 2;
run_configs{15}.t_fail = 25.87;
run_configs{15}.notes = '';

run_configs{16} = run_config_defaults;
run_configs{16}.title = '16';
run_configs{16}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-07/16_38_17_loe_detector_input_0.csv';
run_configs{16}.fail_id = 3;
run_configs{16}.t_fail = 1.7;
run_configs{16}.video_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-07/VID_20190807_183814.mp4';
run_configs{16}.video_t_fail = 7.266;
run_configs{16}.video_t_crash_peak = 7.884;
run_configs{16}.notes = 'uncommanded, during takeoff';

run_configs{17} = run_config_defaults;
run_configs{17}.title = '17';
run_configs{17}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-07/16_39_55_loe_detector_input_0.csv';
run_configs{17}.fail_id = 3;
run_configs{17}.t_fail = 3.885;
run_configs{17}.video_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-07/VID_20190807_183951.mp4';
run_configs{17}.video_t_fail = 10.317;
run_configs{17}.video_t_crash_peak = 11.122;
run_configs{17}.notes = 'uncommanded, from hover';

run_configs{18} = run_config_defaults;
run_configs{18}.title = '18';
run_configs{18}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-07/16_46_38_loe_detector_input_0.csv';
run_configs{18}.fail_id = 3;
run_configs{18}.t_fail = 1.53;
run_configs{18}.video_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-07/VID_20190807_184639.mp4';
run_configs{18}.video_t_fail = 2.459;
run_configs{18}.video_t_crash_peak = 4.919;
run_configs{18}.notes = 'partial recovery';

run_configs{19} = run_config_defaults;
run_configs{19}.title = '19';
run_configs{19}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-07/16_48_49_loe_detector_input_0.csv';
run_configs{19}.fail_id = 3;
run_configs{19}.t_fail = 1.58;
run_configs{19}.video_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-07/VID_20190807_184850.mp4';
run_configs{19}.video_t_fail = 2.726;
run_configs{19}.video_t_crash_peak = 4.48;
run_configs{19}.notes = 'partial recovery';

run_configs{20} = run_config_defaults;
run_configs{20}.title = '20';
run_configs{20}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-08/15_54_02_loe_detector_input_0.csv';
run_configs{20}.fail_id = 0;
run_configs{20}.notes = 'no failure';

run_configs{21} = run_config_defaults;
run_configs{21}.title = '21';
run_configs{21}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-08/15_55_14_loe_detector_input_0.csv';
run_configs{21}.fail_id = 3;
run_configs{21}.t_fail = 1.49;
run_configs{21}.notes = 'during takeoff';

run_configs{22} = run_config_defaults;
run_configs{22}.title = '22';
run_configs{22}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-08/15_57_39_loe_detector_input_0.csv';
run_configs{22}.fail_id = 3;
run_configs{22}.t_fail = 2.375;
run_configs{22}.video_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-08/VID_20190808_175740.mp4';
run_configs{22}.video_t_fail = 3.214;
run_configs{22}.video_t_crash_peak = 5.669;
run_configs{22}.notes = 'partial recovery';

run_configs{23} = run_config_defaults;
run_configs{23}.title = '23';
run_configs{23}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-08/15_58_58_loe_detector_input_0.csv';
run_configs{23}.fail_id = 3;
run_configs{23}.t_fail = 1.46;
run_configs{23}.notes = 'during takeoff';

run_configs{24} = run_config_defaults;
run_configs{24}.title = '24';
run_configs{24}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-08/16_02_36_loe_detector_input_0.csv';
run_configs{24}.fail_id = 0;
run_configs{24}.notes = 'no_failure, std_checks1?';

run_configs{25} = run_config_defaults;
run_configs{25}.title = '25';
run_configs{25}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-08/16_09_26_loe_detector_input_0.csv';
run_configs{25}.fail_id = 0;
run_configs{25}.notes = 'hard crash';

run_configs{26} = run_config_defaults;
run_configs{26}.title = '26';
run_configs{26}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-08/16_12_41_loe_detector_input_0.csv';
run_configs{26}.fail_id = 0;
run_configs{26}.notes = 'fail override, spinning';

run_configs{27} = run_config_defaults;
run_configs{27}.title = '27';
run_configs{27}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-09/17_23_05_loe_detector_input_0.csv';
run_configs{27}.fail_id = 4;
run_configs{27}.t_fail = 2.09;
run_configs{27}.notes = 'during takeoff';

run_configs{28} = run_config_defaults;
run_configs{28}.title = '28';
run_configs{28}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-09/17_28_36_loe_detector_input_0.csv';
run_configs{28}.fail_id = 3;
run_configs{28}.t_fail = 2.17;
run_configs{28}.video_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-09/VID_20190809_192835.mp4';
run_configs{28}.video_t_fail = 3.142;
run_configs{28}.video_t_crash_peak = 4.6;
run_configs{28}.notes = 'during late takeoff';

run_configs{29} = run_config_defaults;
run_configs{29}.title = '29';
run_configs{29}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-09/17_30_44_loe_detector_input_0.csv';
run_configs{29}.fail_id = 0;
run_configs{29}.video_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-09/VID_20190809_193044.mp4';
run_configs{29}.notes = 'lost tracking';

run_configs{30} = run_config_defaults;
run_configs{30}.title = '30';
run_configs{30}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-09/17_48_56_loe_detector_input_0.csv';
run_configs{30}.fail_id = 3;
run_configs{30}.t_fail = 1.56;
run_configs{30}.video_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-09/VID_20190809_194856.mp4';
run_configs{30}.video_t_fail = 1.814;
run_configs{30}.video_t_crash_peak = 8.895;
run_configs{30}.notes = 'during late takeoff, good recovery';

run_configs{31} = run_config_defaults;
run_configs{31}.title = '31';
run_configs{31}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-09/17_50_39_loe_detector_input_0.csv';
run_configs{31}.fail_id = 0;
run_configs{31}.video_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-09/VID_20190809_195038.mp4';
run_configs{31}.notes = 'lost tracking';

run_configs{32} = run_config_defaults;
run_configs{32}.title = '32';
run_configs{32}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-09/17_53_51_loe_detector_input_0.csv';
run_configs{32}.fail_id = 1;
run_configs{32}.t_fail = 1.01;
run_configs{32}.video_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-09/VID_20190809_195352.mp4';
run_configs{32}.video_t_fail = 1.702;
run_configs{32}.video_t_crash_peak = 2.158;
run_configs{32}.notes = 'during takeoff';

run_configs{33} = run_config_defaults;
run_configs{33}.title = '33';
run_configs{33}.csv_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-09/17_55_04_loe_detector_input_0.csv';
run_configs{33}.fail_id = 0;
run_configs{33}.video_file = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-09/VID_20190809_195504.mp4';
run_configs{33}.notes = 'simple takeoff plus landing';


n_run_configs = length(run_configs);

end