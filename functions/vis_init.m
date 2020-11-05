%% init visualisation
animation_figure_id = 100;
close(figure(animation_figure_id));
figure(animation_figure_id)
ax = axes('XLim',[-5,5],'YLim',[-5,5],'ZLim',[-5,5]);
% plot3([1.5,1.5,1.5,1.5,1.5,1.5,1.5,1.5,1.5],[1.5,1,-1,-1.5,-1.5,-1,1,1.5,1.5],...
%       [-1,-1.5,-1.5,-1,1,1.5,1.5,1,-1]); hold on;
  
xlim([-2.5,1.5]); ylim([-2,2]); zlim([-2,2])
[h_animation] = quad_figure(0,0,0,'roll',0,'pitch',0,'yaw',0,'scale',0.03*3,'fail', par.fail_id, 'failtype', par.DRF_enable);
set(gca, 'Zdir', 'reverse');
set(gca, 'Ydir', 'reverse');
set(gca, 'Projection','perspective');
camlight
t_animation = hgtransform('Parent',ax);
set(h_animation,'Parent',t_animation);

S = makehgtform('translate',simVars.pos0);
Rz = makehgtform('zrotate',simVars.att0(3));
Ry = makehgtform('yrotate',simVars.att0(2));
Rx = makehgtform('xrotate',simVars.att0(1));

set(t_animation,'Matrix',S*Rz*Ry*Rx);
% set(t,'Matrix',S);

line(gca, simVars.pos0(1), simVars.pos0(2), simVars.pos0(3));

drawnow