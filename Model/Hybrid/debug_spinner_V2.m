load parameters_swept r_r r_l install n Si rho c Sweep_angle

%%
% load parameters_aaa r_r r_l install n Si rho c
% 
% Si = Si.*ones(n,1);
% c = c.*ones(n,1);
% % omega = [-0.2,0,-20]';
%%
omega = [10,0,0]';
% omega = [0,0,-20]';
% omega = [0,0,-20]';
V = [0,0,0]';
delta_ar = 0;
delta_al = 0;

%%
[F_tot,M_tot,alpha_r,alpha_l] = F_M_wing_swept(V,omega,delta_ar,delta_al)


