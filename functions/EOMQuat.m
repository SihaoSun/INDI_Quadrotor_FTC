function [simBusOut, x_dot] = EOMQuat(FM,wRotor,wRotor_meas,x,sim)

pos = x(1:3)';
vel = x(4:6)';
q = x(7:10)';
q = quatnormalize(q);

rotVelB = x(11:13)';
att = x(14:16);
%% Info
% z-axis points downwards
% rotations following right hand rule

%% Move drone
% convert forces to earth frame
bodyForces = [FM.Fx, FM.Fy, FM.Fz];
forces = quatRot(q, bodyForces);

% move drone
acc = [0,0,sim.g] + forces/sim.drone.mass;

% rotate drone
bodyMoments = [FM.Mx - FM.MxGyro, FM.My - FM.MyGyro, FM.Mz - FM.MzGyro];

% info: rotVelB = [p,q,r]
pr = rotVelB(1);
qr = rotVelB(2);
rr = rotVelB(3);
Ix = sim.drone.Iv(1,1);
Iy = sim.drone.Iv(2,2);
Iz = sim.drone.Iv(3,3);
rotAccB = [(qr*rr*(Iy-Iz) + FM.Mx - FM.MxGyro)/Ix;
          (pr*rr*(Iz-Ix) + FM.My - FM.MyGyro)/Iy;
          (pr*qr*(Ix-Iy) + FM.Mz - FM.MzGyro)/Iz];
rotAccB = awgn(rotAccB',sim.rotAccNoise);

qDot = 1/2*quatmultiply(q,[0, rotVelB]);

%% calc angle such that psi is continuous
angle = flip(quat2eul(q,'ZYX'));
%% Euler Test
phi = att(1); theta = att(2); %psi = att(3);
att_dot = zeros(1,3);
att_dot(1) = pr + tan(theta)*(qr*sin(phi)+rr*cos(phi));
att_dot(2) = qr*cos(phi)-rr*sin(phi);
att_dot(3) = (qr*sin(phi)+rr*cos(phi))/cos(theta);

%%
x_dot = [vel, acc, qDot, rotAccB, att_dot]; % [1,16]
%% Create simBusOut
simBusOut.acc = acc;
simBusOut.accB = quatRotInv(q,acc + [0,0,-sim.g]); 
simBusOut.vel = vel;
simBusOut.velB = quatRotInv(q,vel);
simBusOut.pos = pos;

simBusOut.omegaDot = [0,0,0]; %rotAcc;
simBusOut.omegaDotB = rotAccB;
simBusOut.omega = [0,0,0]; %rotVelB; %TODO
simBusOut.omegaB = rotVelB;
simBusOut.att = angle;

simBusOut.q = q;

simBusOut.wRotor = wRotor';
simBusOut.wRotorMeas = wRotor_meas';

simBusOut.forces = forces;
simBusOut.forcesB = bodyForces;
simBusOut.moments = quatRotInv(q,bodyMoments);
simBusOut.momentsB = bodyMoments;

end