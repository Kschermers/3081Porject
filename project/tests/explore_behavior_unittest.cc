#include "src/explore_behavior.h"
#include "src/wheel_velocity.h"
#include <gtest/gtest.h>

class ExploreBehaviorTest : public ::testing::Test {
protected:
  virtual void SetUp() {

    explore_ = new csci3081::ExploreBehavior();
    default_velocity_ = new csci3081::WheelVelocity(0, 0);
  }

  virtual void TearDown() {
    delete explore_;
    delete default_velocity_;
  }

  csci3081::ExploreBehavior* explore_;
  csci3081::WheelVelocity* default_velocity_;
};

TEST_F(ExploreBehaviorTest, getWheelVelocity) {
  double rsr = 2.0;
  double lsr = 2.0;
  double speed = 1.0;

  csci3081::WheelVelocity* explore_velocity_ = new csci3081::WheelVelocity(0, 0);
  explore_->getWheelVelocity(rsr,lsr,speed,explore_velocity_);
  default_velocity_ = new csci3081::WheelVelocity(1.0/rsr,1.0/lsr,speed);
  EXPECT_NEAR(explore_velocity_->left,default_velocity_->left,.1);
  EXPECT_NEAR(explore_velocity_->right,default_velocity_->right,.1);

  rsr = -2.0;
  lsr = -2.0;
  speed = 1.0;

  explore_->getWheelVelocity(rsr,lsr,speed,explore_velocity_);
  default_velocity_ = new csci3081::WheelVelocity(1.0/rsr,1.0/lsr,speed);
  EXPECT_NEAR(explore_velocity_->left,default_velocity_->left,.1);
  EXPECT_NEAR(explore_velocity_->right,default_velocity_->right,.1);

}
