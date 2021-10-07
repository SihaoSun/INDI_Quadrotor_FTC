%%
% This is a mess, TODO:
% - cleanup

clear vars

script_dir = fileparts(mfilename('fullpath'));

generated_dir = mkAddGeneratedDir(script_dir);

syms G w

syms G_Omega G_k G_unit

syms G_dp G_dq G_dr G_dVz
syms k_1 k_2 k_3 k_4

% Rotational and z-acceleration, rows
G = [G_dp G_dq G_dr G_dVz];
A_dOmegaVz = diag(G);

% Actuators, columns
A_k = diag([k_1 k_2 k_3 k_4]);

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

% dOmegaVz_w = A_dOmegaVz*A_dOmegaVz_unit*A_k

syms w_1 w_2 w_3 w_4 real
w = [w_1 w_2 w_3 w_4]';

syms dw_1 dw_2 dw_3 dw_4 real
dw = [dw_1 dw_2 dw_3 dw_4]';

syms dp dq dr a_z real
dOmegaVz = [dp dq dr a_z]';
dOmegaVz_eq = dOmegaVz == A_dOmegaVz*A_dOmegaVz_unit*A_k*w.^2
% 
% matlabFunction(rhs(dOmegaVz_eq), 'file', strcat(generated_dir, '/', 'dOmegaVz_fun'), 'Vars', {diag(A_dOmegaVz), diag(A_k), w});


% b = (A_dOmegaVz*A_dOmegaVz_unit)\dOmegaVz

% A = diag(w.^2)

A = diag([w.^2, w_dot])


b = [[A_dOmegaVz*A_dOmegaVz_unit] ...
    [G_dr*G2_unit]]

% \dOmegaVz;


y = [[A_dOmegaVz*A_dOmegaVz_unit*A_k] ...
    [G_dr*A_dOmegaVz_dunit*A_k]];

y_eq = dOmegaVz == y*[w.^2; w_dot]
y_eq = y_eq([1 2 4])
% y_eq(4) = 4 == sum(K_vec)
y_eq(4) = k_1 > 0
y_eq(5) = k_2 > 0
y_eq(6) = k_3 > 0
y_eq(7) = k_4 > 0

% K_vec = diag(A_k);

% K_cell = cell(size(K_vec));

% [K_cell{:}] = solve(y_eq , K_vec)

% K_fun = cell2sym(K_cell)
% K_fun = subs(K_fun, 'x', 0)
% % K_fun = solve(y_eq, K_vec)

% % K
% % K_fun = pinv(A)*b

% matlabFunction(K_fun, 'file', strcat(generated_dir, '/', 'K_fun'), 'Vars', {dOmegaVz, diag(A_dOmegaVz), w, w_dot});


b = dOmegaVz
A_star = A_dOmegaVz_unit*A_k*w

% eq_k = (G_Omega*G_unit)\dOmegaVz == G_k*w

% https://nl.mathworks.com/help/symbolic/equationstomatrix.html
% [A,b] = equationsToMatrix(dOmegaVz_eq, w)
% 
% % G_Omega
% G_dOmegaVz_fun = A\b
% 
% matlabFunction(G_dOmegaVz_fun, 'file',  strcat(generated_dir, '/', 'G_Omega_fun'), 'Vars', {dOmegaVz, diag(A_k), w});


%% For k-scaling factor estimator
sym G_dr

regressor_fun = A_dOmegaVz*A_dOmegaVz_unit*diag(w.^2) ...
    + G_dr*A_dOmegaVz_dunit*diag(dw);

reduced_rows = [1 2 4];
regressor_fun_reduced = regressor_fun(reduced_rows,:);

% K_matrix = A_dOmegaVz*A_dOmegaVz_unit.*w.^2;
% K_matrix_in = inv(K_matrix)


G_reduced = G(reduced_rows).';

regressor_vars = {G_reduced, [w; dw]};

matlabFunction(regressor_fun_reduced, 'file',  strcat(generated_dir, '/', 'regressor_fun'), 'Vars', regressor_vars);
