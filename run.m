clear all

addpath(genpath('Model'));
addpath('functions');
addpath('INDI_FTC');
addpath('LQR');
addpath('sim_modules');

%%
simParams;
controlParams;

%% sim
createAllBusses;

simulation_period = 2.0;

sim('frame.slx',simulation_period);
