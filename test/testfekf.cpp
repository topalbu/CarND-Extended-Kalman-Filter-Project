#include "tools.h"
#include "testekf.h"

using ::testing::Return;

EKFTest::EKFTest() {
    // Have qux return true by default
    //ON_CALL(m_ekf,qux()).WillByDefault(Return(true));
    // Have norf return false by default
    //ON_CALL(m_ekf,norf()).WillByDefault(Return(false));
}

EKFTest::~EKFTest() {};

void EKFTest::SetUp() {};

void EKFTest::TearDown() {};

/*
 * Test the CalculateJacobian Method
 * with the same values at the class
 */
TEST_F(EKFTest, CalculateJacobian) {
    Tools tool;
    Eigen::VectorXd x_predicted(4);
    x_predicted << 1, 2, 0.2, 0.4;

    Eigen::MatrixXd Hj(3,4);
    Hj<<0.447214,0.894427,0,0,
        -0.4,0.2,0,0,
        0,0,0.447214,0.894427;

    ASSERT_TRUE(Hj.isApprox(tool.CalculateJacobian(x_predicted),1e-04));
}

/*
 * Test the CalculateRMSE Method
 * with the same values at the class
 */
TEST_F(EKFTest, CalculateRMSE) {
    Tools tool;
    std::vector<Eigen::VectorXd> estimations;
    std::vector<Eigen::VectorXd> ground_truth;

    //the input list of estimations
    Eigen::VectorXd e(4);
    e << 1, 1, 0.2, 0.1;
    estimations.push_back(e);
    e << 2, 2, 0.3, 0.2;
    estimations.push_back(e);
    e << 3, 3, 0.4, 0.3;
    estimations.push_back(e);

    //the corresponding list of ground truth values
    Eigen::VectorXd g(4);
    g << 1.1, 1.1, 0.3, 0.2;
    ground_truth.push_back(g);
    g << 2.1, 2.1, 0.4, 0.3;
    ground_truth.push_back(g);
    g << 3.1, 3.1, 0.5, 0.4;
    ground_truth.push_back(g);

    Eigen::VectorXd rmse(4);
    rmse << 0.1,0.1,0.1,0.1;

    ASSERT_TRUE(rmse.isApprox(tool.CalculateRMSE(estimations,ground_truth),1e-04));
}

/*
TEST_F(FooTest, ByDefaultBazFalseIsFalse) {
    Foo foo(m_bar);
    EXPECT_EQ(foo.baz(false), false);
}

TEST_F(FooTest, SometimesBazFalseIsTrue) {
    Foo foo(m_bar);
    // Have norf return true for once
    EXPECT_CALL(m_bar,norf()).WillOnce(Return(true));
    EXPECT_EQ(foo.baz(false), true);
}

*/