function [nu,dY, Y] = pseudo_control_att_indi(state, n_des, lambda, nB, r_ref, Z_ref, Vz_ref, par)
phi = state.att(1);
theta = state.att(2);
psi = state.att(3);

p = state.omegaf(1);
q = state.omegaf(2);
r = state.omegaf(3);

Vz = state.vel(3);
Z = state.pos(3);

nx = nB(1);
ny = nB(2);

chi = par.chi/57.3;

if state.fail_id == 1 || state.fail_id == 3
    chi = pi- par.chi/57.3;
end

R_IB = eul2rotm([psi, theta , phi]);
h = R_IB\n_des;
h1 = h(1); h2 = h(2);

Y = [h1-nx; h2-ny];
dY = [-h(3)*q + h(2)*r + lambda(1);
       h(3)*p - h(1)*r + lambda(2)];

Y = [cos(chi) sin(chi); -sin(chi) cos(chi)] * Y;
dY = [cos(chi) sin(chi); -sin(chi) cos(chi)] * dY;
   
kpz = par.pos_z_p_gain;
kdz = par.pos_z_d_gain;
kp = par.att_p_gain;
kd = par.att_d_gain;
kpr = par.YRC_Kp_r;  % TODO: kpr has not been asigned in the QgroundControl.

nu1 =  - kdz*(Vz-Vz_ref) - kpz*(Z-Z_ref);
nu2 =  - kd * dY(1) - kp*Y(1);
nu3 =  - kd * dY(2) - kp*Y(2);
nu4 =  - kpr* (r-r_ref);

nu = [nu1; nu2; nu3; nu4];


end