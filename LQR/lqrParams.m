% set Q R values for LQR and calculate lqr gains

par.lqr.R_xy_uv = par.R_xy_uv;
par.lqr.Iu = sqrt(par.Ix^2 + par.Iy^2);
par.lqr.Iv = sqrt(par.Ix^2 + par.Iy^2);
par.lqr.s  = sqrt(par.l^2 + par.b^2);

par.lqr.Q = diag([0, 0, 10, 10, 0.0, 0.0]); 
par.lqr.R = eye(2);

par.lqr.K_lqr0 = calc_lqr(par,0,0);
par.lqr.K_lqr1 = calc_lqr(par,1,0);
par.lqr.K_lqr2 = calc_lqr(par,2,0);
par.lqr.K_lqr3 = calc_lqr(par,3,0);
par.lqr.K_lqr4 = calc_lqr(par,4,0);
par.lqr.K_lqr13 = calc_lqr(par,1,1);
par.lqr.K_lqr24 = calc_lqr(par,2,1);