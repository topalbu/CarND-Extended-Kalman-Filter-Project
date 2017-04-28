#ifndef TOOLS_H_
#define TOOLS_H_
#include <vector>
#include "Eigen/Dense"
#include "Itools.h"

class Tools: public ITools{
public:
  /**
  * Constructor.
  */
  Tools();

  /**
  * Destructor.
  */
  virtual ~Tools();
  /**
  * A helper method to calculate RMSE.
  */
  virtual Eigen::VectorXd CalculateRMSE(const std::vector<Eigen::VectorXd> &estimations, const std::vector<Eigen::VectorXd> &ground_truth);

  /**
  * A helper method to calculate Jacobians.
  */
  virtual Eigen::MatrixXd CalculateJacobian(const Eigen::VectorXd &x_state);


};

#endif /* TOOLS_H_ */
