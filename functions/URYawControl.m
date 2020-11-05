function [r_cmd] = URYawControl(inputs, state, par)

psiError = inputs.yawTarget - state.att(3);
psi_dot_cmd = psiError*par.YRC_Kp_psi;

r_cmd = psi_dot_cmd*cos(state.att(1))*cos(state.att(2))-sin(state.att(1))*state.omegaf(2);

end