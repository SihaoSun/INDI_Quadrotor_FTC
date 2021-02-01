function [state] = UREstimators(sensors, fail_id, state,t)

state.t = t;

state.acc = sensors.acc;
state.vel = sensors.vel;
state.pos = sensors.pos;
state.att = sensors.att;
state.omega = sensors.omega;


state.omegaf = state.omega;
state.posf = state.pos;
state.velf = state.vel;
state.accf = state.acc;

state.wRotor = sensors.wRotor;

phi = state.att(1);
theta = state.att(2);
psi = state.att(3);

R_IB = euler2Rot(phi,theta,psi);

state.n = (R_IB*[0;0;-1])'; % describes the primary axis in the inertial frame
  
% FMax = par.w_max^2*par.k0*ones(1,4);
% FMin = par.w_min^2*par.k0*ones(1,4);
% 
% if fail_id > 0
%     FMax(fail_id) = par.fail_wRot^2*par.k0;
%     FMin(fail_id) = par.fail_wRot^2*par.k0;
% end
% state.FMax = FMax;
% state.FMin = FMin;

state.fail_id = fail_id;

end