#include <iostream>
#include "tools.h"

using Eigen::VectorXd;
using Eigen::MatrixXd;
using std::vector;
using namespace std;
Tools::Tools() {}

Tools::~Tools() {}

//! Calculate the root mean square error
/*!
   \param estimations estimated state in 4-d vector of type VectorXd
   \param ground_truth actual state in 4-d vector of type VectorXd
   \return rmse in 4-d vector of type VectorXd
*/
VectorXd Tools::CalculateRMSE(const vector<VectorXd> &estimations,
                              const vector<VectorXd> &ground_truth) {
  /**
  TODO:
    * Calculate the RMSE here.
  */

    VectorXd rmse(4);
    rmse << 0,0,0,0;

    // check the validity of the following inputs:
    //  * the estimation vector size should not be zero
    //  * the estimation vector size should equal ground truth vector size
    if(estimations.size() != ground_truth.size()
       || estimations.empty()){
        cout << "Invalid estimation or ground_truth data" << endl;
        return rmse;
    }

    //accumulate squared residuals
    for(unsigned int i=0; i < estimations.size(); ++i){

        VectorXd residual = estimations[i] - ground_truth[i];

        //coefficient-wise multiplication
        residual = residual.array()*residual.array();
        rmse += residual;
    }

    //calculate the mean
    rmse = rmse/estimations.size();

    //calculate the squared root
    rmse = rmse.array().sqrt();

    //return the result
    return rmse;
}

MatrixXd Tools::CalculateJacobian(const VectorXd& x_state) {
  /**
  TODO:
    * Calculate a Jacobian here.
  */
}
