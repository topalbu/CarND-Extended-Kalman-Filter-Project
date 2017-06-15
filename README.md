# Extended Kalman Filter Project Starter Code
Self-Driving Car Engineer Nanodegree Program

In this project utilize a kalman filter to estimate the state of a moving object of interest with noisy lidar and radar measurements. Passing the project requires obtaining RMSE values that are lower that the tolerance outlined in the project reburic. 

This project involves the Term 2 Simulator which can be downloaded [here](https://github.com/udacity/self-driving-car-sim/releases/tag/v1.0)

This repository includes two files that can be used to set up and intall [uWebSocketIO](https://github.com/uWebSockets/uWebSockets) for either Linux or Mac systems. For windows you can use either Docker, VMware, or even [Windows 10 Bash on Ubuntu](https://www.howtogeek.com/249966/how-to-install-and-use-the-linux-bash-shell-on-windows-10/) to install uWebSocketIO. 

Once the install for uWebSocketIO is complete, the main program can be built and ran by doing the following from the project top directory.

1. mkdir build
2. cd build
3. cmake ..
4. make
5. ./ExtendedKF

Note that the programs that need to be written to accomplish the project are src/FusionEKF.cpp, src/FusionEKF.h, kalman_filter.cpp, kalman_fitler.h, tools.cpp, and tools.h

The program main.cpp has already been filled out, but feel free to modify it.

Here is the main protcol that main.cpp uses for uWebSocketIO in communicating with the simulator.


INPUT: values provided by the simulator to the c++ program

["sensor_measurement"] => the measurment that the simulator observed (either lidar or radar)


OUTPUT: values provided by the c++ program to the simulator

["estimate_x"] <= kalman filter estimated position x
["estimate_y"] <= kalman filter estimated position y
["rmse_x"]
["rmse_y"]
["rmse_vx"]
["rmse_vy"]

---

## Other Important Dependencies

* cmake >= 3.5
 * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools]((https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)
  # Extended-Kalman-Filter


## Results

### DataSet 1 

| DataSet 1 - Radar       | RMSE                                                      |
| -------------------------- |:----------------------------------------------------------|
| ![radar1](Docs/radar1.png) | px=0.230186<br>py=0.346434<br>vx=0.5835<br>vy=0.80404  |

| DataSet 1 - Lidar       | RMSE                                                      |
| -------------------------- |:----------------------------------------------------------|
| ![lidar1](Docs/lidar1.png) | px=0.147296<br>py=0.115293<br>vx=0.638337<br>vy=0.534584|

| DataSet 1 - Fused       | RMSE                                                      |
| -------------------------- |:----------------------------------------------------------|
| ![radar_lidar1](Docs/radar_lidar1.png)     | px=0.0973178<br>py=0.0854597<br>vx=0.451267<br>vy=0.439935 |

### DataSet 2 

| DataSet 2 - Radar       | RMSE                                                      |
| -------------------------- |:----------------------------------------------------------|
| ![radar2](Docs/radar2.png) | px=0.268994<br>py=0.384461<br>vx=0.652845<br>vy=0.862943  |

| DataSet 2 - Lidar       | RMSE                                                      |
| -------------------------- |:----------------------------------------------------------|
| ![lidar2](Docs/lidar2.png) | px=0.117035<br>py=0.12619<br>vx=0.650128<br>vy=0.610791|

| DataSet 2 - Fused       | RMSE                                                      |
| -------------------------- |:----------------------------------------------------------|
| ![radar_lidar2](Docs/radar_lidar2.png)     | px=0.0726207<br>py=0.096663<br>vx=0.457881<br>vy=0.496596 |