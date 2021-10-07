function regressor_fun_reduced = regressor_fun(in1,in2)
%REGRESSOR_FUN
%    REGRESSOR_FUN_REDUCED = REGRESSOR_FUN(IN1,IN2)

%    This function was generated by the Symbolic Math Toolbox version 8.7.
%    07-Oct-2021 16:33:56

G_dp = in1(1,:);
G_dq = in1(2,:);
G_dVz = in1(3,:);
w_1 = in2(1,:);
w_2 = in2(2,:);
w_3 = in2(3,:);
w_4 = in2(4,:);
t2 = w_1.^2;
t3 = w_2.^2;
t4 = w_3.^2;
t5 = w_4.^2;
regressor_fun_reduced = reshape([(G_dp.*t2)./1.0e+6,(G_dq.*t2)./1.0e+6,G_dVz.*t2.*(-1.0e-6),G_dp.*t3.*(-1.0e-6),(G_dq.*t3)./1.0e+6,G_dVz.*t3.*(-1.0e-6),G_dp.*t4.*(-1.0e-6),G_dq.*t4.*(-1.0e-6),G_dVz.*t4.*(-1.0e-6),(G_dp.*t5)./1.0e+6,G_dq.*t5.*(-1.0e-6),G_dVz.*t5.*(-1.0e-6)],[3,4]);
