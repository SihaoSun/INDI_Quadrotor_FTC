clear all; close all

frame_init

pdf_export = '/home/bramsvs/src/fddpaper/plots/case_study_flight';

csv_filename = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-09/17_48_56_urcontrol_input_0.csv';

% [logsout_filename, logsout] = replay('URControl', csv_filename, 8.5);

% save(logsout_filename, 'logsout');

logsout_filename = '/home/bramsvs/flight_logs/prop_eject_logs/2019-08-09/17_48_56_urcontrol_input_0_logsout.mat';
load(logsout_filename)

par.freq = 1/500;

% Read csv
dataTable = readtable(csv_filename);

%% Fill in data in extSignal struct
extSignal = struct();

% first do time
timestamps = dataTable.timestamp;
if timestamps(1) == 0
    error("Timestamps are missing")
end
time_real = (timestamps - timestamps(1))/1e6;
Ts = 1/par.freq;
time_sim = [0:Ts:Ts*(length(timestamps)-1)];

disp(fields(dataTable))

C = LoeDetectorPkg.Constants();

t_start = 0.1;
t_end = 5;
[~, i_start] = histc(t_start, time_real);
[~, i_end] = histc(t_end, time_real);

set(gcf, 'Units', 'centimeters')
set(gcf, 'Position', [100 100 C.PAPER_COLUMN_WIDTH 7.5])

subplot(4,1,1)
pos_z = -logsout{5}.Values.Data(:,3);
time_real = time_real(1:length(pos_z)); %%

plot(time_real, pos_z)
ylabel('z [m]');
xline(1.56, ':', 'HandleVisibility','off')
xline(1.66, ':', 'HandleVisibility','off')
ylim([0 3]);

subplot(4,1,2)
phi = logsout{3}.Values.Data(:,1);
plot(time_real, phi*180/pi)
ylim([0 90]);
yticks([0 30 60 90]);
ylabel('\phi [deg]')
xline(1.56, ':', 'HandleVisibility','off')
xline(1.66, ':', 'HandleVisibility','off')

subplot(4,1,3)
theta = logsout{3}.Values.Data(:,2);
plot(time_real, theta*180/pi)
ylim([0 90]);
yticks([0 30 60 90]);
ylabel('\theta [deg]');
xline(1.56, ':', 'HandleVisibility','off')
xline(1.66, ':', 'HandleVisibility','off')

% subplot(4,1,4)
% psi = logsout{3}.Values.Data(:,3);
% plot(time_real, psi*2*pi)
% xlabel('t [s]');
% ylabel('\psi [deg]');

r = logsout{1}.Values.omega.Data(:,3);
subplot(4,1,4)
plot(time_real, r*180/pi)
xlabel('t [s]');
ylabel('r [deg/s]');
% ylim([-35  5])

xline(1.56, ':', '$t_\mathrm{fail}$', ...
    'HandleVisibility','off', ... % hide from legend
    'LabelHorizontalAlignment', 'left', ...
    'LabelVerticalAlignment', 'bottom', ...
    'Interpreter', 'latex');


xline(1.66, ':', '$t_d$', ...
    'HandleVisibility','off', ... % hide from legend
    'LabelHorizontalAlignment', 'right', ...
    'LabelVerticalAlignment', 'bottom', ...
    'Interpreter', 'latex');

saveas(gcf, pdf_export, 'epsc')

