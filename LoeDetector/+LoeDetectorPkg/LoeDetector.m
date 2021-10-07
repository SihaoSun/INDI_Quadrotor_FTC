classdef LoeDetector < BlocksPkg.Block
    %% LOEDETECTOR
    % Loss of effectiveness detector block
    
    properties
        FilterRatesMeas
        FilterAccMeas
        FilterActuatorMeas
        DerivRates
        Kalman
        n_rates
        control_eff
        fail_diagnosis_params
    end
    
    methods
        function obj = LoeDetector(loe_detector_filter_sys, ...
                Ts, ...
                n_imu_meas, n_act, n_rates, ...
                Q, R, control_eff, ...
                fail_diagnosis_params)
            obj.FilterRatesMeas = BlocksPkg.SecondOrderFilter(loe_detector_filter_sys, n_rates);
            obj.FilterAccMeas = BlocksPkg.SecondOrderFilter(loe_detector_filter_sys, 1);
            obj.FilterActuatorMeas = BlocksPkg.SecondOrderFilter(loe_detector_filter_sys, n_act);
            obj.DerivRates = BlocksPkg.Derivative(Ts, n_rates);
            obj.Kalman = BlocksPkg.KalmanEstimator(Q, R, ... 
                n_act, n_imu_meas, ...
                1, 3, ...
                [0 1.5]);
            obj.n_rates = n_rates;
            obj.control_eff = control_eff;
            obj.fail_diagnosis_params = fail_diagnosis_params;
        end
        
        function [fail_id, log] = step(obj, ...
                rates_meas, acc_meas, act_meas, ...
                landed)
            %% Update LOE detector
            %
            % Inputs:
            %   rates_meas  rotational rates        [rad/s]     (n_rates x 1)
            %   acc_meas    proper acceleration     [m/s^2]     (1 x 1)
            %   act_meas 	motor speed             [rad/s]     (n_act x 1)
            %
            % Outputs:
            %   fail_id     failed actuator id      [int]       (1 x 1)
            
            % LP-filter angular rates, z-acceleration and actuator
            % measurements. Only the angular rates will be differentiated
            % so those *need* to be filtered.
            rates_meas_f = obj.FilterRatesMeas.step(rates_meas)';
            acc_meas_f = obj.FilterAccMeas.step(acc_meas)';
            
            % The z-acceleration and actuator measurements are filtered to
            % keep them in sync with the rates.
            act_meas_f = obj.FilterActuatorMeas.step(act_meas)';
            
            % Differentiate rates only
            rates_f_dot = obj.DerivRates.step(rates_meas_f);
            
            % Concat angular and linear acceleration vectors,
            % this is the measurement vector for the Kalman estimator.
            % Ignore yaw, TODO: configurable
            z = [rates_f_dot([1 2]); acc_meas_f];
            
            u = act_meas_f;
            
            % Assigning some vars to log struct
            log.rates_meas = rates_meas;
            log.acc_meas = acc_meas;

            log.rates_f_dot = rates_f_dot;
            log.acc_meas_f = acc_meas_f;
            
            log.z = z;
            log.u = u;
            
            % Calculate observation matrix for the estimator. This matrix
            % depends on the control effectiveness and actuator
            % measurements.
            % The `regressor_fun` is generated in `gen_models.m`
            % h(u)
            obs_matrix = regressor_fun(obj.control_eff, act_meas_f);
            
            % Only update Kalman estimator if not landed.
            % Note we still update the filters/derivatives above.
            if landed
                [scaling_factor_mean, P_matrix] = obj.Kalman.get_state();
            else
                [scaling_factor_mean, P_matrix] = obj.Kalman.step(z, obs_matrix);
            end
            
            % The diagonal of the P_matrix are the covariances (TODO:
            % check)
            scaling_factor_cov = diag(P_matrix);
            
            log.scaling_factor_mean = scaling_factor_mean;
            log.scaling_factor_cov = scaling_factor_cov;
            
            % Do the failure diagnosis given the estimated scaling factor
            % means and covariances.
            [fail_P, fail_id] = LoeDetectorPkg.fail_diagnosis( ...
                scaling_factor_mean, ...
                scaling_factor_cov, ...
                obj.fail_diagnosis_params);
            
            log.fail_P = fail_P;
            log.fail_id = fail_id;
            
        end
    end
end

