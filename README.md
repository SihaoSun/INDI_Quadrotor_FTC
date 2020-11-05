# INDI_Quadrotor_FTC
This is a minimal repository containing the Matlab / Simulink file, to simulate a quadrotor subjected to single / double rotor failures, using the incremental-nonlinear-dynamic-inversion controller proposed in

```
@ARTICLE{SunDRF2020,
  author={S. {Sun} and X. {Wang} and Q. {Chu} and C. d. {Visser}},
  journal={IEEE Transactions on Robotics}, 
  title={Incremental Nonlinear Fault-Tolerant Control of a Quadrotor With Complete Loss of Two Opposing Rotors}, 
  year={2020},
  volume={},
  number={},
  pages={1-15},
  doi={10.1109/TRO.2020.3010626}}
```
If you use this code in an academic context, please use the above citation.


## File structure
run.m script is the branch to run the simulation, after loading necessary simulation and control parameters defined in simParams.m & controlParams.m respectively. The high-level simulation archetecture is given in frame.slx file, where one can design the position + yaw command. The flight controller is given in controls.slx, and the 6Dof simulator is given in droneSim.slx file. visualize.slx contains the visualization block. 

## How to test and compare with the INDI approach?
The innovation of this research, is to solve quadrotor fault-tolerant control problem using the Incremental-Nonlinear-Dynamic-Inversion (INDI) method. One can simply test it by directly running the simulation (run run.m file). 

### Change failuire type
In controlParams.m file, one can select swtching off which one or two propellers by changing par.fail_id. If par.DRF_enable is set as 1, then both the rotor of the given index and the rotor on its opposite side are switched off. 

### Change initial condition
Initial condition can be changed in the simParams.m file.

### Change input command
Input command can be designed in the frame.slx file.

### Test your own controller
To test your own controller with the given simulation, simply replace the content in controls.slx.

# Tested environment
Matlab / Simulink 2020a
