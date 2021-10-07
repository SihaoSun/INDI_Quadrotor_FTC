function [dirname] = mkAddGeneratedDir(script_dir)
%% Creates a folder called 'generated' inside 'script_dir' and
% add to path so functions/scripts in it can be found.

% Note: 'generated' dirs are excluded in '.gitignore'.

dirname = strcat(script_dir, '/', 'generated');
LoeDetectorPkg.mkAddDir(dirname);
