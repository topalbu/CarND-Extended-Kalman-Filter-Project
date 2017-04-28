#ifndef ITOOLS_H_
#define ITOOLS_H_
#include <vector>
#include "Eigen/Dense"

class ITools {
public:

  /**
  * A helper method to calculate RMSE.
  */
  virtual Eigen::VectorXd CalculateRMSE(const std::vector<Eigen::VectorXd> &estimations, const std::vector<Eigen::VectorXd> &ground_truth) = 0;

  /**
  * A helper method to calculate Jacobians.
  */
  virtual Eigen::MatrixXd CalculateJacobian(const Eigen::VectorXd &x_state) = 0;

};

#endif /* ITOOLS_H_ */
