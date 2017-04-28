#include "gmock/gmock.h"
#include "Itools.h"


class MockEKF: public ITools
{
public:
    MOCK_METHOD2(CalculateRMSE, Eigen::VectorXd(const std::vector<Eigen::VectorXd> &estimations, const std::vector<Eigen::VectorXd> &ground_truth));
    MOCK_METHOD1(CalculateJacobian, Eigen::MatrixXd(const Eigen::VectorXd &x_state));
};
