classdef ReplayLog < handle
    %REPLAYLOG Summary of this class goes here
    %   Detailed explanation goes here
    
    properties
        run_config
        filename
        metadata
        log
    end
    
    methods
        function obj = ReplayLog(replay_log_dir, run_config)
            %REPLAYLOG Construct an instance of this class
            %   Detailed explanation goes here
            obj.run_config = run_config;
            obj.filename = strcat(replay_log_dir, run_config.title, '.mat');
        end
        
        function file_exists = file_exists(obj)
            file_exists = isfile(obj.filename);
        end
        
        function metadata = get_metadata(obj)
            if isempty(obj.metadata)
                obj.metadata = load(obj.filename, ...
                    'i_replay_config', ...
                    'run_config', 'params', ...
                    'false_alarms', ...
                    'missed_detection', ...
                    'detection_event', 'detection_delay', ...
                    'correct_actuator', 'fdds');
            end
            metadata = obj.metadata;
        end
        
        function log = get_log(obj)
            if isempty(obj.log)
                obj.log = load(obj.filename);
            end
            log = obj.log;
        end
        
        function k = get_index_k(obj, time)
            found_time = 0;
            k = 1;
            while found_time < time
                found_time = obj.log.time_real(k);
                k = k + 1;
            end
        end
        
        function obj = append_log_step(log_step)
            %APPEND_STEP
            % Append all `log_step`-fields to `log`
            fields = fieldnames(log_step);
            for i = 1:length(fields)
                obj.log.(fields{i})(:,k) = log_step.(fields{i});
            end
        end
        
        function log_step = get_step(obj, k)
            %GET_STEP
            
            log = obj.get_log();
            fields = fieldnames(log);
            
            n_k = length(log.time_real);
            
            for i = 1:length(fields)
                field = log.(fields{i});
                % HACK: can also be fdd, TODO: split
                % signals/events/metadata
                if ~iscell(field) && ~isstruct(field) && length(field) > 1
                    if size(field, 1) == 1 || size(field, 2) == 1
                        log_step.(fields{i}) = field(k);
                    else
                        log_step.(fields{i}) = field(:,k);
                    end
                end
            end
        end
    end
end

