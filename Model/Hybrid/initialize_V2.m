% ---------------------
% spinner wing 
% ---------------------
% unit 
r2d = 180/pi;
d2r = pi/180;

rho = 1.225;
% geometry
b = 0.5; % half span 
c = 0.2; % chord 
n = 10;  % number of strips 
dy = b/n;
Si = dy*c; % aera
install = 0*d2r; %install angle
r_cg_ec = [-0.033,0,0]'; % from c.g. to shear center (half chord) at the wing root
% --------------
% location, from O_b to a.c. of the wing
r_r = zeros(3,n);
r_l = r_r;
for i = 1:1:n
    r_r(:,i) = r_cg_ec + [0.25*c*cos(install), (i-0.5)*dy, -0.25*c*sin(install)]';
    r_l(:,i) = [r_r(1,i), -r_r(2,i), r_r(3,i)];
end

% --------------
% save the data for function 
save parameters r_r r_l install n Si rho c
 



