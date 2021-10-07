%% Script for unit testing LoeDetectorPkg functions

clear all; close all

script_dir = fileparts(mfilename('fullpath'));
temp_dir = strcat(script_dir, '/temp/');

if (~exist(temp_dir, 'dir'))
    mkdir(temp_dir)
end

%% replay_from_csv
csv_filename = strcat(script_dir, '/test_rate_control_input.csv');

Ts = 1/500;

% Control effectiveness
params.G_dp = 100;
params.G_dq = 100;
params.G_dVz = 5;

% Process and measurement noise
params.Q = 0.01; % R_1
params.R = 1; % R_2

params.fdd_k_thres = 0.25;
params.fdd_fail_p_thres = 0.9;

log = LoeDetectorPkg.replay_from_csv(csv_filename, ...
    Ts, params);

%% post_process_replay_log
log_filename = strcat(temp_dir, 'test_log.mat');

% comment out if using `replay_from_csv` output
% log = load(log_filename);

run_config.title = '11-43-10';
run_config.fail_id = 2;
run_config.t_fail = 12.39;
% run_config.labels.

log = LoeDetectorPkg.post_process_replay_log(log, run_config, params, log_filename);


%% plot_single_log
figures_single = LoeDetectorPkg.plot_single_log(log, run_config, params);


%% plot_multiple_logs
log.metadata.detection_event = log.detection_event;
log.metadata.fdds = log.fdds;
logs = {log};
[figures_multi] = LoeDetectorPkg.plot_multiple_logs(logs);


