function [Fx,Fy,Fz,Mx,My,Mz] = complex1AeroModel_dmgd(wRotor,simBusIn,wind,sim)
% This model can be used in both damaged and nominal cases

phi = simBusIn.att(1);
theta = simBusIn.att(2);
psi = simBusIn.att(3);

R_IB = [cos(psi)*cos(theta) , cos(psi)*sin(theta)*sin(phi)-sin(psi)*cos(phi), cos(psi)*sin(theta)*cos(phi)+sin(psi)*sin(phi);
        sin(psi)*cos(theta) , sin(psi)*sin(theta)*sin(phi)+cos(psi)*cos(phi), sin(psi)*sin(theta)*cos(phi)-cos(psi)*sin(phi);
        -sin(theta)          , cos(theta)*sin(phi)                          , cos(theta)*cos(phi)                          ];

V_aero = R_IB \([wind.x, wind.y, wind.z]' + [simBusIn.vel(1), simBusIn.vel(2) simBusIn.vel(3)]');

[F,M] = FM_BB2_6DOF(V_aero,simBusIn.omegaB',wRotor,sim.drone);

Fx = F(1); Fy = F(2); Fz = F(3);
Mx = M(1); My = M(2); Mz = M(3);
end