classdef LandDetector < BlocksPkg.Block
    %LANDDETECTOR Very simple land detector
    % For PX4 docs (not this implementation), see:
    % https://docs.px4.io/en/advanced_config/land_detector.html
    properties
        landed
        w_threshold % [rad/s]
    end
    
    methods
        function obj = LandDetector(w_threshold)
            obj.landed = true;
            obj.w_threshold = w_threshold;
        end
        
        function landed = step(obj, w)
            % Really only detecting takeoff here..
            if obj.landed && mean(w) > obj.w_threshold
                obj.landed = false;
            end
            landed = obj.landed;
        end
    end
end

