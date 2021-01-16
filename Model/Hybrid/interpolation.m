function [Cx,Cy,Cm,Cla] = interpolation(alpha,flag)

persistent alpha_front  alpha_back Cx_front Cy_front Cm_front...
            Cx_back Cy_back Cm_back cla_front;

if isempty(alpha_front)
    data_front = load('front_coeff');
    data_back = load('back_coeff');
    alpha_front = data_front.alpha_front;
    alpha_back = data_back.alpha_back;
    Cx_front = data_front.cx_front;
    Cy_front = data_front.cy_front;
    Cm_front = data_front.cm_front;
    cla_front = data_front.cla_front;
    Cx_back = data_back.cx_back;
    Cy_back = data_back.cy_back;
    Cm_back = data_back.cm_back;
%     cla_back = data_back.cla_back;
end

% simply hedge alpha within [-15,15] deg.
alpha = max(min(alpha,15/57.3),-15/57.3);

if flag == 1
    Cx = interp1(alpha_front, Cx_front, alpha*57.3,'linear','extrap');
    Cy = interp1(alpha_front, Cy_front, alpha*57.3,'linear','extrap');
    Cm = interp1(alpha_front, Cm_front, alpha*57.3,'linear','extrap');
    Cla = cla_front*0.3;
else
    Cx = interp1(alpha_back, Cx_back, alpha*57.3,'linear','extrap');
    Cy = interp1(alpha_back, Cy_back, alpha*57.3,'linear','extrap');
    Cm = interp1(alpha_back, Cm_back, alpha*57.3,'linear','extrap');
    Cla = 0; % assume aileron deflection has no effect when fly backwards.
end
end