clear loeDetectorParams LoeDetectorParams

LoeDetectorPkg.init

loeDetectorParams.fdd_k_thres = 0.5;
loeDetectorParams.fdd_fail_p_thres = 0.9;
loeDetectorParams.fdd_on = 1;

%% Create 'RateControlParams' bus. Variables can be set externally in C++.
% https://mathworks.com/help/simulink/examples/migration-to-structure-parameters.html
% https://mathworks.com/help/simulink/ug/using-structure-parameters.html#bvmii1s
LoeDetectorParams = Simulink.Parameter(loeDetectorParams);

Simulink.Bus.createObject(LoeDetectorParams.Value);
LoeDetectorParamsType = slBus1; clearvars slBus1

LoeDetectorParams.DataType = 'Bus: LoeDetectorParamsType';
LoeDetectorParams.StorageClass = 'ExportedGlobal';