function [Fx,Fy,Fz,Mx,My,Mz] = simpleAeroModel(omega,simBusIn,sim)

w = omega;

%Fc = -sim.aero.k0.*[0 0 w(1)^2+w(2)^2+w(3)^2+w(4)^2]';
Fc = [0, 0, sum(-sim.aero.k0.*[w(1)^2, w(2)^2, w(3)^2, w(4)^2]) ];

%Mc = [sim.aero.k0*sim.drone.b*(w(1)^2-w(2)^2-w(3)^2+w(4)^2), sim.aero.k0*sim.drone.l*(w(1)^2+w(2)^2-w(3)^2-w(4)^2), sim.aero.t0*sim.drone.signr*(-(w(1)^2+w(3)^2)+(w(2)^2+w(4)^2))];
Mc = zeros(1,3);
Mc(1) = sim.drone.b*sum(sim.aero.k0.*[w(1)^2, -w(2)^2, -w(3)^2, w(4)^2]); 
Mc(2) = sim.drone.l*sum(sim.aero.k0.*[w(1)^2, w(2)^2, -w(3)^2, -w(4)^2]); 
Mc(3) = sim.drone.signr*sum(sim.aero.t0.*[-w(1)^2, w(2)^2, -w(3)^2, w(4)^2]);

MDrag = -sign(simBusIn.omegaB).*sim.aero.rotDrag.*(simBusIn.omegaB.^2);

M = Mc + MDrag;

Fx = Fc(1); Fy = Fc(2); Fz = Fc(3);
Mx = M(1); My = M(2); Mz = M(3);
       

end