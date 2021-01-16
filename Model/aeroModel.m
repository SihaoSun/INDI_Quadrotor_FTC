function FM = aeroModel(simBusIn, wRotor_dot, wRotor, wind, simVars)

%% Calculate some other vars
M_gyro = simVars.drone.signr*(simVars.drone.Ip*[0 0 wRotor_dot(1)]'+ simVars.drone.Ip*[0 0 -wRotor_dot(2)]'+ simVars.drone.Ip*[0 0 wRotor_dot(3)]'+ simVars.drone.Ip*[0 0 -wRotor_dot(4)]'...
         + cross(simBusIn.omegaB',simVars.drone.Ip*[0 0 wRotor(1)]'+simVars.drone.Ip*[0 0 -wRotor(2)]'+simVars.drone.Ip*[0 0 wRotor(3)]'+simVars.drone.Ip*[0 0 -wRotor(4)]'));

MxGyro = M_gyro(1); MyGyro = M_gyro(2); MzGyro = M_gyro(3);

%% Calculate forces and moments
if simVars.aeroModel == 0 % basically no aero model
    [Fx,Fy,Fz,Mx,My,Mz] = simpleAeroModel(wRotor,simBusIn,simVars);
    Fwx = 0; Fwy = 0; Fwz = 0; Mwx = 0; Mwy = 0; Mwz = 0;
elseif simVars.aeroModel == 1
    [Fx,Fy,Fz,Mx,My,Mz] = complex1AeroModel_dmgd(wRotor,simBusIn,wind,simVars);
    Fwx = 0; Fwy = 0; Fwz = 0; Mwx = 0; Mwy = 0; Mwz = 0;
elseif simVars.aeroModel == 2
    [Fx,Fy,Fz,Mx,My,Mz, Fwx, Fwy, Fwz, Mwx, Mwy, Mwz] = ...
        complex1AeroModel_dmgd_hybrid(wRotor,simBusIn,wind,simVars);
else
    Fx = 0; Fy = 0; Fz = 0;
    Mx = 0; My = 0; Mz = 0;
    Fwx = 0; Fwy = 0; Fwz = 0; Mwx = 0; Mwy = 0; Mwz = 0;
end

%% Put in bus
% All of these are in body frame
FM.Fx = Fx;
FM.Fy = Fy;
FM.Fz = Fz;
FM.Mx = Mx;
FM.My = My;
FM.Mz = Mz;
FM.MxGyro = MxGyro;
FM.MyGyro = MyGyro;
FM.MzGyro = MzGyro;
FM.Fwx = Fwx;
FM.Fwy = Fwy;
FM.Fwz = Fwz;
FM.Mwx = Mwx;
FM.Mwy = Mwy;
FM.Mwz = Mwz;
end
