function [simBusOut, x_dot] = EOMQuat(FM,wRotor,wRotor_meas,x,sim)

pos = x(1:3)';
vel = x(4:6)';
rotVelB = x(11:13)';
att = x(14:16);
phi = att(1); theta = att(2); psi = att(3);

R = eul2rotm([psi, theta, phi]);
q = rotm2quat(R);
%% Info
% z-axis points downwards
% rotations following right hand rule

%% Move drone
% convert forces to earth frame
bodyForces = [FM.Fx, FM.Fy, FM.Fz];
forces = R * bodyForces';

% move drone
acc = [0,0,sim.g] + forces'/sim.drone.mass;

% rotate drone
bodyMoments = [FM.Mx - FM.MxGyro, FM.My - FM.MyGyro, FM.Mz - FM.MzGyro];

% info: rotVelB = [p,q,r]
wx = rotVelB(1);
wy = rotVelB(2);
wz = rotVelB(3);
Ix = sim.drone.Iv(1,1);
Iy = sim.drone.Iv(2,2);
Iz = sim.drone.Iv(3,3);
rotAccB = [(wy*wz*(Iy-Iz) + bodyMoments(1))/Ix;
           (wx*wz*(Iz-Ix) + bodyMoments(2))/Iy;
           (wx*wy*(Ix-Iy) + bodyMoments(3))/Iz]';

qw = q(1); qx = q(2); qy = q(3); qz = q(4);
qDot = [    0.5 * ( -wx*qx - wy*qy - wz*qz ); %qw
            0.5 * (  wx*qw + wz*qy - wy*qz ); %qx
            0.5 * (  wy*qw - wz*qx + wx*qz ); %qy
            0.5 * (  wz*qw + wy*qx - wx*qy )]'; %qz   

att_dot = zeros(1,3);
att_dot(1) = wx + tan(theta)*(wy*sin(phi)+wz*cos(phi));
att_dot(2) = wy*cos(phi)-wz*sin(phi);
att_dot(3) = (wy*sin(phi)+wz*cos(phi))/cos(theta);

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
simBusOut.att = att';

simBusOut.q = q;

simBusOut.wRotor = wRotor';
simBusOut.wRotorMeas = wRotor_meas';

simBusOut.forces = forces';
simBusOut.forcesB = bodyForces;
simBusOut.moments = quatRotInv(q,bodyMoments);
simBusOut.momentsB = bodyMoments;

end