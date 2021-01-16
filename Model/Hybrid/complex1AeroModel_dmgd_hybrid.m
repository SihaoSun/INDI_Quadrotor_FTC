function [Fx,Fy,Fz,Mx,My,Mz,Fwx, Fwy, Fwz, Mwx, Mwy, Mwz] = ...
    complex1AeroModel_dmgd_hybrid(wRotor,simBusIn,wind,sim)
% This model can be used in both damaged and nominal cases


phi = simBusIn.att(1);
theta = simBusIn.att(2);
psi = simBusIn.att(3);

R_IB = [cos(psi)*cos(theta) , cos(psi)*sin(theta)*sin(phi)-sin(psi)*cos(phi), cos(psi)*sin(theta)*cos(phi)+sin(psi)*sin(phi);
        sin(psi)*cos(theta) , sin(psi)*sin(theta)*sin(phi)+cos(psi)*cos(phi), sin(psi)*sin(theta)*cos(phi)-cos(psi)*sin(phi);
        -sin(theta)          , cos(theta)*sin(phi)                          , cos(theta)*cos(phi)                          ];

V_aero = R_IB \([wind.x, wind.y, wind.z]' + [simBusIn.vel(1), simBusIn.vel(2) simBusIn.vel(3)]');

[F,M] = FM_BB2_6DOF(V_aero,simBusIn.omegaB',wRotor,sim.drone);
[Fw, Mw, alpha_r, alpha_l] = F_M_wing_V2(V_aero', simBusIn.omegaB, simBusIn.delta_ar, simBusIn.delta_al);

F = F + Fw; M = M + Mw;
% 
% Fx = Fx + F_wing(1); Fy = Fy + F_wing(2); Fz = Fz + F_wing(3);
% Mx = Mx + M_wing(1); My = My + M_wing(2); Mz = Mz + M_wing(3);

Fx = F(1); Fy = F(2); Fz = F(3);
Mx = M(1); My = M(2); Mz = M(3);

Fwx = Fw(1); Fwy = Fw(2); Fwz = Fw(3);
Mwx = Mw(1); Mwy = Mw(2); Mwz = Mw(3);
end