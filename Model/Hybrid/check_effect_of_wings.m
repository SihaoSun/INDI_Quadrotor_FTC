% run this script after runing a simulation to compare FM with / without
% wings

load('parameters_swept.mat');
time = att.Time;
N = length(time);

wind.x = 0; wind.y = 0; wind.z = 0;

Fx0 = zeros(N,1);    Fy0 = zeros(N,1);    Fz0 = zeros(N,1); 
Mx0 = zeros(N,1);    My0 = zeros(N,1);    Mz0 = zeros(N,1); 
Fx = zeros(N,1);    Fy = zeros(N,1);    Fz = zeros(N,1); 
Mx = zeros(N,1);    My = zeros(N,1);    Mz = zeros(N,1);  
Alpha_r = zeros(N,n); Alpha_l = zeros(N,n);
for i = 1:N
    simB.att = squeeze(att.Data(:,:,i));
    simB.omegaB = squeeze(omegaB.Data(:,:,i));
    simB.vel = squeeze(vel.Data(:,:,i));
%     simB.delta_ar = squeeze(delta_ar.Data(:,:,i));
%     simB.delta_al = squeeze(delta_al.Data(:,:,i));
    simB.delta_ar = 10/57.3;
    simB.delta_al = 0/57.3;    
    simB.wRotor = squeeze(wRotor.Data(:,:,i));

    [Fx0(i),Fy0(i),Fz0(i),Mx0(i),My0(i),Mz0(i)] = complex1AeroModel_dmgd(simB.wRotor,simB,wind,simVars);
    [Fx(i),Fy(i),Fz(i),Mx(i),My(i),Mz(i),Alpha_r(i,:),Alpha_l(i,:)] = complex1AeroModel_dmgd_hybrid(simB.wRotor,simB,wind,simVars);  
    
end

%%
figure
subplot(3,2,1)
plot(time,Fx0); hold on;
plot(time,Fx); ylabel('Fx [N]');
subplot(3,2,3)
plot(time,Fy0); hold on;
plot(time,Fy); ylabel('Fy [N]');
subplot(3,2,5)
plot(time,Fz0); hold on;
plot(time,Fz); ylabel('Fz [N]');legend('without wings','wings')

% figure
subplot(3,2,2)
plot(time,Mx0); hold on;
plot(time,Mx); ylabel('Mx [N]');
subplot(3,2,4)
plot(time,My0); hold on;
plot(time,My); ylabel('My [N]');
subplot(3,2,6)
plot(time,Mz0); hold on;
plot(time,Mz); ylabel('Mz [N]');legend('without wings','wings')

figure
subplot(2,1,1)
for i = 1:n
plot(time,Alpha_r(:,i)*57.3,'color',[1-i/n,0,i/n]); hold on; 
end
title('right alpha'); ylabel('[deg]'); legend('1')
subplot(2,1,2)
for i = 1:n
plot(time,Alpha_l(:,i)*57.3,'color',[1-i/n,0,i/n]); hold on; 
end
title('left alpha'); ylabel('[deg]'); legend('1')
