clear all

addpath('Bebop2Model');
addpath('functions');
addpath('INDI_FTC');
addpath('sim_modules');

%% Controller related Parameters
% Controls
par.freq = 500;
par.g = 9.81;

par.w_max = 1200; % rad/s
par.w_min = 0; % rad/s

par.mass = 0.375;
par.fail_id = [1];
par.DRF_enable = 1;

par.fail_time = 0.0;

par.k0 = 1.9e-6;
par.t0 = 1.9e-8;
par.b = 0.1150;
par.l = 0.0875;
par.Ix = 0.0014;
par.Iy = 0.0013;
par.Iz = 0.0025;

% INDI reduced att control
par.chi = 105; %deg
par.pos_z_p_gain = 20;
par.pos_z_d_gain = 8;
par.axis_tilt = 0.0;

par.att_p_gain = 200;
par.att_d_gain = 30;
par.t_indi = 0.02;

% Yaw control
par.YRC_Kp_r = 5.0;
par.YRC_Kp_psi = 5.0;

% position control
par.position_maxAngle = 30/57;
par.position_failGain = 1.0;
par.position_Kp_pos = [1.5, 1.5, 1.5];
par.position_maxVel = 10;
par.position_intLim = 5.0; 
par.position_Ki_vel = [1.0, 1.0, 1.0];
par.position_Kp_vel = [2.0, 2.0, 2.0];

%% Simulation parameters

simVars.freq = 1000;
simVars.aeroModel = 1; %0 = simple aero model, 1 = complex model
simVars.g = 9.8124; % gravity in Delft
simVars.pos0 = [0,0,0]; % initial position
simVars.vel0 = [0,0,0]; % initial velocity
simVars.att0 = [0,-0,0]./57.3; % initial attitude
simVars.q0 = eul2quat(flip(simVars.att0),'ZYX');
simVars.omega0 = [-0,-0,0]; % initial rotational speed

% Sensor noise
add_noise = 0;
simVars.accNoise = add_noise*50; 
simVars.rotAccNoise = add_noise*1000;

simVars.sensor.posNoise = add_noise*[1,1,1]*1e-8;
simVars.sensor.velNoise = add_noise*[1,1,1]*1e-8;
simVars.sensor.accNoise = add_noise*[1,1,1]*1e-3;
simVars.sensor.attNoise = add_noise*[1,1,1]*1e-8;
simVars.sensor.omegaNoise = add_noise*[1,1,1]*2e-4;
simVars.sensor.wRotorNoise = add_noise*[1,1,1,1]*0;

simVars.sensor.omega_bias = add_noise*[0.0, 0.0, 0.0];
simVars.sensor.acc_bias = add_noise*[0.0,-0.0,0.0];

% visualization
simVars.visFreq = 20;
simVars.track = true;

% drone related parameters
loadedParams = load('Bebop2_guido_parameters.mat');
simVars.drone.Iv = loadedParams.parameters.Iv;
simVars.drone.Ip = loadedParams.parameters.Ip;
simVars.drone.signr = -1;
simVars.drone.b = loadedParams.parameters.b;
simVars.drone.l = loadedParams.parameters.l;
simVars.drone.R = loadedParams.parameters.R;
simVars.drone.mass = loadedParams.parameters.m;
simVars.drone.I = 0.0021;

simVars.actuator.t_w = 1/30; %actuator dynamics
simVars.actuator.rateRise = 5e4;
simVars.actuator.rateFall = -5e4;
simVars.actuator.wMax = 1200;
simVars.actuator.wMin = 0;
simVars.actuator.w0 = [720; 720; 720; 720];

% params for simplex aerodynamic model
simVars.aero.k0 = 1.9035e-6.*ones(1,4);
simVars.aero.t0 = 1.9202951e-8;
simVars.aero.dr = -1.918988e-3;
simVars.aero.rotDrag = [1e-4, 1e-4, 1e-4];

%% create busses
createAllBusses

%% sim

sim('frame.slx',10.0);
