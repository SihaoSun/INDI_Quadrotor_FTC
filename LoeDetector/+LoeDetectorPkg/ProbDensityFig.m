classdef ProbDensityFig < handle
    %PROB_DENSITY_FIG Probability density figure
    
    properties
        pdf_filename
        fig
        axes
        P_thres
        k_thres
        n_vars
        n_subplots
        target % 'paper' | 'video'
        plots
        areas
        fail_text
        X
        videoWriter
        constants
    end
    
    methods
        function obj = ProbDensityFig(P_thres, k_thres, n_vars, n_subplots, target)
            %PROB_DENSITY_FIG
            
            obj.P_thres = P_thres;
            obj.k_thres = k_thres;
            obj.n_vars = n_vars;
            obj.n_subplots = n_subplots;
            obj.target = target;
            
            obj.pdf_filename = '/home/bramsvs/src/fddpaper/plots/prob_density';
            
            obj.constants = LoeDetectorPkg.Constants();
            
            fig = figure;
            fig.Renderer = 'Painters';
            
            PLOT_HEIGHT = 6.5;
            
            if strcmp(obj.target, 'video')
                set(fig, 'color', 'w')
                size = [20 10];
            else
                size = [obj.constants.PAPER_COLUMN_WIDTH PLOT_HEIGHT];
                
            end
            set(fig, 'Units', 'centimeters')
            set(fig, 'Position', [[100 100] size])

            obj.X = [0:0.01:1.5];
            obj.plots = cell(n_subplots, 4, 1);
            obj.areas = cell(n_subplots, 4, 1);
            
            legend_text = "$N(k, \\sigma_k)_%i$";
            
            for n_subplot = 1:obj.n_subplots
                ax = subplot(n_subplots, 1, n_subplot);
                hold on
                obj.axes{n_subplot} = ax;
                
                if n_subplot == round(obj.n_subplots/2)
                    xline(ax, obj.k_thres, ':', '$k_\mathrm{thres}$', 'Interpreter', 'tex', ...
                        'HandleVisibility','off', ... % hide from legend
                        'LabelVerticalAlignment', 'top', ...
                        'LabelHorizontalAlignment', 'center', ...
                        'Interpreter', 'latex');
                else
                    xline(ax, obj.k_thres, ':', 'HandleVisibility','off'); % hide from legend
                end
                
                % ylabel('$N(k, \sigma_k)$ [-]', 'Interpreter', 'latex')
                
                if n_subplot == n_subplots
                    xlabel('$k_i$ [-]', 'Interpreter', 'latex')
                end
                
                P = zeros(1, length(obj.X));
                for i = 1:obj.n_vars
                    obj.plots{n_subplot, i} = plot(ax, obj.X, P);
                    
                    if n_subplot == 1
                        legend(ax)
                        ax.Legend.String{i} = sprintf(legend_text, i);
                        ax.Legend.Interpreter = 'latex';
                        ax.Legend.Location = 'northeast';
                        if strcmp(target, 'paper')
                            ax.Legend.Position(2) = 0.78;
                        end
                    end
                end
                yticks([0 1 2])
            end
            
            
            if strcmp(target, 'video')
                set(findall(gcf,'-property','FontSize'), 'FontSize', 24)
                set(findall(gca, 'Type', 'Line'), 'LineWidth', 2);
            end

            obj.fig = fig;
                        
            obj.videoWriter = VideoWriter('vid');
            open(obj.videoWriter);
        end
        
        function obj = update(obj, mean, covariance)
            %UPDATE Update plot data and write to video file
            %   Reference:
            % https://stackoverflow.com/questions/13102654/how-should-i-update-the-data-of-a-plot-in-matlab
            
            obj.update_subplot(1, mean, covariance);
            drawnow
        end
        
        function obj = update_subplot(obj, n_subplot, mean, covariance)
            ax = subplot(obj.n_subplots, 1, n_subplot);
                                    
            P_k_thres = zeros(1,4);
            
            sigma = sqrt(abs(covariance));
            P = zeros(obj.n_vars, length(obj.X));

            for i = 1:obj.n_vars
%                 obj.plots{n_subplot, i}.YData = P(i);
                P(i,:) = normpdf(obj.X, mean(i), sigma(i));
                P_k_thres(i) = normcdf(obj.k_thres, mean(i), sigma(i));
                % xline(mean, ':', 'mean')
                % xl = xline(k_thres, ':', '(P_\tx{fail})_\tx{thres}')
                % xl = xline(k_thres, ':', '$(P_\text{fail})_\text{thres}$')
                
                % P_thres area
                % area(X, P, 'FaceAlpha', .06, 'EdgeAlpha', 0)
            end
            
            [max_P_k_thres, max_P_k_thres_i] = max(P_k_thres);
            

            % Shade area
            if max_P_k_thres > 0.6
                i = max_P_k_thres_i;
                
                the_plot = obj.plots{n_subplot, i};
                
                X_P_k_thres = norminv(obj.P_thres, mean(i), sigma(i));

                color = the_plot.Color;
                mask = obj.X<=obj.k_thres;
                
%                 delete(obj.fail_text)
%                 P_fail_string = sprintf("P(k < k_thres) = %.2f", max_P_k_thres);
%                 obj.fail_text = text(0.1, 1, P_fail_string);
%                 
                if isempty(obj.areas{n_subplot, i}) || ~isvalid(obj.areas{n_subplot, i})
                    obj.areas{n_subplot, i} = area(ax, obj.X(mask), P(i,mask), ...
                        'FaceColor', color, 'FaceAlpha', .1, 'EdgeAlpha', 0, ...
                        'HandleVisibility','off');
                else
                    obj.areas{n_subplot, i}.XData = obj.X(mask);
                    obj.areas{n_subplot, i}.YData = P(i, mask);
                end

            else
                for i = 1:obj.n_vars
                    delete(obj.areas{n_subplot, i})
                end
            
                delete(obj.fail_text)
            end
                        
            for i = 1:obj.n_vars
                % Put plots on top of area
                obj.plots{n_subplot, i}.YData = P(i,:);
                uistack(obj.plots{n_subplot, i}, 'top');
            end
            ax.XLim = [0 1.5];
            ax.YLim(2) = 2.5;
        end
        
        function obj = write_video(obj)
            %             obj.fig.Position = [[100 100] [400 150]];
            figframe = getframe(obj.fig);
            obj.videoWriter.writeVideo(figframe)
        end
        
        function obj = close(obj)
            close(obj.videoWriter)
        end
        
        function obj = savefig(obj)
            saveas(obj.fig, obj.pdf_filename, 'epsc')
        end
    end
end

