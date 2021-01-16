function [F_tot,M_tot,alpha_r,alpha_l] = F_M_wing_V2(V,omega,delta_ar,delta_al)

% load parameters r_r r_l install n 

persistent r_r r_l install n rho Si c;

if isempty(r_r)
    dummy = load('parameters.mat');
    r_r = dummy.r_r;
    r_l = dummy.r_l;
    install = dummy.install;
    n = dummy.n;
    rho = dummy.rho;
    Si = dummy.Si;
    c = dummy.c;
end

% the control deflection angle, assume act from 50% of the half span
delta_ar_all = zeros(1,n);
delta_al_all = zeros(1,n);
for i = n/2+1:1:n
    delta_ar_all(i) = delta_ar;
    delta_al_all(i) = delta_al;
end

if sum([abs(V),abs(omega)])<1e-6
    F_tot = [0 0 0]';
    M_tot = [0 0 0]';
    alpha_r = zeros(1,n);
    alpha_l = zeros(1,n);
    return;
end
% ================the right wing==========
V_r = zeros(3,n);
qyn_r = zeros(1,n);
alpha_r = zeros(1,n);
C_xr  = zeros(1,n);
C_yr  = zeros(1,n);
C_mr  = zeros(1,n);
X_r = zeros(1,n);
Y_r = zeros(1,n);
M_ri = zeros(3,n);
f_ri = zeros(3,n);
C_l_delta_ar = zeros(1,n);
L_delta_ar =  zeros(1,n);

for i = 1:1:n
    V_r(:,i) = cross(omega,r_r(:,i)) + V;
    qyn_r(i) = 0.5*rho*(V_r(:,i)'*V_r(:,i));
%     alpha_r(i) = atan(V_r(3,i)/V_r(1,i)) + install;
    alpha_r(i) = atan(V_r(3,i)/sqrt(V_r(1,i)^2+V_r(2,i)^2)) + install;
    if V_r(1,i) > 0  % from front
        flag = 1; % from front
    else 
        flag = 0; % from back
    end
    
    [C_xr(i),C_yr(i),C_mr(i),C_l_delta_ar(i)] = interpolation(alpha_r(i),flag);
    
%     C_l_delta_ar(i) = (C_yr(i)/alpha_r(i))*0.3;
    
    L_delta_ar(i) =  qyn_r(i)*Si*C_l_delta_ar(i)*delta_ar_all(i);
    X_r(i) = qyn_r(i)*Si*C_xr(i);
    Y_r(i) = qyn_r(i)*Si*C_yr(i) + L_delta_ar(i);
    f_ri(:,i) =  [-Y_r(i)*sin(install) - X_r(i)*cos(install);
                  0;
                  -Y_r(i)*cos(install) + X_r(i)*sin(install)];  % in the body frame
    M_ri(:,i) =  [0, -qyn_r(i)*Si*c*C_mr(i), 0]' + cross(r_r(:,i),f_ri(:,i))...
         + [0, -L_delta_ar(i)*0.3*c, 0]';
     
end

F_r = [sum(f_ri(1,:)); sum(f_ri(2,:)); sum(f_ri(3,:))];
M_r = [sum(M_ri(1,:)); sum(M_ri(2,:)); sum(M_ri(3,:))] ;

% ================the left wing========
V_l = zeros(3,n);
qyn_l = zeros(1,n);
alpha_l = zeros(1,n);
C_xl  = zeros(1,n);
C_yl  = zeros(1,n);
C_ml  = zeros(1,n);
X_l = zeros(1,n);
Y_l = zeros(1,n);
M_li = zeros(3,n);
f_li = zeros(3,n);
C_l_delta_al = zeros(1,n);
L_delta_al =  zeros(1,n);

for i = 1:1:n
    V_l(:,i) = cross(omega,r_l(:,i)) + V;
    qyn_l(i) = 0.5*rho*(V_l(:,i)'*V_l(:,i));
%     alpha_l(i) = atan(V_l(3,i)/V_l(1,i)) + install;
    alpha_l(i) = atan(V_l(3,i)/sqrt(V_l(1,i)^2+V_l(2,i)^2)) + install;
    
    if V_l(1,i) > 0  % from front
        flag = 1; % from front
    else 
        flag = 0; % from back
    end
    
    [C_xl(i),C_yl(i),C_ml(i),C_l_delta_al(i)] = interpolation(alpha_l(i),flag);
    
%     C_l_delta_al(i) = (C_yl(i)/alpha_l(i))*0.3;
    
    L_delta_al(i) =  qyn_l(i)*Si*C_l_delta_al(i)*delta_al_all(i);
    
    X_l(i) = qyn_l(i)*Si*C_xl(i);
    Y_l(i) = qyn_l(i)*Si*C_yl(i) + L_delta_al(i);
    f_li(:,i) =  [-Y_l(i)*sin(install) - X_l(i)*cos(install);
                  0;
                  -Y_l(i)*cos(install) + X_l(i)*sin(install)];  % in the body frame
    M_li(:,i) =  [0, -qyn_l(i)*Si*c*C_ml(i), 0]' + cross(r_l(:,i),f_li(:,i)) ...
            + [0, -L_delta_al(i)*0.3*c, 0]';
end

F_l = [sum(f_li(1,:)); sum(f_li(2,:)); sum(f_li(3,:))];
M_l = [sum(M_li(1,:)); sum(M_li(2,:)); sum(M_li(3,:))] ;

% ----------sum  ------
F_tot = F_r + F_l;
M_tot = M_r + M_l;

end

