function [h] = quad_figure(varargin) 
%% Set Defaults: 

fusColor      = .1*[1 1 1];
propColor     = [1 0 0];
edgeColor     = 'k';
linestyle     = '-'; 
scale         = 1; 
zscale        = 5; 
setroll       = false; 
setpitch      = false; 
setyaw        = false; 

%% Parse Inputs: 

if nargin>2 && isnumeric(varargin{1}) && isnumeric(varargin{2}) && isnumeric(varargin{3})
    x = varargin{1}; 
    y = varargin{2}; 
    z = varargin{3}; 
    assert(isscalar(x)==1,'c130 input x must be a scalar.')
    assert(isscalar(y)==1,'c130 input y must be a scalar.')
    assert(isscalar(z)==1,'c130 input z must be a scalar.')
else
    x = 0; 
    y = 0; 
    z = 0; 
end

tmp = strncmpi(varargin,'col',3); 
if any(tmp) 
    fusColor      = varargin{find(tmp)+1}; 
end

tmp = strncmpi(varargin,'fus',3)|strcmpi(varargin,'body'); 
if any(tmp)
    fusColor = varargin{find(tmp)+1}; 
end

tmp = strncmpi(varargin,'fail',4); 
if any(tmp)
    failure_id = varargin{find(tmp)+1}; 
end

tmp = strncmpi(varargin,'failtype',5); 
if any(tmp)
    failure_drf = varargin{find(tmp)+1}; 
end

tmp = strcmpi(varargin,'scale');  
if any(tmp) 
    scale = varargin{find(tmp)+1}; 
    assert(isscalar(scale)==1,'It may seem redundant, but the scale must be a scalar.')
end

tmp = strncmpi(varargin,'z',1); 
if any(tmp)
    zscale = varargin{find(tmp)+1}; 
    assert(isscalar(zscale)==1,'It may seem redundant, but the z scale must be a scalar.')
end

tmp = strncmpi(varargin,'lines',5); 
if any(tmp)
    linestyle = varargin{find(tmp)+1}; 
    assert(isnumeric(linestyle)==0,'LineStyle cannot be numeric.')
end

tmp = strncmpi(varargin,'linecol',7)|strncmpi(varargin,'edgecol',3); 
if any(tmp)
    edgeColor = varargin{find(tmp)+1}; 
end

tmp = strcmpi(varargin,'roll')|strcmpi(varargin,'biscuits'); 
if any(tmp)
    setroll = true; 
    roll = varargin{find(tmp)+1}; 
    assert(isscalar(roll)==1,'Roll must be a scalar value in degrees.')
end

tmp = strcmpi(varargin,'pitch'); 
if any(tmp)
    setpitch = true; 
    pitch = varargin{find(tmp)+1}; 
    assert(isscalar(pitch)==1,'Pitch must be a scalar value in degrees.')
end

tmp = strcmpi(varargin,'yaw')|strcmpi(varargin,'yall'); % to accommodate our southern friends 
if any(tmp)
    setyaw = true; 
    yaw = varargin{find(tmp)+1}; 
    assert(isscalar(yaw)==1,'Yaw must be a scalar value in degrees.')
end

tmp = strcmpi(varargin,'limits');
if any(tmp)
    limits = varargin{find(tmp)+1}; 
end


tmp = strcmpi(varargin,'pitch'); 
%% Dimensions: 
fusLength       = 3*scale;  
fusRadius       = .1*scale;  
wingWidth       = 3*scale; % changing wingWidth will affect several dimensions

% Center the dimensions: 
%y = y+9*wingWidth/5; 
z = z+fusRadius; 

%% Draw surfaces: 

% Fuselage: 
[xcf,zcf,ycf] = cylinder(fusRadius); 
h(1) = surface(xcf+x,y-ycf*fusLength,z+zcf*zscale,...
    'facecolor',fusColor,'linestyle',linestyle,...
    'edgecolor',edgeColor);

[xcf,zcf,ycf] = cylinder(fusRadius); 
h(2) = surface(xcf+x,y+ycf*fusLength,z+zcf*zscale,...
    'facecolor',fusColor,'linestyle',linestyle,...
    'edgecolor',edgeColor);

[ycf,zcf,xcf] = cylinder(fusRadius); 
h(3) = surface(xcf*fusLength+x,y+ycf,z+zcf*zscale,...
    'facecolor',fusColor,'linestyle',linestyle,...
    'edgecolor',edgeColor);

[ycf,zcf,xcf] = cylinder(fusRadius); 
h(4) = surface(-xcf*fusLength+x,y+ycf,z+zcf*zscale,...
    'facecolor',fusColor,'linestyle',linestyle,...
    'edgecolor',edgeColor);

% Propellers: 
if ~ismember(failure_id, [0,1,2,3,4])
    failiure_id = 0;
end

if failure_drf
    if failure_id == 1 || failure_id == 3
       failure_id  = [1 3];
    elseif failure_id == 2 || failure_id == 4
       failure_id = [2 4];
    end    
end

if failure_id == 0
    failure_id = [];
end

propColor = [propColor;propColor;propColor;propColor];
% propColor(failure_id,:) = propColor(failure_id,:)+[0 1 1];
propColor(failure_id,:) = repmat([1 1 1],length(failure_id),1);
xp = .4*wingWidth*sin(0:.2:2*pi); 
zp = .4*wingWidth*cos(0:.2:2*pi); 
yp = zeros(size(xp)); 
h(5) = patch(-3.2*scale+x+zp   ,y+xp             ,z-(yp+.1*scale)*zscale,propColor(4,:)); 
h(6) = patch(+2.8*scale+x+zp   ,y+xp             ,z-(yp+.1*scale)*zscale,propColor(2,:)); 
h(7) = patch(x+zp              ,y+xp+3*scale     ,z-(yp+.1*scale)*zscale,propColor(3,:));
h(8) = patch(x+zp              ,y+xp-3*scale     ,z-(yp+.1*scale)*zscale,propColor(1,:));
set(h(5:8),'facealpha',1.0,'edgealpha',.1);

[xcf,zcf,ycf] = cylinder(fusRadius); 
h(9) = surface(xcf+x,y+ycf*fusLength,z+zcf,...
    'facecolor',fusColor,'linestyle',linestyle,...
    'edgecolor',edgeColor);
rotate(h(9),[0 0 1],-135,[x y z]);

set(h(1:4),'facealpha',0.1,'edgealpha',0.1);
set(h(9),'facealpha',0.1,'edgealpha',0.1);
%% Set Roll, Pitch, and Yaw: 
rotate(h,[0 1 0],roll,[x y z]);
rotate(h,[1 0 0],pitch,[x y z]);
rotate(h,[0 0 1],yaw,[x y z]);
rotate(h,[0 0 1],45,[x y z]);
%% Set view
title('Quadrotor')
xlabel('x [m]')
ylabel('y [m]')
zlabel('z [m]')
grid on;

view([-30 15]); %30
% axis(limits);% tight equal
lighting flat%gouraud
    
% Discard surface handles if they're unwanted: 
if nargout==0
    clear h
end

end
