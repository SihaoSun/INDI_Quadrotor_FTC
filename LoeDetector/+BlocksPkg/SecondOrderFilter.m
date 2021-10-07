classdef SecondOrderFilter < BlocksPkg.Block
    %% Second order filter
    % Supports multiple SISO filters
    %
    % TODO:
    % - Maybe calculate state space `sys` manually like:
    % https://en.wikipedia.org/wiki/Bilinear_transform and
    % https://github.com/paparazzi/paparazzi/blob/e1735db5fd10c601cf80e29b5c1d20f6941154c2/sw/airborne/filters/low_pass_filter.h#L199
    % This will superseed the need to do that via InitFcn.
    
    properties
        sys;
        states;
        output;
    end
    
    methods
        function obj = SecondOrderFilter(sys, n)
            obj.sys = sys;
            % sys must be defined in a `InitFcn` like `init.m`
            % because `tf' is not supported by code generation
            
            obj.states = zeros(2, n);
            % 2 state vars per SISO filter
        end
        
        function y = step(obj, input)
            n_states = size(obj.states, 2);
            y = zeros(1, n_states);
            for i = 1:n_states
                obj.states(:,i) = obj.sys.A*obj.states(:,i) + obj.sys.B*input(i);
                y(i) = obj.sys.C*obj.states(:,i) + obj.sys.D*input(i);
            end
        end
    end
end

