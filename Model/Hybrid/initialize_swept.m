%% for the new swept wing configuration 
% unit 
r2d = 180/pi;
d2r = pi/180;

rho = 1.225;

% geometry
Sweep_angle = 23*d2r;
c_root = 0.40;
c_tip  = 0.11;
b_half = 0.673;

% Sweep_angle = 0*d2r;
% c_root = 0.05;
% c_tip  = 0.05;
% b_half = 0.4;

S = (c_root+c_tip)*b_half;

n = 10;  % number of strips 

b = b_half; % half span 
c = linspace(c_root,c_tip,n); % chord 

dy = b/n;

Si = dy.*c; % aera
install = 0*d2r; %install angle
r_cg_ec = [-0.033,0,0]'; % from c.g. to shear center (half chord) at the wing root
% --------------
% R_b_2_rw =  [cos(Sweep_angle), sin(Sweep_angle), 0;
%             -sin(Sweep_angle), cos(Sweep_angle), 0;
%              0,   0,  1]; % from body to the right wing
% R_b_2_lw =  [cos(Sweep_angle), -sin(Sweep_angle), 0;
%              sin(Sweep_angle),  cos(Sweep_angle), 0;
%              0,0,1]; % from body to the left wing

% location, from O_b to a.c. of the wing
r_r = zeros(3,n);
r_l = r_r;
% expressed in the body frame
x_shift = tan(Sweep_angle)*b/n;
for i = 1:1:n
    r_r(:,i) = r_cg_ec + [0.25*c(i)*cos(install)-(i-0.5)*x_shift, (i-0.5)*dy, -0.25*c(i)*sin(install)]';
    r_l(:,i) = [r_r(1,i), -r_r(2,i), r_r(3,i)];
end

% --------------
% save the data for function 
save parameters_swept r_r r_l install n Si rho c Sweep_angle