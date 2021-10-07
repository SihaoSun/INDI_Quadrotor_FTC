clear all

addpath(genpath('Model'));
addpath('functions');
addpath('INDI_FTC');
addpath('LoeDetector');
addpath('LQR');
addpath('sim_modules');

%%
simParams;
controlParams;
LoeDetector_init;
%% sim
createAllBusses;

simulation_period = 10.0;

sim('frame.slx',simulation_period);
