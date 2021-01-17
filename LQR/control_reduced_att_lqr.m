function [U] = control_reduced_att_lqr(state,n_des,f_ref, r_cmd, par)

% This is the LQR control method proposed by Mark Mueller

K = par.lqr.K_lqr0;

u0 = 0; v0 =0;
if state.fail_id > 0
    if par.DRF_enable < 1
        if state.fail_id == 1
            K = par.lqr.K_lqr1;
            u0 = 0; v0 = -par.axis_tilt;
        elseif state.fail_id == 2
            K = par.lqr.K_lqr2;
            u0 =  -par.axis_tilt; v0 =0;
        elseif state.fail_id == 3
            K = par.lqr.K_lqr3; 
            u0 = 0; v0 = par.axis_tilt;
        elseif state.fail_id == 4
            K = par.lqr.K_lqr4;    
            u0 = par.axis_tilt; v0 =0;
        end
    else
        if state.fail_id == 1 || state.fail_id == 3
            K = par.lqr.K_lqr13;
        else
            K = par.lqr.K_lqr24;
        end    
    end
end

K_lqr = K;

s = par.lqr.s;
k0 = par.k0;
Iz = par.Iz;
R_xy_uv = par.lqr.R_xy_uv;

phi = state.att(1);
theta = state.att(2);
psi = state.att(3);
tmp = par.lqr.R_xy_uv * [state.omegaf(1), state.omegaf(2)]';
u = tmp(1);
v = tmp(2);
r = state.omegaf(3);

R_IB = [cos(psi)*cos(theta) , cos(psi)*sin(theta)*sin(phi)-sin(psi)*cos(phi), cos(psi)*sin(theta)*cos(phi)+sin(psi)*sin(phi);
        sin(psi)*cos(theta) , sin(psi)*sin(theta)*sin(phi)+cos(psi)*cos(phi), sin(psi)*sin(theta)*cos(phi)-cos(psi)*sin(phi);
        -sin(theta)          , cos(theta)*sin(phi)                          , cos(theta)*cos(phi)                          ];
    
h = R_IB\n_des;
eta = R_xy_uv * [h(1); h(2)];

Muv0 = k0 * s * [state.wRotor(4).^2 - state.wRotor(2).^2;
               state.wRotor(1).^2 - state.wRotor(3).^2];

Muv = -K_lqr*[u-u0, v-v0, eta(1), eta(2), Muv0(1), Muv0(2)]';
T_ref = f_ref;
Mz_ref = -par.YRC_Kp_r*(r-r_cmd)*Iz;

U = zeros(4,1);

U(1) = Muv(1);
U(2) = Muv(2);
U(3) = T_ref;
U(4) = Mz_ref;

end