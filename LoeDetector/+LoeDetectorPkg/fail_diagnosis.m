function [fail_P, fail_id_out] = fail_diagnosis(K_means, K_covs, params)
%FAIL_DETECT
    
K_threshold = params.fdd_k_thres;
K_prob_threshold = params.fdd_fail_p_thres;

nK = length(K_means);

fail_P = zeros(nK, 1);
ok_P = zeros(nK, 1);

persistent fail_id
if isempty(fail_id)
    fail_id = 0;
end

for i = 1:nK
    K_mean = K_means(i);
    K_cov = K_covs(i);
    
    sigma = sqrt(abs(K_cov));
    
    % Calc failure probability
    fail_P(i) = normcdf(K_threshold, K_mean, sigma);
    ok_P(i) = 1 - normcdf(K_threshold, K_mean, sigma);

end

[~, max_fail_indices] = max(fail_P);

if (fail_id == 0 || fail_P(fail_id) < fail_P(max_fail_indices)) ...
        && fail_P(max_fail_indices) > K_prob_threshold
    fail_id = max_fail_indices(1);
elseif fail_id ~= 0 && ok_P(fail_id) > 0.90
    fail_id = 0;
end

fail_id_out = int32(fail_id);
