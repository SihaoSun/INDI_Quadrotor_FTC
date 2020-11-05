function [n_des] = URpositionControl(inputs, state, par)

persistent errorInt; if isempty(errorInt); errorInt = [0,0,0]; end

maxAngle = par.position_maxAngle;

% position control
errorPos = [inputs.xTarget, inputs.yTarget, inputs.zTarget]  - state.posf;

velTarget = par.position_Kp_pos.*errorPos;
maxVel = par.position_maxVel;
velTarget = max(min(velTarget,maxVel),-maxVel);
state.vel_ref(1:2) = velTarget(1:2);
state.pos_ref = [inputs.xTarget, inputs.yTarget, inputs.zTarget]';

% velocity control
errorVel = velTarget - state.velf;
errorInt = errorInt + errorVel/par.freq;
intLim = par.position_intLim;
errorInt = max(min(errorInt,intLim),-intLim);

% reference acceleration
a_ref = par.position_Kp_vel.*errorVel + par.position_Ki_vel.*errorInt;
a_ref(3) = a_ref(3) - par.g;

maxLateral = abs(par.g*tan(maxAngle));
latRatio = sqrt(a_ref(1)^2 + a_ref(2)^2)/maxLateral;
a_ref(1) = a_ref(1)/(max(latRatio,1));
a_ref(2) = a_ref(2)/(max(latRatio,1));

% normalise
n_des = a_ref/norm(a_ref);

end