clear vars

%% Second order filter
Wn = 50;
dzeta = 0.55;
Ts = 1/500;

secondOrderFilter = tf([Wn^2], [1 2*dzeta*Wn Wn^2]);
secondOrderFilter_d = c2d(secondOrderFilter, Ts);
sys = ss(secondOrderFilter_d);

% This looks redundant at first look,
% but assigning these matrices explicitly saves tons of computations
loe_detector_filter_sys.A = sys.A;
loe_detector_filter_sys.B = sys.B;
loe_detector_filter_sys.C = sys.C;
loe_detector_filter_sys.D = sys.D;


%% Generate control effectiveness model
script_dir = fileparts(mfilename('fullpath'));

generated_dir = LoeDetectorPkg.mkAddGeneratedDir(script_dir);

syms G w

syms G_Omega G_k G_unit

syms G_dp G_dq G_dr G_dVz
syms k_1 k_2 k_3 k_4

% Rotational and z-acceleration, rows
G = [G_dp G_dq G_dr G_dVz];

A_dOmegaVz_unit = [
    1 -1 -1 1;
    1 1 -1 -1;
    1 -1 1 -1;
    -1 -1 -1 -1;
    ]./1e6;

A_dOmegaVz_dunit = [
    0 0 0 0;
    0 0 0 0;
    1 -1 1 -1;
    0 0 0 0;
]./1e3;

syms w_1 w_2 w_3 w_4 real
w = [w_1 w_2 w_3 w_4]';

syms dw_1 dw_2 dw_3 dw_4 real
dw = [dw_1 dw_2 dw_3 dw_4]';


%% For k-scaling factor estimator
sym G_dr;

regressor_fun = diag(G)*A_dOmegaVz_unit*diag(w.^2) ...
    + G_dr*A_dOmegaVz_dunit*diag(dw);

reduced_rows = [1 2 4];
regressor_fun_reduced = regressor_fun(reduced_rows,:);

G_reduced = G(reduced_rows).';

regressor_vars = {G_reduced, [w; dw]};

matlabFunction(regressor_fun_reduced, 'file',  strcat(generated_dir, '/', 'regressor_fun'), 'Vars', regressor_vars);
