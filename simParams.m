%% Simulation parameters

simVars.freq = 500;        % simulation frequency
simVars.aeroModel = 0;      % aerodynamic model 
                            % 0 = simple aero model, 1 = complex model
                            % 2 = hybrid aero model
                            
simVars.g = 9.8124;         % gravity in Delft
simVars.pos0 = [0,0,0];     % initial position, [m]
simVars.vel0 = [0,0,0];     % initial velocity, [m/s]
simVars.att0 = [0,0,0];     % initial roll / pitch / yaw, [rad]
simVars.q0 = eul2quat(flip(simVars.att0),'ZYX');
simVars.omega0 = [0, 0, 0]; % initial body rate, [rad/s]
simVars.actuator.w0 = [720; 720; 720; 720];
                            % initial propeller speeds

% Sensor noise
add_noise = 1;              % add sensor noise?
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
simVars.visFreq = 50;   % visualization frequency
simVars.track = true;   % track the quadrotor for visualization?

% drone related parameters for simulation
loadedParams = load('Bebop2_guido_parameters.mat');
simVars.drone.Iv = loadedParams.parameters.Iv;
simVars.drone.Ip = loadedParams.parameters.Ip;
simVars.drone.signr = -1;
simVars.drone.b = loadedParams.parameters.b;
simVars.drone.l = loadedParams.parameters.l;
simVars.drone.R = loadedParams.parameters.R;
simVars.drone.mass = loadedParams.parameters.m;
% simVars.drone.I = 0.0021;

simVars.actuator.t_w = 1/30;        %  actuator time constant [s]
simVars.actuator.rateRise = 5e4;    %  actuator rate limit [rad/s^2]
simVars.actuator.rateFall = -5e4;
simVars.actuator.wMax = 1200;       %  max/min propeller rotation rates, [rad/s] 
simVars.actuator.wMin = 0;

% params for simplex aerodynamic model
simVars.aero.k0 = 1.9035e-6.*ones(1,4); % propeller thrust coefficient
simVars.aero.t0 = 1.9202951e-8;         % propeller drag coefficient
simVars.aero.dr = -1.918988e-3;         % quadrotor yaw damping [Nm.s]
simVars.aero.rotDrag = [1e-4, 1e-4, 1e-4];  % quadrotor rotation damping [Nm.s]