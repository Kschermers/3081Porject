#include "src/love_behavior.h"
#include "src/wheel_velocity.h"
#include <gtest/gtest.h>

class LoveBehaviorTest : public ::testing::Test {
protected:
  virtual void SetUp() {

    love_ = new csci3081::LoveBehavior();
    default_velocity_ = new csci3081::WheelVelocity(0, 0);
  }

  virtual void TearDown() {
    delete love_;
    delete default_velocity_;
  }

  csci3081::LoveBehavior* love_;
  csci3081::WheelVelocity* default_velocity_;
};

TEST_F(LoveBehaviorTest, getWheelVelocity) {
  double rsr = 2.0;
  double lsr = 2.0;
  double speed = 1.0;

  csci3081::WheelVelocity* love_velocity_ = new csci3081::WheelVelocity(0, 0);
  love_->getWheelVelocity(rsr,lsr,speed,love_velocity_);
  default_velocity_ = new csci3081::WheelVelocity(1.0/lsr,1.0/rsr,speed);
  EXPECT_NEAR(love_velocity_->left,default_velocity_->left,.1);
  EXPECT_NEAR(love_velocity_->right,default_velocity_->right,.1);

  rsr = -2.0;
  lsr = -2.0;
  speed = 1.0;

  love_->getWheelVelocity(rsr,lsr,speed,love_velocity_);
  default_velocity_ = new csci3081::WheelVelocity(1.0/lsr,1.0/rsr,speed);
  EXPECT_NEAR(love_velocity_->left,default_velocity_->left,.1);
  EXPECT_NEAR(love_velocity_->right,default_velocity_->right,.1);

}
