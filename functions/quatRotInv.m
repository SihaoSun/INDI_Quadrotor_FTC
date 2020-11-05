function r = quatRotInv(q, vector)

qInv = [ q(:,1)  -q(:,2:4) ];

r = quatRot(qInv, vector);

end