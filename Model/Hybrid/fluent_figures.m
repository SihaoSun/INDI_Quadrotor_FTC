%save front_coeff alpha_front cd_front cl_front cx_front cy_front cm_front
cl_front = cy_front.*cos(alpha_front*d2r) - cx_front.*sin(alpha_front*d2r)
cd_front = cy_front.*sin(alpha_front*d2r) + cx_front.*cos(alpha_front*d2r)

cl_back = cy_back.*cos(alpha_back*d2r) + cx_back.*sin(alpha_back*d2r)
cd_back = cy_back.*sin(alpha_back*d2r) - cx_back.*cos(alpha_back*d2r)


%%
load front_coeff alpha_front cd_front cl_front cx_front cy_front cm_front
r2d = pi/180;

figure 
plot(alpha_front,cl_front)

figure 
plot(alpha_front,cd_front)

figure 
plot(alpha_front,cm_front)

%%  
load back_coeff alpha_back cd_back cl_back cx_back cy_back cm_back
d2r = pi/180;


figure 
plot(alpha_back,cl_back)

figure 
plot(alpha_back,cd_back)

figure 
plot(alpha_back,cm_back)


%% 
figure 
plot(alpha_front,cl_front,'r--')
hold on
plot(alpha_back,cl_back)


figure 
plot(alpha_front,cd_front,'r--')
hold on 
plot(alpha_back,cd_back)

figure 
plot(alpha_front,cm_front,'r--')
hold on 
plot(alpha_back,cm_back)