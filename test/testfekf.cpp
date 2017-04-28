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