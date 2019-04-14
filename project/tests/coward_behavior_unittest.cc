#include "src/coward_behavior.h"
#include "src/wheel_velocity.h"
#include <gtest/gtest.h>

class CowardBehaviorTest : public ::testing::Test {
protected:
  virtual void SetUp() {

    coward_ = new csci3081::CowardBehavior();
    default_velocity_ = new csci3081::WheelVelocity(0, 0);
  }

  virtual void TearDown() {
    delete coward_;
    delete default_velocity_;
  }

  csci3081::CowardBehavior* coward_;
  csci3081::WheelVelocity* default_velocity_;
};

TEST_F(CowardBehaviorTest, getWheelVelocity) {
  double rsr = 2.0;
  double lsr = 2.0;
  double speed = 1.0;

  csci3081::WheelVelocity* coward_velocity_ = new csci3081::WheelVelocity(0, 0);
  coward_->getWheelVelocity(rsr,lsr,speed,coward_velocity_);
  default_velocity_ = new csci3081::WheelVelocity(lsr,rsr,speed);
  EXPECT_NEAR(coward_velocity_->left,default_velocity_->left,.1);
  EXPECT_NEAR(coward_velocity_->right,default_velocity_->right,.1);

  rsr = -2.0;
  lsr = -2.0;
  speed = 1.0;

  coward_->getWheelVelocity(rsr,lsr,speed,coward_velocity_);
  default_velocity_ = new csci3081::WheelVelocity(lsr,rsr,speed);
  EXPECT_NEAR(coward_velocity_->left,default_velocity_->left,.1);
  EXPECT_NEAR(coward_velocity_->right,default_velocity_->right,.1);

}
