classdef KalmanEstimator < BlocksPkg.Block
    %% Kalman estimator
    %
    % For reference see:
    % https://en.wikipedia.org/wiki/Kalman_filter#Details 
    % .., except:
    % - with identity system matrix
    % - with variable observation matrix/regressor
    % - with bounded state vector
    
    properties
        state
        P
        Q
        R
        state_bounds
    end
    
    methods
        function obj = KalmanEstimator(Q, R, ...
                n_states, n_meas, ...
                state0, P0, ...
                state_bounds)
            if length(Q) == 1
                obj.Q = diag(ones(1, n_states)*Q);
            else % TODO: add check
                obj.Q = diag(Q);
            end

            if length(R) == 1
                obj.R = diag(ones(1, n_meas)*R);
            else % TODO: add check
                obj.R = diag(R);
            end
        
            if length(state0) == 1
                obj.state = ones(n_states, 1)*state0;
            else % TODO: add check
                obj.state = state0;
            end
   
            if length(P0) == 1
                obj.P = diag(ones(1, n_states)*P0);
            else % TODO: add check
                obj.P = diag(P0);
            end
            
            obj.state_bounds = state_bounds;
        end
        
        function [state, P] = step(obj, z, obs_matrix)
            % P(k+1|k) (prediction covariance matrix)
            n_states = length(obj.Q);
            P_k1k = eye(n_states)*obj.P*eye(n_states) + obj.Q;
            
            % Innovation or measurement pre-fit residual (prediction)
            y = z - obs_matrix*obj.state;
      
            % Innovation covariance (S_k)
            S = obj.R + obs_matrix*P_k1k*obs_matrix';
            
            % K(k+1) (gain)
            K = P_k1k*obs_matrix'/S;
            
            % Calculate optimal state x(k+1|k+1)
            obj.state = obj.state + K * y;

            if isvector(obj.state_bounds)
                % Apply constraints to state
                lower = obj.state_bounds(1);
                upper = obj.state_bounds(2);
                obj.state(obj.state < lower) = lower;
                obj.state(obj.state > upper) = upper;
            end
            
            %
            obj.P = ( eye(n_states) - K*obs_matrix )*P_k1k;
            
            state = obj.state;
            P = obj.P;
        end
        
        function [state, P] = get_state(obj)
            state = obj.state;
            P = obj.P;
        end
    end
end

