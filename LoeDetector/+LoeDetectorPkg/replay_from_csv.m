function [log] = replay_from_csv(csv_filename, ...
    Ts, params)
%% Replay LOE detector from csv
%   Inputs:
%       csv_file
%       G_dp, G_dq, G_dVz: control effectiveness

%% Initialization
% Read from csv
data = readtable(csv_filename);

timestamps = data.timestamp;
n_samples = length(timestamps);

log.time_real = (timestamps - timestamps(1))/1e6;

% TODO: make configurable?
rates = [data.rates_0_ data.rates_1_ data.rates_2_]';

if ismember('accel_2_', data.Properties.VariableNames)
    % for old rate_control_input PX4 messages
    acc_z = data.accel_2_';
else
    % for new loe_detector_input PX4 messages
    acc_z = data.acc_z';
end

rpm_meas = [data.esc_rpm_0_ data.esc_rpm_1_ data.esc_rpm_2_ data.esc_rpm_3_]';

log.time_sim = [0:Ts:Ts*(length(timestamps)-1)];

n_meas = 3; % [p q a_z];
n_act = size(rpm_meas,1);
n_rates = size(rates, 1); % only need to differentiate rates

G_dp = params.G_dp;
G_dq = params.G_dq;
G_dVz = params.G_dVz;

Q = params.Q; % R_1
R = params.R; % R_2

fdd_k_thres = params.fdd_k_thres;
fdd_fail_p_thres = params.fdd_fail_p_thres;

control_eff = [G_dp G_dq G_dVz]';
fail_diagnosis_params.fdd_k_thres = fdd_k_thres;
fail_diagnosis_params.fdd_fail_p_thres = fdd_fail_p_thres;

LoeDetectorPkg.init

loeDetector = LoeDetectorPkg.LoeDetector(loe_detector_filter_sys, ...
    Ts, ...
    n_meas, n_act, n_rates, ...
    Q, R, control_eff, ...
    fail_diagnosis_params);
landDetector = LoeDetectorPkg.LandDetector(700);
changeDetector = BlocksPkg.ChangeDetector();

% Cell of fault detection events
log.fdds = {};

%% Main loop: run the filter through all N samples
for k = 1:n_samples
    act_rads_meas = rpm_meas(:,k)*2*pi/60;
    
    landed = landDetector.step(act_rads_meas);
    
    [fail_id, log_step] = loeDetector.step(rates(1:3,k), acc_z(k), act_rads_meas, landed);
    
    % Log fail_id change events
    [fail_id_changed, fail_id] = changeDetector.step(fail_id);
    if fail_id_changed
        fdd.k = k;
        fdd.id = fail_id;
        fdd.t = log.time_real(k);
        fdd.landed = landed;
        log.fdds{end+1} = fdd;
    end
    
    if mod(k,10000) == 0
        disp(k)
    end
    
    log_step.landed = landed;

    % Append all `log_step`-fields to `log`
    fields = fieldnames(log_step);
    for i = 1:length(fields)
        log.(fields{i})(:,k) = log_step.(fields{i});
    end

end

end

