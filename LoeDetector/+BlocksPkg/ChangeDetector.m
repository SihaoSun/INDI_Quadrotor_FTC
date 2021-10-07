classdef ChangeDetector < BlocksPkg.Block
    %CHANGEDETECTION
    % Detect changes in a one-dimensional signal
    
    properties
        prev_value;
    end
    
    methods
        function obj = ChangeDetector()
            obj.prev_value = int32(-1);
        end
        
        function [changed, cur_value, prev_value] = step(obj, value)
            if value ~= obj.prev_value && obj.prev_value~=-1
                changed = true;
            else
                changed = false;
            end
            prev_value = obj.prev_value;
            cur_value = value;
            obj.prev_value = value;
        end
    end
end

