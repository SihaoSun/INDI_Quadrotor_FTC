close all

pause(1)

%% Video
% fig = LoeDetectorPkg.ProbDensityFig(0.9, 0.25, 4, 1);
% 
% for k = 1:100
%     fig.update([k/100 k/200 abs(.5 - k/100) 1], [100/k 1 0.1 2]);
%     fig.write_video();
% end
% 
% fig.close();

%% Subplots

fig = LoeDetectorPkg.ProbDensityFig(0.9, 0.25, 4, 2);

fig.update_subplot(1, [1 .2 .3 1], [0.01 1 0.1 2]);
fig.update_subplot(2, [1 .2 .3 1], [2 1 0.1 2]);

