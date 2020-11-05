clear all

addpath(genpath('Bebop2Model'));
addpath('functions');
addpath('INDI_FTC');
addpath('sim_modules');

%%
simParams;
controlParams;

%% sim
createAllBusses;

simulation_period = 10.0;

sim('frame.slx',simulation_period);
