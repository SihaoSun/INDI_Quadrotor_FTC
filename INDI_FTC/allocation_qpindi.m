function [U, Y, dU, optimal]  =  allocation_qpindi(state, nu, ddY, h0, zdd, U0, rdot, par)

persistent dU_last; if isempty(dU_last); dU_last = [0,0,0,0]'; end

%% Solve the QR problem
fail_flag = state.fail_id;

F_prev = U0 * par.k0;
FMax = ones(4,1) * par.w_max^2 * par.k0;
FMin = ones(4,1) * par.w_min^2 * par.k0;
if fail_flag > 0
    FMax(fail_flag) = FMin(fail_flag);
end

dFMax = FMax - F_prev;
dFMin = FMin - F_prev;

refStruct.nuz = nu(1) - zdd;
refStruct.nu1 = nu(2) - ddY(1);
refStruct.nu2 = nu(3) - ddY(2);
refStruct.nur = nu(4) - rdot;

[x,~,~,optimal] = controlAllocQPpredictor(refStruct, state, dFMax, dFMin, h0, par);

if optimal % if the solution did not converge, use previous solution
    dU = x / par.k0;
else
    dU = dU_last * 0.99;
end
dU_last = dU;

U = U0 + dU;

dU = dU * par.k0;
% Y = [zdd, ddY(1), ddY(2), rdot]';
Y = [dFMax, dFMin];
%%
if fail_flag > 0
    U(fail_flag) = 0;
end

end
