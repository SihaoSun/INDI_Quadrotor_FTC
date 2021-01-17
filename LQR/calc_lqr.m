function K = calc_lqr(par,fail_id0,DRF_enable)

if DRF_enable && fail_id0>0
    if fail_id0 == 1 || fail_id0 == 3
        fail_id = [1 3];
    else % if fail_id0 == 2 || fail_id0 == 4
        fail_id = [2 4];
    end
else
    fail_id = fail_id0;
end

if fail_id == 0
    r_bar = 0; w_bar = 600*ones(4,1);
elseif length(fail_id) == 1
    r_bar = -(2*(mod(fail_id,2))-1)*20;
    w_bar = 1200*ones(4,1); w_bar(fail_id) = 0;
elseif length(fail_id) == 2
    r_bar = (2*(mod(sum(fail_id)/2,2))-1)*20;
    w_bar = 1200*ones(4,1); w_bar(fail_id) = 0;
end

Iz = par.Iz;
Iu = par.lqr.Iu;
Iv = par.lqr.Iv;
Au = (Iv-Iz)/Iu;
Av = (Iz-Iu)/Iv;
Ip = par.Ip;

k = par.act_dyn;

% x = [u v eta1 eta2 U1 U2];

a = Au*r_bar  -  Ip*(w_bar(1)-w_bar(2)+w_bar(3)-w_bar(4))/Iu;
b = Av*r_bar  +  Ip*(w_bar(1)-w_bar(2)+w_bar(3)-w_bar(4))/Iv;

A = [0 a 0      0       ;
     b 0 0      0       ;
     0 1 0      r_bar   ;
    -1 0 -r_bar 0       ];

B = [1/Iu  0;
     0        1/Iv;
     0        0;
     0        0];

if length(fail_id) == 2
   if sum(fail_id) < 5 % failure of 1 and 3  
       B(:,2) = zeros(4,1);
   else
       B(:,1) = zeros(4,1);
   end
end

S = k*eye(2);

AA = [A B; zeros(size(S,1),size(A,2)) -S]; BB = [zeros(size(A,1),size(S,2)); S]; 
Q = par.lqr.Q;
R = par.lqr.R;

K = lqr(AA,BB,Q,R);
end