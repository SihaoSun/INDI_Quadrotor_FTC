function [log] = post_process_replay_log(log, run_config, params, log_filename)
%POST_PROCESS_REPLAY_LOG
% This function extracts (detection) info from replay log data.

log.run_config = run_config;
log.params = params;

log.false_alarms = 0;
log.detection_event = false;
log.missed_detection = false;

% Find single LOE detection for failed rotor,
% loop over all fault detection events
if log.run_config.fail_id > 0
    for j = 1:length(log.fdds)
        fdd = log.fdds{j};
        
        % Searching for first failure event after `t_fail`,
        % can be any actuator
        delay = fdd.t - log.run_config.t_fail;
        if delay > 0 && delay < 0.3
            log.detection_event = fdd;
            log.detection_event.delay = delay;
            log.detection_delay = delay;
            break % break for loop
        end
        
        % Search for false alarms
        if delay < 0 && fdd.landed == false && fdd.id > 0
            log.false_alarms = log.false_alarms + 1;
        end
        
    end
    
    % Compute detection delay
    if isstruct(log.detection_event)
        % Check if failed actuator is detected correctly
        if log.detection_event.id == run_config.fail_id
            log.detection_event.correct_actuator = true;
            log.correct_actuator = true;
        else
            log.detection_event.correct_actuator = false;
            log.correct_actuator = false;
        end
    end
    
    if run_config.fail_id && ...
            (~isstruct(log.detection_event) ...
            || isfield(log, 'correct_actuator') && log.correct_actuator == false)
        log.missed_detection = true;
    end
    
end

log.post_processing_done = true;

% TODO: clean

% fprintf('Run             : %s\n', run_config.title)
% fprintf('Params          : %s\n', params.id)
%
% if isstruct(log.detection_event)
%     fprintf('Detection delay : %i ms\n', round(log.detection_event.delay*1000))
%     fprintf('Actuator        : %i\n', log.detection_event.id)
%     fprintf('False positives : %i\n', log.false_alarms)
%     if ~log.detection_event.correct_actuator
%         warning("Wrong actuator detected.")
%     end
%     fprintf('Correct         : %i\n', log.detection_event.correct_actuator)
% end

% `save` cannot be inside parfor, must be inside function, see:
% https://mathworks.com/help/parallel-computing/transparency.html
% The `-struct` flag allows us to later load specific fields only. E.g.
% loading the metadata fields without all the timeseries.
% https://mathworks.com/matlabcentral/answers/98870-is-it-possible-to-use-the-load-function-to-load-structure-fields-selectively-in-matlab
save(log_filename, '-struct', 'log')

end
