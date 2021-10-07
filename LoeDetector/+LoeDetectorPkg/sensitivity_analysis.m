function [] = sensitivity_analysis(force_post_processing)

if ~exist('do_post_processing', 'var')
    force_post_processing = false;
end

constants = LoeDetectorPkg.Constants();

script_dir = fileparts(mfilename('fullpath'));
replay_log_dir = strcat(script_dir, '/sensitivity_analysis_logs/');

pdf_export_sensitivity = '/home/bramsvs/src/fddpaper/plots/detection_delay_sensitivity';
pdf_export_missed_detection_false_alarm = '/home/bramsvs/src/fddpaper/plots/missed_false';

%% Generate different parameter sets
param_config.G_dp.values = [80 100 120];
param_config.G_dp.xlabel_text = '$G_{p}\ [-]$';
param_config.G_dp.default = 100;

param_config.G_dq.values = [80 100 120];
param_config.G_dq.xlabel_text = '$G_{q}\ [-]$';
param_config.G_dq.default = 100;

param_config.G_dVz.values = [4 5 6];
param_config.G_dVz.xlabel_text = '$G_{a_z}\ [-]$';
param_config.G_dVz.default = 5;

param_config.Q.values = [0.0025 0.005 0.01 0.02 0.04];
param_config.Q.indices = [0.0025 0.005 0.01 0.02 0.04]*1000;
param_config.Q.xlabel_text = '$Q\ [\times 10^{-3}]$';
param_config.Q.default = 0.01;

% param_config.R.values = [0.25 .5 1 2 4];
% param_config.R.xlabel_text = '$R\ [-]$';
% param_config.R.default = 1;

param_config.fdd_k_thres.values = [0.15 0.20 0.25 0.30 0.35];
param_config.fdd_k_thres.xlabel_text = '$k_{\mathrm{thres}}\ [-]$';
param_config.fdd_k_thres.default = 0.25;

param_config.fdd_fail_p_thres.values = [0.86 0.88 0.90 0.92 0.94 ];
param_config.fdd_fail_p_thres.xlabel_text = '$(P_{\mathrm{fail}})_{\mathrm{thres}}\ [-]$';
param_config.fdd_fail_p_thres.default = 0.90;

param_fields = fieldnames(param_config)';

% First create the default set
default_params = struct;
default_params.id = 'default';
% for param_index = 1:length(param_fields)
    
for parameter_key = string(param_fields)
    default_params.(parameter_key) = param_config.(parameter_key).default;
end

param_sets = {default_params};

for parameter_key = string(param_fields)
    
    fprintf("Parameter: %s\n", parameter_key)
    
    if isfield(param_config.(parameter_key), 'values')
        values = param_config.(parameter_key).values;
        
        for i_value = 1:length(values)
            adjusted_value = values(i_value);
            if adjusted_value ~= default_params.(parameter_key)
                params = default_params;
                params.(parameter_key) = adjusted_value;
                params.adjusted_parameter = parameter_key;
                params.id = strcat(parameter_key, '_',num2str(adjusted_value, 2));
                disp(params)
                param_sets{end+1} = params;
            end
        end
    end
end

n_param_sets = length(param_sets);


%% Get run configs
[run_configs, n_run_configs] = LoeDetectorPkg.run_configs();

Ts = 1/500;

use_cached_logs = true;

%% Generate replay_configs from run_configs and parameter sets
replay_configs = {};
for params = param_sets
    params = params{1};
    for i_run_config = 1:n_run_configs
        run_config = run_configs{i_run_config};

        replay_config.params = params;
        replay_config.run_config = run_config;
        
        replay_config.log_filename = ...
            strcat(replay_log_dir, run_config.title, '_', params.id, '.mat');
        % note the log_filename functions as cache-key

        replay_configs{end+1} = replay_config;
    end
end
n_replay_configs = length(replay_configs);


%% Do the actual replays, results are saved to the log files
parfor i_replay_config = 1:n_replay_configs

    replay_config = replay_configs{i_replay_config};

    params = replay_config.params;
    run_config = replay_config.run_config;
    log_filename = replay_config.log_filename;

    csv_file = run_config.csv_file;

    if isfile(log_filename) && use_cached_logs
        fprintf('%d of %d: loading cached log\n', i_replay_config, n_replay_configs);
        log = load(log_filename, 'post_processing_done');
        must_do_post_processing = ~isfield(log, 'post_processing_done');
        if must_do_post_processing
            log = load(log_filename);
        end
    else
        fprintf('%d of %d: replaying from csv\n', i_replay_config, n_replay_configs);
        log = LoeDetectorPkg.replay_from_csv(csv_file, Ts, params);
        must_do_post_processing = true;
    end
    
    log.i_replay_config = i_replay_config;
 
    if must_do_post_processing || force_post_processing
        fprintf('%d of %d: doing post processing\n', i_replay_config, n_replay_configs);
        log = LoeDetectorPkg.post_process_replay_log(log, run_config, params, log_filename);
    else
        fprintf('%d of %d: skipping post processing, use `force_post_processing` if needed\n', i_replay_config, n_replay_configs);
    end
    % [figures] = LoeDetectorPkg.plot_single_log(log);
end


%% Load relevant data from log files
logs = {};
for i_replay_config = 1:n_replay_configs
    replay_config = replay_configs{i_replay_config};
    log_filename = replay_config.log_filename;
    
    fprintf('Loading from log_filename: %s\n', log_filename);

    logs{end+1} = load(log_filename, ...
        'i_replay_config', ...
        'run_config', 'params', ...
        'false_alarms', ...
        'missed_detection', ...
        'detection_event', 'detection_delay', 'correct_actuator', 'fdds');
end


%% Plot multiple logs, on
% [figures] = LoeDetectorPkg.plot_multiple_logs(logs);

%% Print missed detections and false alarms
for i_log = 1:length(logs)
    log = logs{i_log};

    if log.missed_detection || log.false_alarms
        fprintf('\nReplay: %i, run: %s\n', log.i_replay_config, log.run_config.title)
        fprintf('Param_id: %s\n', log.params.id)

        if log.missed_detection
            fprintf('    Missed detection: %i\n', log.missed_detection)
        end
        if log.false_alarms
            fprintf('    False alarms: %i\n', log.false_alarms)
            fprintf('    Fail_id: %i\n', log.run_config.fail_id)
        end
    end
end


%% Plot a single log



%% Plotting

fig = figure;
fig.Renderer = 'Painters';

size = [constants.PAPER_COLUMN_WIDTH 9.5];
set(fig, 'Units', 'centimeters')
set(fig, 'Position', [[100 100] size])

missed_false = {};
default_detection_delays = [];

for param_index = 1:length(param_fields)
    parameter_key = param_fields{param_index};

    fprintf("Parameter: %s\n", parameter_key)
    values = param_config.(parameter_key).values;

    xlabel_text = param_config.(parameter_key).xlabel_text;

    plt = subplot(3, 2, param_index);
    xlabel(xlabel_text, 'Interpreter', 'latex')
    if mod(param_index, 2)
        ylabel('t_d [s]')
    end
    hold on

    detection_delays_per_adjusted_parameter = [];
    boxplot_indices = []; % the values of the parameters
    n_values = length(values);
    missed_false{param_index} = zeros(n_values, 2);

    for i_value = 1:n_values
        value = values(i_value);
        if value == param_config.(parameter_key).default
            get_default_logs = true;
        else
            get_default_logs = false;
        end
        fprintf("Value: %i\n", value)
        [filtered_logs, n_filtered_logs] = filter_logs(logs, parameter_key, value, get_default_logs);

%         printstruct(filtered_logs);

        % Gather detection delays from logs
        detection_delays = [];
        x_values = [];
%         false_alarms = zeros(1, n_values);

        for i_log = 1:n_filtered_logs
            log = filtered_logs{i_log};
            if isstruct(log.detection_event)
                detection_delays(i_log) = log.detection_event.delay;
            end
            
            missed_false{param_index}(i_value, 1) = missed_false{param_index}(i_value, 1) + log.missed_detection;
            missed_false{param_index}(i_value, 2) = missed_false{param_index}(i_value, 2) + log.false_alarms;
        end
        
        detection_delays_per_adjusted_parameter(1:length(detection_delays), i_value) = detection_delays;
        if isfield(param_config.(parameter_key), 'indices')
            boxplot_indices = param_config.(parameter_key).indices;
        else
            boxplot_indices(i_value) = value;
        end
        
        x_values(1:length(detection_delays)) = value;
        
%         plot(x_values, detection_delays, 'b.')
    end
    boxplot(detection_delays_per_adjusted_parameter, boxplot_indices);
    plt.YLim = [0 0.3];
    yticks([0 0.1 0.2 0.3])
end

saveas(fig, pdf_export_sensitivity, 'epsc')


%% Plot missed detections and false alarms per parameter
fig2 = figure;
fig2.Renderer = 'Painters';

size = [constants.PAPER_COLUMN_WIDTH 8];
set(fig2, 'Units', 'centimeters')
set(fig2, 'Position', [[100 100] size])

for param_index = 1:length(param_fields)
    parameter_key = param_fields{param_index};
    xlabel_text = param_config.(parameter_key).xlabel_text;

    figure(fig2)
    plt2 = subplot(4, 2, param_index);
    hold on
    xlabel(xlabel_text, 'Interpreter', 'latex')
    if mod(param_index, 2)
        ylabel('n')
    end
    
    plt2.YLim = [0 10];
    
    param_values = param_config.(parameter_key).values;
    bar(missed_false{param_index})
    set(gca,'xticklabel', param_values);
end

saveas(fig2, pdf_export_missed_detection_false_alarm, 'epsc')


% %% Plot detection delays of runs for default parameter set
% 
% fig_default_detection_delays = figure;
% fig_default_detection_delays.Renderer = 'Painters';
% 
% size = [PAPER_COLUMN_WIDTH 6];
% set(fig_default_detection_delays, 'Units', 'centimeters')
% set(fig_default_detection_delays, 'Position', [[100 100] size])
% 
% [default_logs, n_default_logs] = filter_logs(logs, 'n/a', 'n/a', 'true');


function [filtered_logs, n_filtered_logs] = filter_logs(logs, adjusted_parameter, value, default)
    
filtered_logs = {};
for i = 1:length(logs)
    log = logs{i};
    if strcmp(log.params.id, 'default')
        if default
            filtered_logs{end+1} = log;
        end
        continue
    end
    if strcmp(log.params.adjusted_parameter, adjusted_parameter) ...
            && log.params.(log.params.adjusted_parameter) == value
        filtered_logs{end+1} = log;
    end
end

n_filtered_logs = length(filtered_logs);

end

end