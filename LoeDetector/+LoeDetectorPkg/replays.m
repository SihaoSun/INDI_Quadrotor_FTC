classdef Replays
    %REPLAYS
    
    properties
        constants
        run_configs
        n_run_configs
        figures
    end
    
    methods
        function obj = Replays()
            %REPLAYS
            obj.constants = LoeDetectorPkg.Constants();
            [run_configs, n_run_configs] = LoeDetectorPkg.run_configs();
            obj.run_configs = run_configs; obj.n_run_configs = n_run_configs;
        end
        
        function params = get_default_params(obj)
            %static method
            % Control effectiveness
            params.G_dp = 100;
            params.G_dq = 100;
            params.G_dVz = 5;
            
            % Process noise
            params.Q = 0.01;
            params.R = 1;
            
            params.fdd_k_thres = 0.25;
            params.fdd_fail_p_thres = 0.90;
        end
        
        function [obj] = replay_single(obj, run_i, params, ...
                use_cached_logs, do_plot_singles_detailed)
            %METHOD1
            %   Detailed explanation goes here
            
            if ~exist('params', 'var')
               params = obj.get_default_params(); 
            end
            
            if ~exist('use_cached_logs', 'var')
                use_cached_logs = true;
            end
            
            if ~exist('do_plot_singles_detailed', 'var')
                do_plot_singles_detailed = true;
            end
            
            run_config = obj.run_configs{run_i};
            
            if isempty(run_config)
                return
            end
            
            fprintf('Starting run: %d\n', run_i);
            
            if ~isfield(run_config, 'title')
                run_config.title = string(run_i);
            end
            
            csv_file = run_config.csv_file;
            
            replay_log = LoeDetectorPkg.ReplayLog(obj.constants.replay_log_dir, ...
                run_config);
            
            if replay_log.file_exists() && use_cached_logs
                log = replay_log.get_log();
            else
                log = LoeDetectorPkg.replay_from_csv(csv_file, Ts, params);
            end
            
            log = LoeDetectorPkg.post_process_replay_log(log, run_config, params, replay_log.filename);
            
            fprintf('Run index       : %i\n', run_i)
            fprintf('Run name        : %s\n', run_config.title)
            if isfield(log, 'detection_delay')
                fprintf('Detection delay : %i ms\n', round(log.detection_delay*1000))
            end
            if isstruct(log.detection_event)
                fprintf('Actuator        : %i\n', log.detection_event.id)
                fprintf('Correct         : %i\n', log.correct_actuator)
            end
            
            if do_plot_singles_detailed
                figures = LoeDetectorPkg.plot_single_log(log, run_config, params);
            end
        end
        
        function [obj] = replay_multi(obj, run_configs_i, params, ...
                use_cached_logs, do_plot_singles_detailed)
            %METHOD1
            %   Detailed explanation goes here
            
            if ~exist('run_configs_i', 'var')
                run = 1:obj.n_run_configs;
            end
            
            if ~exist('params', 'var')
               params = obj.get_default_params(); 
            end
                        
            if ~exist('use_cached_logs', 'var')
               use_cached_logs = true; 
            end
                                    
            if ~exist('do_plot_singles_detailed', 'var')
               do_plot_singles_detailed = false; 
            end
                                    
            parfor run_i = run_configs_i
               obj.replay_single(obj.run_i, ...
                   params, ...
                   use_cached_logs, do_plot_singles_detailed);
            end
        end
    end
end

