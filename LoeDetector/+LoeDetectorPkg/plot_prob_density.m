function [prob_density_fig] = plot_prob_density(run, target, save)
%PLOT_PROB_DENSITY Summary of this function goes here
%   Detailed explanation goes here

%% Plot probability density

if ~exist('run', 'var')
    run = 30;
end

if ~exist('target', 'var')
    target = 'paper';
end

if ~exist('save', 'var')
    save = false;
end

C = LoeDetectorPkg.Constants();
run_configs = LoeDetectorPkg.run_configs();

replay_log = LoeDetectorPkg.ReplayLog(C.replay_log_dir, run_configs{run});
log = replay_log.get_log();
log.detection_event.k
k_detection = log.detection_event.k;
t_detection = log.detection_event.t;

t_fail = log.run_config.t_fail;
k_fail = replay_log.get_index_k(t_fail);

if strcmp(target, 'paper')
    prob_dens_fig = LoeDetectorPkg.ProbDensityFig(0.9, 0.25, 4, 3, 'paper');
    
    log_step = replay_log.get_step(k_fail);
    mean = log_step.scaling_factor_mean;
    cov = log_step.scaling_factor_cov;
    prob_dens_fig.update_subplot(1, mean, cov);
    
    dim = [.35 .9 0 0];
    label = sprintf('$t_d = %.2f s$', t_fail);
    textbox = annotation('textbox',dim,'String',label,'FitBoxToText','on',...
        'Interpreter', 'latex');
    
    % text(10, 10, '$t_\mathrm{fail} = xx s$', 'Interpreter', 'latex')
    
    log_step = replay_log.get_step(round((k_detection+k_fail)/2));
    mean = log_step.scaling_factor_mean;
    cov = log_step.scaling_factor_cov;
    prob_dens_fig.update_subplot(2, mean, cov);
    
    dim = [.35 .6 0 0];
    label = sprintf('$(t_\\mathrm{fail} + t_d)/2 = %.2f  s$', (t_detection + t_fail)/2);
    textbox2 = annotation('textbox',dim,'String',label,'FitBoxToText','on',...
        'Interpreter', 'latex');
    
    log_step = replay_log.get_step(k_detection+1);
    mean = log_step.scaling_factor_mean;
    cov = log_step.scaling_factor_cov;
    prob_dens_fig.update_subplot(3, mean, cov);
    
    dim = [.35 .30 0 0];
    label = sprintf('$t_\\mathrm{d} = %.2f s$', t_detection);
    textbox3 = annotation('textbox',dim,'String',label,'FitBoxToText','on',...
        'Interpreter', 'latex');
end

if strcmp(target, 'video')
    prob_dens_fig = LoeDetectorPkg.ProbDensityFig(0.9, 0.25, 4, 1, 'video');
    
    for k = (k_detection-500):(k_detection+500)
        log_step = replay_log.get_step(k);
        
        mean = log_step.scaling_factor_mean;
        cov = log_step.scaling_factor_cov;
        
        prob_dens_fig.update(mean, cov);
        prob_dens_fig.write_video();
    end
    
    prob_dens_fig.close();
end

if save
    prob_dens_fig.savefig();
end

end

