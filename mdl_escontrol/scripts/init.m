% Instructions:
% 1. Uncomment required section and run script
% 2. Use Data Inspector to analyse results

% Notes:
% Model was largely tested with DT ESC. If CT ESC is selected, the rate
% transition blocks in the model must be removed.

% References:
% https://www.mathworks.com/help/slcontrol/ug/extremum-seeking-control.html

% Simulation
% Simulation time
Tsim = 10;

% Sampling interval
Ts = 0.02; % Parameter is stored in reference subsystem data dictionary

%% Controller 1 %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% Forcing frequency
T = 10*Ts; % s
w = 2*pi*(1/T);

%% Demodulation
% Modulation signal 
a = 1; % amplitude
phi1 = 0*pi/2; % phase [-pi/2, +pi/2]
% high pass filter 
enable_hpf = 0;
w_hpf = 0.01*w; % rad/s

%% Parameter update
% Learning rate
k = 10; 
% low pass filter cut-off frequency 
enable_lpf = 0;
w_lpf = 0.01*w;
% Initial guess of theta
theta0 = 1;

%% Modulation
% Demodulation signal amplitude
b = 0.1*a; % amplitude
phi2 = 0; % phase [0]

%% Saturation
theta_tol = 0.05;
theta_max = 10000;
theta_min = -theta_max;

%% Controller 2 %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Forcing frequency
T_2 = 15*Ts; % s
w_2 = 2*pi*(1/T_2);

%% Demodulation
% Modulation signal 
a_2 = 1; % amplitude
phi1_2 = 0*pi/2; % phase [-pi/2, +pi/2]
% high pass filter 
enable_hpf_2 = 0;
w_hpf_2 = 0.01*w_2; % rad/s

%% Parameter update
% Learning rate
k_2 = 10; 
% low pass filter cut-off frequency 
enable_lpf_2 = 0;
w_lpf_2 = 0.01*w_2;
% Initial guess of theta
theta0_2 = 1;

%% Modulation       
% Demodulation signal amplitude
b_2 = 0.1*a_2; % amplitude
phi2_2 = 0; % phase [0]

%% Saturation
theta_tol_2 = 0.05;
theta_max_2 = 10000;
theta_min_2 = -theta_max_2;

%% Run model
% Run model
% sim("escontrol_harness.slx");

% slbuild('escontrol','ForceTopModelBuild',true);
% rtwbuild('escontrol');
