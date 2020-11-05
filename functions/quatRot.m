function r = quatRot(q, vector)

qconj = [ q(:,1)  -q(:,2:4) ];

dummy = HProduct(HProduct(q,[0,vector]),qconj);
r = dummy(2:4);

end

function qout = HProduct(v1,v2)

% Calculate vector portion of quaternion product
% vec = s1*v2 + s2*v1 + cross(v1,v2)
vec = [v1(:,1).*v2(:,2) v1(:,1).*v2(:,3) v1(:,1).*v2(:,4)] + ...
         [v2(:,1).*v1(:,2) v2(:,1).*v1(:,3) v2(:,1).*v1(:,4)]+...
         [ v1(:,3).*v2(:,4)-v1(:,4).*v2(:,3) ...
           v1(:,4).*v2(:,2)-v1(:,2).*v2(:,4) ...
           v1(:,2).*v2(:,3)-v1(:,3).*v2(:,2)];

% Calculate scalar portion of quaternion product
% scalar = s1*s2 - dot(v1,v2)
scalar = v1(:,1).*v2(:,1) - v1(:,2).*v2(:,2) - ...
             v1(:,3).*v2(:,3) - v1(:,4).*v2(:,4);
    
qout = [scalar  vec];

end