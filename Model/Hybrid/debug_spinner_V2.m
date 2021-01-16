load parameters r_r r_l install n 

% omega = [-0.2,0,-20]';
omega = [0,0,20]';
% omega = [0,0,-20]';
% omega = [0,0,-20]';

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

for i = 1:1:n
    V_r(:,i) = cross(omega,r_r(:,i));
    qyn_r(i) = 0.5*rho*(V_r(:,i)'*V_r(:,i));
    alpha_r(i) = atan(V_r(3,i)/V_r(1,i)) + install;
    if V_r(1,i) > 0  % from front
        flag = 1; % from front
    else 
        flag = 0; % from back
    end
    
    C_xr(i) = inteplation(alpha_r(i),flag); %sihao
    C_yr(i) = inteplation(alpha_r(i),flag); %sihao
    C_mr(i) = inteplation(alpha_r(i),flag); %sihao
    
    X_r(i) = qyn_r(i)*Si*C_xr(i);
    Y_r(i) = qyn_r(i)*Si*C_yr(i);
    f_ri(:,i) =  [-Y_r(i)*sin(install) - X_r(i)*cos(install);
                  0;
                  -Y_r(i)*cos(install) + X_r(i)*sin(install)];  % in the body frame
    M_ri(:,i) =  [0, -qyn_r(i)*Si*c*C_mr(i), 0]' + cross(r_r(:,i),f_ri(:,i));
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

for i = 1:1:n
    V_l(:,i) = cross(omega,r_l(:,i));
    qyn_l(i) = 0.5*rho*(V_l(:,i)'*V_l(:,i));
    alpha_l(i) = atan(V_l(3,i)/V_l(1,i)) + install;
    if V_l(1,i) > 0  % from front
        flag = 1; % from front
    else 
        flag = 0; % from back
    end
    
    C_xl(i) = inteplation(alpha_l(i),flag); %sihao
    C_yl(i) = inteplation(alpha_l(i),flag); %sihao
    C_ml(i) = inteplation(alpha_l(i),flag); %sihao
    
    X_l(i) = qyn_l(i)*Si*C_xl(i);
    Y_l(i) = qyn_l(i)*Si*C_yl(i);
    f_li(:,i) =  [-Y_l(i)*sin(install) - X_l(i)*cos(install);
                  0;
                  -Y_l(i)*cos(install) + X_l(i)*sin(install)];  % in the body frame
    M_li(:,i) =  [0, -qyn_l(i)*Si*c*C_ml(i), 0]' + cross(r_l(:,i),f_li(:,i));
end

F_l = [sum(f_li(1,:)); sum(f_li(2,:)); sum(f_li(3,:))];
M_l = [sum(M_li(1,:)); sum(M_li(2,:)); sum(M_li(3,:))] ;

% ----------sum  ------
F_tot = F_r + F_l;
M_tot = M_r + M_l;


