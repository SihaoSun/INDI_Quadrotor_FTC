%% Controller related Parameters
% Controls
par.freq = 200; % control frequency

%
%   (1)<--2b -->(2)
%      \       / ^
%       \     /  |
%       /     \  | 2l
%      /       \ v
%   (4)         (3)

par.fail_id = [3];      % index of the failured propeller
par.DRF_enable = 0;     % failure of two diagonal rotors?
par.fail_time = 1.0;    % moment failiure occurs
par.allocType = 2;

% drone parameters
loadParams = load('Hummingbird_hybrid.mat');
par.b = loadParams.parameters.b;     % [m]
par.l = loadParams.parameters.l;
par.Ix = loadParams.parameters.Iv(1,1); % [kg m^2]
par.Iy = loadParams.parameters.Iv(2,2);
par.Iz = loadParams.parameters.Iv(3,3);
par.mass = loadParams.parameters.m;  % [kg]
par.g = 9.81;    
par.Ip = 8e-6;      % propeller inertia
par.act_dyn = 30;   % actuator band-width [Hz]

% par.k0 = 1.9e-6;    % propeller thrust coefficient
% par.t0 = 1.9e-8;    % torque coefficient
par.k0 = 6e-6;
par.t0 = 8.7230e-07;

par.w_max = 5000;   % max / min propeller rotation rates, [rad/s]
par.w_min = 0;

%% INDI reduced att control
par.chi = 0;          % output scheduling parameter, [deg].
par.pos_z_p_gain = 1;   % altitude control pd gains
par.pos_z_d_gain = 1.4;
par.axis_tilt = 0.1;    % primary axis tilting param, 0 ~ 0.2,  
                        % must be 0 for double rotor failure cases

par.att_p_gain = 100;   % attitude control pd gains 
par.att_d_gain = 20;
par.t_indi = 0.02;      % low-pass filter time constant, [s]

% Yaw control
par.YRC_Kp_r = 5.0;
par.YRC_Kp_psi = 5.0;

% position control
par.position_maxAngle = 30/57.3;    % maximum thrust tilt angle [rad]  
par.position_Kp_pos = 1*[1.5, 1.5, 1.5];  % position control gains
par.position_maxVel = 10;           % maximum velocity
par.position_intLim = 5.0; 
par.position_Ki_vel = 0.1*[1.0, 1.0, 1.0];  % velocity gains
par.position_Kp_vel = 1*[2.0, 2.0, 2.0];

%% QP allocation for indi
R_xy_uv = inv([par.l, par.l; -par.b, par.b]);
par.R_xy_uv = R_xy_uv/(norm(R_xy_uv));

par.qp.nu1Gain  =   1e3;
par.qp.nu2Gain  =   1e3;
par.qp.nurGain  =   1e2;
par.qp.nuzGain  =   1e2;
par.qp.FGain    =   0.0; % weight on control inputs
par.qp.rate_envGain = 0*1e5;
par.qp.maxIter = 10;
par.qp.envp_timeHoriz = 0.1;
par.qp.envp_maxOmega = 10;

%% LQR 
lqrParams;
