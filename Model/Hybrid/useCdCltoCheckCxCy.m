load('back_coeff.mat');
load('front_coeff.mat');

alpha = (-20:1:20)/57.3;
N = length(alpha);

Cx_f = zeros(N,1);
Cy_f = zeros(N,1);
Cm_f = zeros(N,1);

Cx_b = zeros(N,1);
Cy_b = zeros(N,1);
Cm_b = zeros(N,1);

for i = 1:N
   [Cx_f(i),Cy_f(i),Cm_f(i)] = interpolation(alpha(i),1); 
   [Cx_b(i),Cy_b(i),Cm_b(i)] = interpolation(alpha(i),0); 
end

Cl_f = Cy_f.*cos(alpha)' - Cx_f.*sin(alpha)';
Cd_f = Cy_f.*sin(alpha)' + Cx_f.*cos(alpha)';

Cl_b = Cy_b.*cos(alpha)' + Cx_b.*sin(alpha)';
Cd_b = Cy_b.*sin(alpha)' - Cx_b.*cos(alpha)';

cl_back = cy_back.*cos(alpha_back/57.3) + cx_back.*sin(alpha_back/57.3);
cd_back = cy_back.*sin(alpha_back/57.3) - cx_back.*cos(alpha_back/57.3);

figure
subplot(2,1,1)
plot(alpha*57.3,Cl_f); hold on;
plot(alpha*57.3,Cl_b); hold on;
plot(alpha_front,cl_front,'b*');
plot(alpha_back,cl_back,'r*');
xlabel('alpha [deg]'); ylabel('Cl');
legend('front','back')

subplot(2,1,2)
plot(alpha*57.3,Cd_f); hold on;
plot(alpha*57.3,Cd_b); hold on;
plot(alpha_front,cd_front,'b*');
plot(alpha_back,cd_back,'r*');
xlabel('alpha [deg]'); ylabel('Cd');
legend('front','back')


figure
plot(alpha*57.3,Cm_f); hold on;
plot(alpha*57.3,Cm_b); hold on;
