function [x,y_state,iter,optimal,y] = QP_activeSet(H,c,A,b,x0,maxItr)
% @ info: solve quadratic programming in the form of
%           min 0.5*x'Hx + c'x
%               st Ax <= b
% @ input: H: N*N; c: N*1; A: m*N; b: m*1 matrix
%          x0: initial guess, N*1
%          maxItr: maximum num of iteration
% @ output: x: optimized state
%           y_state: indicating if x is on the boundary (1) or not (0)
%           iter: num of iterations
%           optimal: convergent(1) or not (0)
%           y: cost function value
% This active set algorithm is developed based on the video
% https://www.youtube.com/watch?v=HLq151AhMMY (35:00)
% The constraint which is violated is added into the active set.
% TODO: add addition stopping criteria using output J.

n = size(H,1);
m = length(b);

% calculate the initial active set
constraint = A*x0 - b;
y_state = zeros(1,m);
y_state(constraint>=0) = 1;

% iteration
iter = 0;
x = x0;
optimal = 0;

for k = 1:maxItr
    x_k = x;
    iter = iter+1;
    indices = [(y_state == 1)];
    A_eq = A(indices,:);
    b_eq = b(indices,:);
    if isempty(A_eq)
        l1=[0,0];
        l2=[0,0];
    else
        l1=size(A_eq');
        l2=size(A_eq);
    end     
    
    % solve the QP-SUB to get d_k, the searching direction
    g_k = H*x_k + c;

    D = [H,A_eq';A_eq,zeros(l2(1),l1(2))];
    d_d = [-g_k;zeros(size(A_eq,1),1)];

%     if min(abs(eig(D)))<1e-8
%         d_xy = pinv(D)*d_d;
%     else
        d_xy = D\d_d;
%     end
    d_k = d_xy(1:n);
    
    if norm(d_k) < 1e-6
        % if searching distance is zero, check co-state to determine if
        % eliminate the corresponding constraint from the active set. Or check the constraint
        % to determine if add the corresponding constraint into the active
        % set.
%         if min(abs(eig(D)))<1e-8
%             xy = pinv(D)*[-c;b_eq];
%         else
            xy = D\[-c;b_eq];
%         end
        x = xy(1:n);
        y = xy(n+1:length(xy));
        
        constraint = A*x - b;
        constraintOK = (max(constraint) <= 0.0001);
        yMultipOK = (isempty(y) || min(y) >= -0.0001);

        if constraintOK && yMultipOK
            % all co-state are possitive, prolem solved
            optimal = 1;
            y = 0.5*x'*H*x + c'*x;
            return;
        else
            if isempty(y) || min(y) >= -0.0001
                [~,p] = max(constraint);
                y_state(p) = 1;
            else
                % the q_th constraint need to be eliminated
                [~,q] = min(y);
                tmp = 0;
                for i = 1:length(y_state)
                    tmp = tmp+y_state(i);
                    if tmp == q
                        y_state(i) = 0;
                    end
                end
            end
        end
    else
        % if searching distance d_k is non-zero, calculate the next step
        tmp = inf;
        p = 1;
        % determine if the next step is inside the permitted set.
        
        for i = 1:size(A,1)
           if A(i,:)*d_k > 0.0001
              dis = (b(i)-A(i,:)*x_k)/(A(i,:)*d_k);
              if dis < tmp
                  tmp = dis;
                  p = i;
              end
           end
        end     
        a_k = min(tmp,1);
        x = x_k + a_k * d_k;
        if tmp < 1
            % x is falling on the p_th constraint which need to be active
            % for the next iteration.
            y_state(p) = 1;
        end        
    end
end
y = 0;
end