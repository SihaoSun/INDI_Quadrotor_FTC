function [F,M] = FM_BB2_6DOF(vel,rates,omega,param)
% This model is identified from DRF + SRF+ Nominal data
% input:
% vel   : velocity projection on the body frame, m/s, 3x1 double
% rates : angular velocities in rad/s, 3x1 double
% omega:  rotor speeds in rad/s, 4x1 double
% param : structure contains R (rotor radius), l and b (geometry
%           parameters, See Sun et al, Aerodynamic Model RA-L 2019).

% ouput:
% F\M: aerodynamic forces and moments on the body frame, N \ Nm, 3x1 double
%
% Sihao Sun 4th-July-2019
% sihao.sun@outlook.com

persistent aero_model;

if isempty(aero_model)
    aero_model = load('model_individual_damage_BB2_v4.mat');
end

R = param.R;
l = param.l; 
b = param.b;
signr = -1;
%% 
rho = 1.225;
S = 4*b*l;

for i=1:4
    if omega(i)<=1
        omega(i) = 0;
    end
end

vel = vel(:);
rates = rates(:);
omega = omega(:);

omega1 = omega(1);
omega2 = omega(2);
omega3 = omega(3);
omega4 = omega(4);

Area = pi*R^2;
u = vel(1); v = vel(2); w = vel(3);

va = sqrt(u^2+v^2+w^2);

if va>=0.01
    u_bar = u/va; v_bar = v/va; w_bar = w/va;
else
    u_bar = 0; v_bar = 0; w_bar = 0;
end
%% Calculate Ct and Cq of each rotor
SL = [1 -1 -1 1];
SM = [1 1 -1 -1];
SN = signr*[1 -1 1 -1];

rc = [0 0 0];

d = [ l + rc(1),    -b + rc(2), 0 + rc(3);
      l + rc(1),     b + rc(2), 0 + rc(3);
     -l + rc(1),     b + rc(2), 0 + rc(3);
     -l + rc(1),    -b + rc(2), 0 + rc(3)];
 
V1 = cross(rates,d(1,:))' + vel;
V2 = cross(rates,d(2,:))' + vel;
V3 = cross(rates,d(3,:))' + vel;
V4 = cross(rates,d(4,:))' + vel;

u1 = V1(1); u2 = V2(1); u3 = V3(1); u4 = V4(1);
v1 = V1(2); v2 = V2(2); v3 = V3(2); v4 = V4(2);
w1 = V1(3); w2 = V2(3); w3 = V3(3); w4 = V4(3);

va1 = sqrt(u1^2+v1^2+w1^2);
va2 = sqrt(u2^2+v2^2+w2^2);
va3 = sqrt(u3^2+v3^2+w3^2);
va4 = sqrt(u4^2+v4^2+w4^2); 

vv1 = va1/omega1/R; vv1(isnan(vv1)) = 0; vv1(isinf(abs(vv1))) = 0; vv1(vv1>=0.6) = 0.6;
vv2 = va2/omega2/R; vv2(isnan(vv2)) = 0; vv2(isinf(abs(vv2))) = 0; vv2(vv2>=0.6) = 0.6;
vv3 = va3/omega3/R; vv3(isnan(vv3)) = 0; vv3(isinf(abs(vv3))) = 0; vv3(vv3>=0.6) = 0.6;
vv4 = va4/omega4/R; vv4(isnan(vv4)) = 0; vv4(isinf(abs(vv4))) = 0; vv4(vv4>=0.6) = 0.6;

alpha1 = atan(w1/sqrt(u1^2+v1^2)); alpha1(isnan(alpha1)) = 0; alpha1(isinf(abs(alpha1))) = 0;
alpha2 = atan(w2/sqrt(u2^2+v2^2)); alpha2(isnan(alpha2)) = 0; alpha2(isinf(abs(alpha2))) = 0;
alpha3 = atan(w3/sqrt(u3^2+v3^2)); alpha3(isnan(alpha3)) = 0; alpha3(isinf(abs(alpha3))) = 0;
alpha4 = atan(w4/sqrt(u4^2+v4^2)); alpha4(isnan(alpha4)) = 0; alpha4(isinf(abs(alpha4))) = 0;

dynhead1 = rho*omega1^2*R^2;
dynhead2 = rho*omega2^2*R^2;
dynhead3 = rho*omega3^2*R^2;
dynhead4 = rho*omega4^2*R^2;

% Ct0 and Cq0 from the static wind tunnel test data

Ct01 = P52CtCq(alpha1,vv1)*aero_model.k_Ct0;
Ct02 = P52CtCq(alpha2,vv2)*aero_model.k_Ct0;
Ct03 = P52CtCq(alpha3,vv3)*aero_model.k_Ct0;
Ct04 = P52CtCq(alpha4,vv4)*aero_model.k_Ct0;

Cq01 = P52CtCq(alpha1,vv1)*aero_model.k_Cq0;
Cq02 = P52CtCq(alpha2,vv2)*aero_model.k_Cq0;
Cq03 = P52CtCq(alpha3,vv3)*aero_model.k_Cq0;
Cq04 = P52CtCq(alpha4,vv4)*aero_model.k_Cq0;

%% Forces and moments of airframe
T0 = -P1n(abs(w_bar),2,0,va.^2*S*1.225/2.*sign(w_bar))*aero_model.k_model{1};
% T0 = -P32(abs(w_bar),abs(v_bar),va.^2*S*1.225/2.*sign(w_bar))*aero_model.k_model{1};
X0 = P1n(abs(u_bar),2,0,va.^2*S*1.225/2.*sign(u_bar))*aero_model.k_model{2};
Y0 = P1n(abs(v_bar),2,0,va.^2*S*1.225/2.*sign(v_bar))*aero_model.k_model{3};
L0 = P32(abs(v_bar),w_bar,va.^2*S*1.225/2.*sign(v_bar))*aero_model.k_model{8};
M0 = P32(abs(u_bar),w_bar,va.^2*S*1.225/2.*sign(u_bar))*aero_model.k_model{9};
N0 = P32(abs(v_bar),abs(u_bar),va.^2*S*1.225/2.*sign(v_bar).*sign(u_bar))*aero_model.k_model{10};

%% Forces and moments of each rotor
T1 = (Ct01)*dynhead1*Area;
T2 = (Ct02)*dynhead2*Area;
T3 = (Ct03)*dynhead3*Area;
T4 = (Ct04)*dynhead4*Area;

X1 = (u1*omega1*aero_model.k_model{4} + SN(1)*v1*omega1*aero_model.k_model{5}) ;
X2 = (u2*omega2*aero_model.k_model{4} + SN(2)*v2*omega2*aero_model.k_model{5}) ;
X3 = (u3*omega3*aero_model.k_model{4} + SN(3)*v3*omega3*aero_model.k_model{5}) ;
X4 = (u4*omega4*aero_model.k_model{4} + SN(4)*v4*omega4*aero_model.k_model{5}) ;

Y1 = (-SN(1)*u1*omega1*aero_model.k_model{5} + v1*omega1*aero_model.k_model{4}) ;
Y2 = (-SN(2)*u2*omega2*aero_model.k_model{5} + v2*omega2*aero_model.k_model{4}) ;
Y3 = (-SN(3)*u3*omega3*aero_model.k_model{5} + v3*omega3*aero_model.k_model{4}) ;
Y4 = (-SN(4)*u4*omega4*aero_model.k_model{5} + v4*omega4*aero_model.k_model{4}) ;

L1 = (SN(1)*u1*omega1*aero_model.k_model{7} - v1*omega1*aero_model.k_model{6}) ;
L2 = (SN(2)*u2*omega2*aero_model.k_model{7} - v2*omega2*aero_model.k_model{6}) ;
L3 = (SN(3)*u3*omega3*aero_model.k_model{7} - v3*omega3*aero_model.k_model{6}) ;
L4 = (SN(4)*u4*omega4*aero_model.k_model{7} - v4*omega4*aero_model.k_model{6}) ;

M1 = (u1*omega1*aero_model.k_model{6} + SN(1)*v1*omega1*aero_model.k_model{7});
M2 = (u2*omega2*aero_model.k_model{6} + SN(2)*v2*omega2*aero_model.k_model{7});
M3 = (u3*omega3*aero_model.k_model{6} + SN(3)*v3*omega3*aero_model.k_model{7});
M4 = (u4*omega4*aero_model.k_model{6} + SN(4)*v4*omega4*aero_model.k_model{7});

N1 = SN(1)*(Cq01)*dynhead1*Area*R;
N2 = SN(2)*(Cq02)*dynhead2*Area*R;
N3 = SN(3)*(Cq03)*dynhead3*Area*R;
N4 = SN(4)*(Cq04)*dynhead4*Area*R;

T = T1+T2+T3+T4 + T0;
Fx = X1+X2+X3+X4+X0;
Fy = Y1+Y2+Y3+Y4+Y0;
Mx = SL(1)*b*T1 + SL(2)*b*T2 + SL(3)*b*T3 + SL(4)*b*T4 + L0 + L1 + L2 + L3 + L4;%;
My = SM(1)*l*T1 + SM(2)*l*T2 + SM(3)*l*T3 + SM(4)*l*T4 + M0 + M1 + M2 + M3 + M4;% ;
Mz = b*SL(1)*X1 + b*SL(2)*X2 + b*SL(3)*X3 + b*SL(4)*X4 + ...
     l*SM(1)*Y1 + l*SM(2)*Y2 + l*SM(3)*Y3 + l*SM(4)*Y4 + ...
     N1 + N2 + N3 + N4 + N0;
%%
F = [Fx, Fy, -T]';
M = [Mx, My, Mz]';
end

function [A_p32] = P32(x1,x2,U,bias)
% regressor generator 
% 3rd order polynomial function with 2 inputs
if nargin < 3
    U = ones(size(x1));
end
if nargin < 4
    A1 = [];
else
    A1 = ones(size(x1)).*U;
end
A2 = x1.*U;
% A3 = x2.*U;
A3 = [];
A4 = x1.^2.*U;
% A5 = x2.^2.*U;
A5= [];
A6 = x1.*x2.*U;
A7 = x1.^3.*U;
% A8 = x2.^3.*U;
A8 = [];
A9 = x1.*x2.^2.*U;
A10 = x1.^2.*x2.*U;

A_p32 = [A1,A2,A3,A4,A5,A6,A7,A8,A9,A10];
end

function [A_p1n] = P1n(x1,n,bias,U)
% regressor generator 
% nrd order polynomial function with 1 inputs

if(nargin < 2)
    n=2;
end
if(nargin < 3)
    bias = 1;
end
if(nargin < 4)
    U = ones(size(x1));    
end


if bias == 0
    A_p1n = [];
else
    A_p1n = ones(size(x1)).*U;
end
A = cell(n,1);
for i = 1:n
    A{i} = x1.^i.*U;
    A_p1n = [A_p1n A{i}];
end

end

function [A_p52] = P52CtCq(aa,mu)
A_p52 = zeros(1,15);
A_p52 = [ones(size(mu)),mu, mu.^2, mu.^3, mu.^4, mu.^5, mu.*aa, mu.^2.*aa, mu.^3.*aa, mu.^4.*aa,...
         mu.*aa.^2, mu.^2.*aa.^2, mu.^3.*aa.^2,mu.*aa.^3, mu.^2.*aa.^3, mu.*aa.^4];
end
