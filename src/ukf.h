#ifndef UKF_H
#define UKF_H

#include "Eigen/Dense"
#include "measurement_package.h"

class UKF
{
public:
  UKF();
  virtual ~UKF();
  void ProcessMeasurement(MeasurementPackage meas_package);
  void Prediction(double delta_t);
  void UpdateLidar(MeasurementPackage meas_package);
  void UpdateRadar(MeasurementPackage meas_package);

  bool is_initialized_;
  bool use_laser_;
  bool use_radar_;
  int n_x_;
  int n_aug_;
  double std_a_;
  double std_yawdd_;
  double std_laspx_;
  double std_laspy_;
  double std_radr_;
  double std_radphi_;
  double std_radrd_;
  double lambda_;
  double NIS_radar_;
  double NIS_laser_;
  long long time_us_;
  Eigen::VectorXd x_;
  Eigen::MatrixXd P_;
  Eigen::MatrixXd Xsig_pred_;
  Eigen::VectorXd weights_;
};

#endif // UKF_H
