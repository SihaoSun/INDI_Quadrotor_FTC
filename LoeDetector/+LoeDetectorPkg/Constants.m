classdef Constants
    %CONSTANTS
    
    properties
        PAPER_COLUMN_WIDTH = 8.6 + .6; % cm, requires 3mm trim!
        line_style_map = {'-', '-.', '-', '-.'};
        line_color_map = { ...
%             [235, 220, 32]/255, ... % yellow2
%             [33, 255, 48]/255, ... %green2
%             [255, 88, 54]/255, ... %red2
%             [27, 121, 235]/255, ... % blue2
            [0, 0.4470, 0.7410], ... % blue
            [0.9290, 0.6940, 0.1250], ... % yellow
            [0.8500, 0.3250, 0.0980], ... % red
            [0.4940, 0.1840, 0.5560], ... % purple
            %             [0.4660, 0.6740, 0.1880], ... % green
            };
        % Colors from: http://math.loyola.edu/~loberbro/matlab/html/colorsInMatlab.html
        script_dir
        replay_log_dir
        Ts = 1/500;
    end
    methods
        function obj = Constants()
            obj.script_dir = fileparts(mfilename('fullpath'));
            obj.replay_log_dir = strcat(obj.script_dir, '/replay_logs/');
        end
    end
end
%             [0, 0, 0], ... % black

