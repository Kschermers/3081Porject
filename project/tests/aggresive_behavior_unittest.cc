#include "src/aggresive_behavior.h"
#include "src/wheel_velocity.h"
#include <gtest/gtest.h>

class AggresiveBehaviorTest : public ::testing::Test {
protected:
  virtual void SetUp() {

    aggresive_ = new csci3081::AggresiveBehavior();
    default_velocity_ = new csci3081::WheelVelocity(0, 0);
  }

  virtual void TearDown() {
    delete aggresive_;
    delete default_velocity_;
  }

  csci3081::AggresiveBehavior* aggresive_;
  csci3081::WheelVelocity* default_velocity_;
};

TEST_F(AggresiveBehaviorTest, getWheelVelocity) {
  double rsr = 2.0;
  double lsr = 2.0;
  double speed = 1.0;

  csci3081::WheelVelocity* aggresive_velocity_ = new csci3081::WheelVelocity(0, 0);
  aggresive_->getWheelVelocity(rsr,lsr,speed,aggresive_velocity_);
  default_velocity_ = new csci3081::WheelVelocity(rsr,lsr,speed);
  EXPECT_NEAR(aggresive_velocity_->left,default_velocity_->left,.1);
  EXPECT_NEAR(aggresive_velocity_->right,default_velocity_->right,.1);

  rsr = -2.0;
  lsr = -2.0;
  speed = 1.0;

  aggresive_->getWheelVelocity(rsr,lsr,speed,aggresive_velocity_);
  default_velocity_ = new csci3081::WheelVelocity(rsr,lsr,speed);
  EXPECT_NEAR(aggresive_velocity_->left,default_velocity_->left,.1);
  EXPECT_NEAR(aggresive_velocity_->right,default_velocity_->right,.1);

}
