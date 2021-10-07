function [figures] = plot_single_log(log, run_config, params)

script_dir = fileparts(mfilename('fullpath'));

figures = {};

C = LoeDetectorPkg.Constants();

if isstruct(log.detection_event)
    detection_t = log.detection_event.t;
else
    detection_t = false;
end
if ~run_config.t_fail && log.detection_event
    zoom_to_fail_xlim = [detection_t-.67 detection_t+.33];
else
    zoom_to_fail_xlim = [run_config.t_fail-.67 run_config.t_fail+.33];
end
plot_configs{1}.title = false;
plot_configs{1}.pdf_export = '/home/bramsvs/src/fddpaper/plots/probs';
plot_configs{1}.line_style_map = C.line_style_map;
plot_configs{1}.line_color_map = C.line_color_map;

t_fail_detection_xlines{1}.x = run_config.t_fail;
t_fail_detection_xlines{1}.label = '$t_\mathrm{fail}$';
t_fail_detection_xlines{1}.horizontal_alignment = 'left';

t_fail_detection_xlines{2}.x = detection_t;
t_fail_detection_xlines{2}.label = '$t_d$';

% Only add t_fail and t_d label to second subplot
plot_configs{1}.subplots{1}.xlines = t_fail_detection_xlines;
plot_configs{1}.subplots{1}.xlines{1}.label = '';
plot_configs{1}.subplots{1}.xlines{2}.label = '';

plot_configs{1}.subplots{2}.xlines = t_fail_detection_xlines;

plot_configs{1}.subplots{3}.xlines = t_fail_detection_xlines;
plot_configs{1}.subplots{3}.xlines{1}.label = '';
plot_configs{1}.subplots{3}.xlines{2}.label = '';

% plot_configs{1}.subplots{2}.xlines{1}.x = run_config.t_fail;
% plot_configs{1}.subplots{2}.xlines{1}.label = '$t_\mathrm{fail}$';
% if detection_t
%     plot_configs{1}.subplots{2}.xlines{2}.x = detection_t;
%     plot_configs{1}.subplots{2}.xlines{2}.label = '$t_d$';
% end

plot_configs{1}.xlim = zoom_to_fail_xlim;

plot_configs{1}.subplots{1}.legend = '$\\hat{k}_%i$';
plot_configs{1}.subplots{1}.values = log.scaling_factor_mean;
plot_configs{1}.subplots{1}.title = 'Scaling factors';

% plot_configs{1}.subplots{2}.legend = '${\\sigma^2_k}_%i$';
plot_configs{1}.subplots{2}.legend = '$\\mathrm{Var}(\\hat{k_%i})$';
plot_configs{1}.subplots{2}.values = log.scaling_factor_cov;
plot_configs{1}.subplots{2}.title = 'Covariance';

plot_configs{1}.subplots{3}.legend = '$(P_\\mathrm{fail})_%i$';
plot_configs{1}.subplots{3}.values = log.fail_P;
plot_configs{1}.subplots{3}.title = 'Failure probability';

plot_configs{1}.subplots{3}.yline.y = params.fdd_fail_p_thres;
plot_configs{1}.subplots{3}.yline.label = '$P_\mathrm{thres}$';

% plot_configs{1}.subplots{4}.legend = 'id';
% plot_configs{1}.subplots{4}.values = log.fail_id;
% plot_configs{1}.subplots{4}.title = 'Failure id';

% plot_configs{1}.subplots{5}.legend = 'rates_%i';
% plot_configs{1}.subplots{5}.values = log.rates_f;

n_subplots = length(plot_configs{1}.subplots);
plot_configs{1}.size = [C.PAPER_COLUMN_WIDTH (12/4)*n_subplots];


plot_configs{2}.title = false;
plot_configs{2}.size = [C.PAPER_COLUMN_WIDTH 7];
plot_configs{2}.subplot_columns = 2;
plot_configs{2}.link_y = [1 2];
plot_configs{2}.extra_headroom = 0.4;
plot_configs{2}.pdf_export = '/home/bramsvs/src/fddpaper/plots/kalman_z';
plot_configs{2}.xlines{1}.x = run_config.t_fail;
if detection_t
    plot_configs{2}.xlines{2}.x = detection_t;
    plot_configs{2}.subplots{4}.xlines = plot_configs{1}.subplots{2}.xlines;
    plot_configs{2}.subplots{4}.xlines{1}.vertical_alignment = 'bottom';
    plot_configs{2}.subplots{4}.xlines{1}.horizontal_alignment = 'left';
    plot_configs{2}.subplots{4}.xlines{2}.vertical_alignment = 'bottom';
end
plot_configs{2}.xlim = zoom_to_fail_xlim;

plot_configs{2}.subplots{1}.legend = '$\\dot{p}$ [rad/$s^2$]';
plot_configs{2}.subplots{1}.values = log.rates_f_dot(1,:);

plot_configs{2}.subplots{2}.legend = '$\\dot{q}$ [rad/$s^2$]';
plot_configs{2}.subplots{2}.values = log.rates_f_dot(2,:);

plot_configs{2}.subplots{3}.legend = '$\\dot{r}$ [rad/$s^2$]';
plot_configs{2}.subplots{3}.values = log.rates_f_dot(3,:);

plot_configs{2}.subplots{4}.legend = '$a_z$ [m/$s^2$]';
plot_configs{2}.subplots{4}.values = log.acc_meas_f(1,:);

plot_configs{3}.title = false;
plot_configs{3}.size = [C.PAPER_COLUMN_WIDTH 7];
plot_configs{3}.subplot_columns = 2;
plot_configs{3}.link_y = [1 2 3 4];
plot_configs{3}.extra_headroom = 0.5;
plot_configs{3}.pdf_export = '/home/bramsvs/src/fddpaper/plots/rotor_speeds';
plot_configs{3}.xlines{1}.x = run_config.t_fail;
if detection_t
    plot_configs{3}.xlines{2}.x = detection_t;
    plot_configs{3}.subplots{4}.xlines = plot_configs{2}.subplots{4}.xlines;
end
plot_configs{3}.xlim = zoom_to_fail_xlim;

for i = 1:size(log.u, 1)
    plot_configs{3}.subplots{i}.legend = sprintf('$\\\\omega_{%i}$ [rad/s]', i); % TODO
    plot_configs{3}.subplots{i}.values = log.u(i,:);
    % plot_configs{3}.subplots{i}.xline.x = detection_t;
    % plot_configs{3}.subplots{i}.xline.label = 't_d';
end

% Zoomed out view
plot_configs{4} = plot_configs{1};
plot_configs{4} = rmfield(plot_configs{4}, 'xlim');
plot_configs{4}.pdf_export = '/home/bramsvs/src/fddpaper/plots/probs_large';

plot_configs{4}.subplots{end+1} = struct;
plot_configs{4}.subplots{end}.legend = 'landed';
plot_configs{4}.subplots{end}.values = log.landed;

plot_configs{4}.subplots{end+1} = struct;
plot_configs{4}.subplots{end}.legend = '$p, q$ unfiltered [rad/s]';
plot_configs{4}.subplots{end}.values = log.rates_meas([1,2],:);

plot_configs{4}.subplots{end+1} = struct;
plot_configs{4}.subplots{end}.legend = '$a_z$ unfiltered [m/$s^2$]';
plot_configs{4}.subplots{end}.values = log.acc_meas;

n_subplots = length(plot_configs{4}.subplots);
plot_configs{4}.size = [C.PAPER_COLUMN_WIDTH*4 (14/4)*n_subplots];

plot_configs_n = length(plot_configs);

for plot_config_i = 1:plot_configs_n

    plot_config = plot_configs{plot_config_i};
    
    fig = figure;
    fig.Renderer = 'Painters';
    figures{plot_config_i}.figure = fig;
    
    if plot_config.title
        sgtitle(plot_config.title);
    end

    set(gcf, 'Units', 'centimeters')
    set(gcf, 'Position', [[100 100] plot_config.size])

    subplots = plot_config.subplots;
    subplots_n = length(subplots);
    
    for subplot_i = 1:subplots_n
        subplot_config = subplots{subplot_i};
        
        if isfield(plot_config, 'subplot_columns')
            subplot_columns = plot_config.subplot_columns;
            subplot_rows = round(subplots_n/subplot_columns);
        else
            subplot_columns = 1;
            subplot_rows = subplots_n;
        end

        ax = subplot(subplot_rows, subplot_columns, subplot_i);
        
        xline_configs = {};
        if isfield(plot_config, 'xlines')
        	xline_configs = [xline_configs(:)' plot_config.xlines(:)'];
        end
        if isfield(subplot_config, 'xlines')
         	xline_configs = [xline_configs(:)' subplot_config.xlines(:)'];
        end
        
        % Vertical marker line
        for i_xline = 1:length(xline_configs)
            xline_config = xline_configs{i_xline};
            x = xline_config.x;
            if isfield(xline_config, 'label')
                label = xline_config.label;
            else
                label = '';
            end
            if isfield(xline_config, 'vertical_alignment')
                vertical_alignment = xline_config.vertical_alignment;
            else
                vertical_alignment = 'top';
            end
            if isfield(xline_config, 'horizontal_alignment')
                horizontal_alignment = xline_config.horizontal_alignment;
            else
                horizontal_alignment = 'right';
            end
            xline(ax, x, ':', label, ...
                'HandleVisibility','off', ... % hide from legend
                'LabelVerticalAlignment', vertical_alignment, ...
                'LabelHorizontalAlignment', horizontal_alignment, ...
            'Interpreter', 'latex');
            % 'LabelOrientation', 'horizontal', ...
        end
        
        % Horizontal marker line
        if isfield(subplot_config, 'yline')
            y = subplot_config.yline.y;
            if isfield(subplot_config.yline, 'label')
                label = subplot_config.yline.label;
            else
                label = '';
            end
            yline(ax, y, ':', label, ...
                'HandleVisibility','off', ... % hide from legend
                'LabelHorizontalAlignment', 'center', ...
                'LabelVerticalAlignment', 'middle', ...
                'Interpreter', 'latex');
            %                'LabelOrientation', 'horizontal', ...
            
        end
        
        axes(subplot_i) = ax;
        figures{plot_config_i}.axes(subplot_i) = axes(subplot_i);
        
        if isfield(subplot_config, 'grids')
            grids = subplot_config.grids;
            ax.XGrid = grids;
            ax.YGrid = grids;
        end
        
        if isfield(plot_config, 'xlim')
            ax.XLim = plot_config.xlim;
        end
        
        is_last_row = subplot_i > (subplot_rows-1)*subplot_columns;
        
        if is_last_row
            xlabel('t [s]')
        end
        h = gca;
        legend
        hold on
        
        % Loop over lines in subplot
        for i = 1:size(subplot_config.values, 1)
            p = plot(log.time_real', subplot_config.values(i,:));
            h.Legend.Interpreter = 'latex';
            h.Legend.String{i} = sprintf(subplot_config.legend, i);
            h.Legend.Location = 'northwest';
            
            if isfield(plot_config, 'line_style_map')
                p.LineStyle = plot_config.line_style_map{i};
            end
            
            if isfield(plot_config, 'line_style_map')
                p.Color = plot_config.line_color_map{i};
            end
            
        end
        
        % Scale upper YLim to make space for legend
        if isfield(plot_config, 'extra_headroom')
            y_range = ax.YLim(1) - ax.YLim(2);
            y_upper = ax.YLim(2) - y_range*plot_config.extra_headroom;
            ax.YLim = [ax.YLim(1) y_upper];
        end
        
    end
    
    if isfield(plot_config, 'link_y')
        linkaxes(axes(plot_config.link_y), 'y');
    end
    
    if isfield(plot_config, 'pdf_export')
        saveas(gcf, plot_config.pdf_export, 'epsc')
    end
    
    linkaxes(axes, 'x');
    filename = strcat(script_dir, '/plots/', run_config.title, '_', string(plot_config_i));
    saveas(gcf, filename, 'epsc')

end
end
