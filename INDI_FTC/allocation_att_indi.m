function [U,Y, dU]  =  allocation_att_indi(state, nu, ddY, h0, zdd, U0, rdot, par)

fail_flag = state.fail_id;
phi = state.att(1);
theta = state.att(2);

k = par.k0;
t = par.t0;
b = sqrt(par.b^2 +  par.l^2);
m = par.mass;
Ix = par.Ix;
Iy = par.Iy;
Iz = par.Iz;
beta = atan(par.b/par.l);
chi = par.chi/57.3;

if state.fail_id == 1 || state.fail_id == 3
    chi = pi- par.chi/57.3;
end

h1 = h0(1); h2 = h0(2); h3 = h0(3);

    
Gp = [k*b*sin(beta), -k*b*sin(beta), -k*b*sin(beta), k*b*sin(beta)] / Ix;
Gq = [k*b*cos(beta), k*b*cos(beta), -k*b*cos(beta), -k*b*cos(beta)] / Iy;
Gr = [t -t t -t] / Iz; % check if the sign is correct!

G0 = [-k/m*cos(theta)*cos(phi)*ones(1,4);
     -h3*Gq + h2*Gr;
     h3*Gp - h1*Gr;
     Gr];

R = blkdiag(1,[cos(chi), sin(chi); -sin(chi), cos(chi)],1);

ddy0 = [zdd; ddY; rdot];
G = R*G0;
 
if par.DRF_enable && fail_flag>0
    if fail_flag == 1 || fail_flag == 3
        fail_id = [1 3];
    else % if fail_flag == 2 || fail_flag == 4
        fail_id = [2 4];
    end
else
    fail_id = fail_flag;
end

if fail_flag > 0
    if par.DRF_enable == 1
        % eliminate the colomn of G corresponding to the damaged rotor
        G(:,fail_id) = zeros(4,length(fail_id)); 
        ddy0(3:4) = zeros(2,1);
        G(3:4,:) = zeros(size(G(3:4,:)));
        nu(3:4) = zeros(2,1);
    else
        % eliminate the colomn of G corresponding to the damaged rotor
        G(:,fail_id) = zeros(4,length(fail_id)); 
        ddy0(4) = zeros(1);
        G(4,:) = zeros(size(G(4,:)));
        nu(4) = zeros(1);   
    end
end


% calc u
dU = pinv(G)*(nu-ddy0);

Y = (nu-ddy0);

U = U0 + dU;
if fail_flag > 0
    U(fail_id) = 0;
end

end
