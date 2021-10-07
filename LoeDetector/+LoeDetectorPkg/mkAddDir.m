function mkAddDir(dirname)
%% Create dir if not exist, add to path.

if (~exist(dirname, 'dir'))
    mkdir(dirname)
end

addpath(dirname)
