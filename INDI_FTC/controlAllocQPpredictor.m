function [output,y_state,iter,opt,y] = controlAllocQPpredictor(refStruct, state, FMax, FMin, h0, F0, par)
persistent x_last;

y_state = zeros(1,4);

nu1 = refStruct.nu1;
nu2 = refStruct.nu2;
nur = refStruct.nur;
nuz = refStruct.nuz;

nu1Gain = par.qp.nu1Gain;
nu2Gain = par.qp.nu2Gain;
nurGain = par.qp.nurGain;
nuzGain = par.qp.nuzGain;
FGain   = par.qp.FGain; % weight on control inputs

th = par.qp.envp_timeHoriz;
p2 = par.qp.rate_envGain;
omega_max = par.qp.envp_maxOmega;

p = state.omegaf(1); q = state.omegaf(2); r = state.omegaf(3);

fail_id = state.fail_id;
if isempty(x_last)
    if fail_id == 0
        x_last = [0 0 0 0 0]';
    elseif fail_id == 2 || fail_id == 4
        x_last = [1 0 1 0 0]'; 
    else
        x_last = [0 1 0 1 0]';
    end
end

beta = atan(par.b/par.l);
Ax = (par.Iy - par.Iz)/par.Ix;
Ay = (par.Iz - par.Ix)/par.Iy;
Ix = par.Ix;
Iy = par.Iy;
Iz = par.Iz;
% Ip = par.Ip;
t = par.t0;
k = par.k0;

R_xy_uv = par.R_xy_uv;

%% analytical predictor for omega uncontrollable
if abs(r) < 0.001
    r = 0.001;
end
b = Ay*r;
w = sqrt(abs(Ax*r)*abs(b));

c1 = q;
c2 = b*p/w;

x1 = -c1*sin(w*th)*[w/b] + c2*cos(w*th)*[w/b];
x2 =  c1*cos(w*th) + c2*sin(w*th);

PHI = [1/w*sin(w*th) 1/b*cos(w*th)-1/b;
        -b/w/w*cos(w*th)+b/w/w   1/w*sin(w*th)];

G0 = [par.b/Ix, 0;
      0, par.l/Iy] * [1 -1 -1 1; 1 1 -1 -1];
switch fail_id
    case 1
        Q0 = [0 1]*R_xy_uv*[x1;x2] + omega_max;
        Q1 = -[0 1]*R_xy_uv*PHI*G0;
    case 2
        Q0 = -[1 0]*R_xy_uv*[x1;x2] + omega_max;
        Q1 = [1 0]*R_xy_uv*PHI*G0;        
    case 3
        Q0 = -[0 1]*R_xy_uv*[x1;x2] + omega_max;
        Q1 = [0 1]*R_xy_uv*PHI*G0;
    case 4
        Q0 = [1 0]*R_xy_uv*[x1;x2] + omega_max;
        Q1 = -[1 0]*R_xy_uv*PHI*G0;
    otherwise
        Q0 = 10000;
        Q1 = ones(1,4);
end
Q0 = Q0 - Q1*F0;

umax = [FMax(1),FMax(2),FMax(3),FMax(4)]';
umin = [FMin(1),FMin(2),FMin(3),FMin(4)]';

Gp = [par.b*sin(beta), -par.b*sin(beta), -par.b*sin(beta),  par.b*sin(beta)] / Ix;
Gq = [par.b*cos(beta),  par.b*cos(beta), -par.b*cos(beta), -par.b*cos(beta)] / Iy;
Gr = t/k * [1 -1 1 -1] / Iz;

h1 = h0(1); h2 = h0(2); h3 = h0(3);
Gnu1 = -h3*Gq + h2*Gr;
Gnu2 = h3*Gp - h1*Gr;
Gz   = -1/par.mass*cos(state.att(1))*cos(state.att(2))*ones(1,4);

%     H = blkdiag(Gx'*Gx + Gy'*Gy + p1*Gz'*Gz,p2*norm([Mx_ref;My_ref]));
Hnu1 = nu1Gain * blkdiag(Gnu1'*Gnu1,0);
Hnu2 = nu2Gain * blkdiag(Gnu2'*Gnu2,0);
Hz = nuzGain * blkdiag(Gz'*Gz, 0);
Hr = nurGain * blkdiag(Gr'*Gr, 0);
Hp2 = p2*norm([nu1;nu2])*blkdiag(zeros(4),1);
H = Hnu1 + Hnu2 + Hz + Hr + Hp2;
H = 2*H;

%     f = [-2*(Mx_ref*Gx + My_ref*Gy + p1*Ftot_ref*Gz),0]';
fnu2 = [-2*(nu1Gain * nu1*Gnu1),0]';
fnu1 = [-2*(nu2Gain * nu2*Gnu2),0]';
fz = [-2*(nuzGain * nuz*Gz),0]';
fr = [-2*(nurGain * nur*Gr),0]';
f = fnu1+fnu2+fz+fr;

A = [eye(4), zeros(4,1); 
    -eye(4), zeros(4,1);
     Q1   , -1;
     zeros(1,4)  , -1];
B = [umax; 
    -umin; 
     Q0; 
     0];
 
x0 = x_last;
maxItr = par.qp.maxIter;
% [x,~,iter,opt,y] = QP_activeSet(H,f,A,B,x0,maxItr);

%% matlab quadprog
options = optimoptions('quadprog','Algorithm','active-set');
[x,y,opt,output] = quadprog(H,f,A,B,[],[],[],[],x0,options);
iter = output.iterations;
%%
y = nu1^2 * nu1Gain + nu2^2*nu2Gain + nuz^2*nuzGain + y;

if opt ~=1
    x = x_last*0.99;
end
x_last = x;

output = x(1:4);

if state.t > 0.2
   state.t = 0.2; 
%    nu = [nu1; nu2; nuz; nur];
%    W = diag([nu1Gain,nu2Gain,nuzGain,nurGain]);
%    u = [x(1) x(2) x(3) x(4)]';
%    G = [Gnu1;Gnu2;Gz;Gr];
%    (nu - G*u)' * W * (nu-G*u)
%    0.5*x'*H*x + f'*x + nu1^2*nu1Gain + nu2^2*nu2Gain + nuz^2*nuzGain + nur^2*nurGain
%    x(4) = 1.6;
%    0.5*x'*H*x + f'*x + nu1^2*nu1Gain + nu2^2*nu2Gain + nuz^2*nuzGain + nur^2*nurGain   
end
end