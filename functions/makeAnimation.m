clear all; 
close all;

addpath('data');
%% 
CONTROLLER = {'INDI','IASMC','LQR'};
for k = 1:3
close all;
controller = CONTROLLER{k};
file_name = [controller,'_March.mat'];
% file_name = [controller,'_Feb_5_21_14.mat'];


%%
load(file_name);

track = 1;
par.fail_id = 3;

freq = floor(1/mean(diff(pos.Time)));
wfail = squeeze(wRotor.Data(1,par.fail_id,:));
x = squeeze(pos.Data(1,1,:));
y = squeeze(pos.Data(1,2,:));
z = squeeze(pos.Data(1,3,:));

xt = xTarget.Data(:);
yt = yTarget.Data(:);
zt = zTarget.Data(:);

phi = squeeze(att.Data(1,1,:));
theta = squeeze(att.Data(1,2,:));
psi = squeeze(att.Data(1,3,:));

simVars.pos0 = [x(1),y(1),z(1)];
simVars.att0 = [phi(1),theta(1),psi(1)];
vis_init;

%%
% figure
% plot3(x,y,z); hold on;
% plot3(xt,yt,zt); zlim([0,2]);
% axis equal; grid on;
% return;
%%

v1 = VideoWriter([controller,'.avi']);
v1.FrameRate = 50;
v1.Quality = 100;
open(v1)

t = get(gca,'Children');
tDrone = t(3);
tTraj = t(2);
tTarget = t(1);
title(controller);
box on;

h = get(tDrone,'Children');
% set(h(end-7+1),'FaceColor',[1,0,0]);
%%
for i = 100:freq/50:length(x)

    if wfail(i) < 300
        set(h(end-7+1),'FaceColor',[1,1,1]);
        set(h(end-7+1),'FaceAlpha',0.0);
        set(h(end-7+1),'EdgeAlpha',0.0);      
    end
S = makehgtform('translate',[x(i) y(i) z(i)]);
Rz = makehgtform('zrotate',psi(i));
Ry = makehgtform('yrotate',theta(i));
Rx = makehgtform('xrotate',phi(i));

set(tDrone,'Matrix',S*Rz*Ry*Rx);

% trajectory
set(tTraj, 'XData', x(1:i));
set(tTraj, 'YData', y(1:i));
set(tTraj, 'ZData', z(1:i));

set(tTarget, 'XData', xt(1:i));
set(tTarget, 'YData', yt(1:i));
set(tTarget, 'ZData', zt(1:i));

drawnow

if track
   xlim([x(i)-1.2,x(i)+1.2]); ylim([y(i)-1.2,y(i)+1.2]); zlim([z(i)-0.5,z(i)+0.5]);
else
   xlim([-0.5,1.5]); ylim([-0.5,1.5]); zlim([-0.2,0.6])
end

frame = getframe(gcf);
writeVideo(v1,frame);
display(i/length(x));
display(controller);
end

close(v1)
end