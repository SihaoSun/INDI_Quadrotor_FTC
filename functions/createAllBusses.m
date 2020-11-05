%% Create busses
% Input
clear dummy
dummy.xTarget = 0;
dummy.yTarget = 0;
dummy.zTarget = 0;
dummy.yawTarget = 0;
dummy.manual = [0 0 0 0 0];
Simulink.Bus.createObject(dummy);
inputsBus = slBus1; clearvars slBus1;

% Sensor
clear dummy
dummy.acc = [0,0,0];
dummy.vel = [0,0,0];
dummy.pos = [0,0,0];
dummy.omega = [0,0,0];
dummy.att = [0,0,0];
dummy.wRotor = [0,0,0,0];
Simulink.Bus.createObject(dummy); 
sensorsBus = slBus1; clearvars slBus1;

% sim
clear dummy
dummy.acc = [0,0,0];
dummy.accB = [0,0,0];
dummy.vel = [0,0,0];
dummy.velB = [0,0,0];
dummy.pos = [0,0,0];

dummy.omegaDot = [0,0,0];
dummy.omegaDotB = [0,0,0];
dummy.omega = [0,0,0];
dummy.omegaB = [0,0,0];
dummy.att = [0,0,0];
dummy.q = [0,0,0,0]; % [x,y,z,w]

dummy.wRotor = [0,0,0,0];
dummy.wRotorMeas = [0,0,0,0];

dummy.forces = [0,0,0];
dummy.forcesB = [0,0,0];
dummy.moments = [0,0,0];
dummy.momentsB = [0,0,0];

Simulink.Bus.createObject(dummy); 
simBus = slBus1; clearvars slBus1;

% wind
clear dummy
dummy.x = 0;
dummy.y = 0;
dummy.z = 0;
Simulink.Bus.createObject(dummy); 
windBus = slBus1; clearvars slBus1;

% Force and moments
clear dummy
dummy.Fx = 0;
dummy.Fy = 0;
dummy.Fz = 0;
dummy.Mx = 0;
dummy.My = 0;
dummy.Mz = 0;
dummy.MxGyro = 0;
dummy.MyGyro = 0;
dummy.MzGyro = 0;
Simulink.Bus.createObject(dummy); 
FMBus = slBus1; clearvars slBus1;

% state
clear dummy
dummy.acc = [0,0,0];
dummy.accf = [0,0,0];
dummy.vel = [0,0,0];
dummy.velf = [0,0,0];
dummy.velB = [0,0,0];
dummy.pos = [0,0,0];
dummy.posf = [0,0,0];
dummy.omega = [0,0,0];
dummy.omegaf = [0,0,0];
dummy.att = [0,0,0];
dummy.n = [0,0,0];
dummy.wRotor = [0,0,0,0];
dummy.omegaUV = [0,0,0];
dummy.omegafUV = [0,0,0];
dummy.FMax = [0,0,0,0];
dummy.FMin = [0,0,0,0];
dummy.fail_id = 0;
dummy.fail_id_quick = 0;
dummy.uvDot_max = [0;0];
dummy.uvDot_min = [0;0];
dummy.uv_max = [0;0];
dummy.uv_min = [0;0];
dummy.vel_ref = [0;0;0];
dummy.pos_ref = [0;0;0];

Simulink.Bus.createObject(dummy); 
stateBus = slBus1; clearvars slBus1;
