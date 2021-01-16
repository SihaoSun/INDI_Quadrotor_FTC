
ATT_CONTROL_VARIANT = 1;

time = pos.Time;

plot_pos    = 0;
plot_vel    = 0;
plot_att    = 0;
plot_rate   = 0;
plot_rotor  = 0;
plot_fm     = 1;
% close all;

%% position
if plot_pos == 1
x = squeeze(pos.Data(1,1,:));
y = squeeze(pos.Data(1,2,:));
z = squeeze(pos.Data(1,3,:));

xt = xTarget.Data(:);
yt = yTarget.Data(:);
zt = zTarget.Data(:);

figure
subplot(3,1,1)
plot(time,xt); hold on;
plot(time,x); ylabel('x [m]'); title(['pos',num2str(ATT_CONTROL_VARIANT)])
subplot(3,1,2)
plot(time,yt); hold on;
plot(time,y); ylabel('y [m]');
subplot(3,1,3)
plot(time,zt); hold on;
plot(time,z); ylabel('z [m]');

set(gcf,'position',[0   549   570   420]);
end

%% velocity
if plot_vel == 1
Vx = squeeze(vel.Data(1,1,:));
Vy = squeeze(vel.Data(1,2,:));
Vz = squeeze(vel.Data(1,3,:));
figure
subplot(3,1,1)
plot(time,Vx); ylabel('vx [m/s]'); title(['vel',num2str(ATT_CONTROL_VARIANT)])
subplot(3,1,2)
plot(time,Vy); ylabel('vy [m/s]');
subplot(3,1,3)
plot(time,Vz); ylabel('vz [m/s]');
set(gcf,'position',[600   549   570   420]);
end
%% attitude 

if plot_att == 1
phi = squeeze(att.Data(1,1,:));
theta = squeeze(att.Data(1,2,:));
psi = squeeze(att.Data(1,3,:));

figure
subplot(3,1,1)
plot(time,phi); ylabel('roll [rad]'); title(['att',num2str(ATT_CONTROL_VARIANT)])
subplot(3,1,2)
plot(time,theta); ylabel('pitch [rad]');
subplot(3,1,3)
plot(time,psi); ylabel('yaw [rad]');
set(gcf,'position',[1200   549   570   420]);
end

%% angular rates

if plot_rate == 1
p = squeeze(omegaB.Data(1,1,:));
q = squeeze(omegaB.Data(1,2,:));
r = squeeze(omegaB.Data(1,3,:));
figure
subplot(3,1,1)
plot(time,p); ylabel('p [rad/s]'); title(['rate',num2str(ATT_CONTROL_VARIANT)])
subplot(3,1,2)
plot(time,q); ylabel('q [rad/s]');
subplot(3,1,3)
plot(time,r); ylabel('r [rad/s]');
set(gcf,'position',[0   100   570   420]);
end

%% rotor speed
if plot_rotor == 1
w1 = squeeze(wRotor.Data(1,1,:));
w2 = squeeze(wRotor.Data(1,2,:));
w3 = squeeze(wRotor.Data(1,3,:));
w4 = squeeze(wRotor.Data(1,4,:));
figure
subplot(4,1,1)
plot(time,w1); ylabel('w1 [rad/s]'); title(['rotor',num2str(ATT_CONTROL_VARIANT)])
subplot(4,1,2)
plot(time,w2); ylabel('w2 [rad/s]');
subplot(4,1,3)
plot(time,w3); ylabel('w3 [rad/s]');
subplot(4,1,4)
plot(time,w4); ylabel('w4 [rad/s]');
set(gcf,'position',[600   100   570   420]);
end
%% forces and moments
if plot_fm == 1
Fxw = squeeze(Fwing.Data(1,1,:));
Fyw = squeeze(Fwing.Data(1,2,:));
Fzw = squeeze(Fwing.Data(1,3,:));
Mxw = squeeze(Mwing.Data(1,1,:));
Myw = squeeze(Mwing.Data(1,2,:));
Mzw = squeeze(Mwing.Data(1,3,:));

Fx = squeeze(forcesB.Data(1,1,:));
Fy = squeeze(forcesB.Data(1,2,:));
Fz = squeeze(forcesB.Data(1,3,:));
Mx = squeeze(momentsB.Data(1,1,:));
My = squeeze(momentsB.Data(1,2,:));
Mz = squeeze(momentsB.Data(1,3,:));

figure
subplot(3,1,1)
plot(time,Fx); hold on;
plot(time,Fxw); ylabel('fx (N)'); title(['forces',num2str(ATT_CONTROL_VARIANT)])
subplot(3,1,2)
plot(time,Fy); hold on;
plot(time,Fyw); ylabel('fy (N)');
subplot(3,1,3)
plot(time,Fz); hold on;
plot(time,Fzw); ylabel('fz (N)'); legend('total', 'wing')
xlabel('time');

figure
subplot(3,1,1)
plot(time,Mx); hold on;
plot(time,Mxw); ylabel('mx (N)'); title(['moments',num2str(ATT_CONTROL_VARIANT)])
subplot(3,1,2)
plot(time,My); hold on;
plot(time,Myw); ylabel('my (N)');
subplot(3,1,3)
plot(time,Mz); hold on;
plot(time,Mzw); ylabel('mz (N)'); legend('total', 'wing')
xlabel('time');

end