# SFND P5: Unscented Kalman Filter

An implementation of [Unscented Kalman Filter](https://en.wikipedia.org/wiki/Kalman_filter) to estimate the state of multiple cars on a highway using noisy lidar and radar measurements. The [RMSE](https://en.wikipedia.org/wiki/Root-mean-square_deviation) values should be lower that the tolerance outlined in the project rubric in order to pass.

## Demo
![Demo](samples/output.gif)

## How to run
The main program can be built and ran by doing the following commands from the root of the repo.

1. mkdir build
2. cd build
3. cmake ..
4. make
5. ./ukf_highway
