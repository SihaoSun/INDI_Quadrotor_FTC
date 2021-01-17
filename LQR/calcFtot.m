function Ftot = calcFtot(state,Z_ref, Vz_ref, par)

    az_des = par.pos_z_p_gain * (Z_ref - state.pos(3)) ...
                + par.pos_z_d_gain * (Vz_ref - state.vel(3)) - par.g;
    
    Ftot = - az_des * par.mass / cos(state.att(1)) / cos(state.att(2));

end