classdef Derivative < BlocksPkg.Block
    %% Derivative
    % Returns zeros on first update
    
    properties
        prev_value;
        Ts;
        first;
    end
    
    methods
        function obj = Derivative(Ts, n)
            % Inputs:
            %   n   vector length
            obj.prev_value = zeros(n, 1);
            obj.Ts = Ts;
            obj.first = true;
        end
        
        function y = step(obj, new_value)
            if obj.first
                y = obj.prev_value*0;
                obj.first = false;
            else
                y = (new_value - obj.prev_value)/obj.Ts;
            end
            obj.prev_value = new_value;
        end
    end
end

