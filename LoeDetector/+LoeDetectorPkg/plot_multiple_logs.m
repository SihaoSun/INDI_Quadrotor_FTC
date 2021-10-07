function [figures] = plot_multiple_logs(logs)
    %% PLOT_MULTIPLE_LOGS
    % Plot detection events
    % TODO:
    % - rename?

PAPER_COLUMN_WIDTH = 8.6; % cm

fig = figure;
fig.Renderer = 'Painters';

pdf_export = '/home/bramsvs/src/fddpaper/plots/events'; % TODO: configurable

figures = {}; % ?

xlabel('t [s]');
ylabel('Flight');

size = [PAPER_COLUMN_WIDTH 5];
set(gcf, 'Units', 'centimeters')
set(gcf, 'Position', [[100 100] size])

for i_log = 1:length(logs)

    log = logs{i_log};

    if isempty(log)
        continue
    end
    
    main_ev = log.metadata.detection_event;
    fdds = log.metadata.fdds;

    hold on

    for i_detection_events = 1:length(fdds)

        ev = fdds{i_detection_events};
        if ev.id == 0
            continue
        end
 
        if ~isstruct(main_ev) || ev.t >= main_ev.t % don't plot events that happened later than the 'main' event
            continue
        elseif ev.landed == true
            plot(ev.t, i_log, 'b.');
        else
            plot(ev.t, i_log, 'r.');
        end
    end
    
    if ~isstruct(main_ev)
        yline(i_log, 'r:');
    else
%         yline(i_log, 'b:');
        % This is the main detection event, the 'true positive'
        plot(main_ev.t, i_log, 'go');
    end
end

saveas(gcf, pdf_export, 'epsc')

end
