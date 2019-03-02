/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <gtest/gtest.h>
#include "src/arena_mobile_entity_factory.h"
#include "src/arena_mobile_entity.h"
#include "src/braitenberg_vehicle.h"
#include "src/light.h"
#include "src/params.h"
#include "src/entity_type.h"
#include "src/pose.h"

 /******************************************************
* TEST FEATURE SetUp
*******************************************************/
class MobileFactoryTest : public ::testing::Test {

 protected:
  virtual void SetUp() {
    factory_ = new csci3081::ArenaMobileEntityFactory();
  }
  virtual void TearDown() {
    delete factory_;
  }

  csci3081::ArenaMobileEntityFactory * factory_;

};

/*******************************************************************************
 * Test Cases
 ******************************************************************************/

TEST_F(MobileFactoryTest, Create) {

  csci3081::Light* ent_light_ = (csci3081::Light*) factory_->create(csci3081::EntityType::kLight);
  csci3081::BraitenbergVehicle* ent_robo_ = (csci3081::BraitenbergVehicle*) factory_->create(csci3081::EntityType::kBraitenberg);

  EXPECT_EQ(ent_light_->get_speed(), 3);
  EXPECT_EQ(ent_light_->get_color().r, 255);
  EXPECT_EQ(ent_light_->get_color().g, 255);
  EXPECT_EQ(ent_light_->get_color().b, 255);
  EXPECT_EQ(ent_light_->get_radius(), LIGHT_RADIUS);
  EXPECT_EQ(ent_light_->get_type(), csci3081::EntityType::kLight);
  EXPECT_EQ(ent_light_->get_pose().x, 200);
  EXPECT_EQ(ent_light_->get_pose().y, 200);
  EXPECT_EQ(ent_light_->is_mobile(), true);

  EXPECT_EQ(ent_robo_->get_speed(), 5.0);
  EXPECT_EQ(ent_robo_->get_color().r, 122);
  EXPECT_EQ(ent_robo_->get_color().g, 0);
  EXPECT_EQ(ent_robo_->get_color().b, 25);
  EXPECT_EQ(ent_robo_->get_radius(), LIGHT_RADIUS);
  EXPECT_EQ(ent_robo_->get_type(), csci3081::EntityType::kBraitenberg);
  EXPECT_EQ(ent_robo_->get_pose().x, 500);
  EXPECT_EQ(ent_robo_->get_pose().y, 500);
  EXPECT_EQ(ent_robo_->get_pose().theta, 0);
  EXPECT_EQ(ent_robo_->is_mobile(), true);
  EXPECT_EQ(ent_robo_->get_light_behavior(), csci3081::Behavior::kNone);
  EXPECT_EQ(ent_robo_->get_food_behavior(), csci3081::Behavior::kNone);

  std::vector<csci3081::Pose> vPose;
  vPose.push_back(csci3081::Pose());
  vPose.push_back(csci3081::Pose());

  std::vector<csci3081::Pose> vPose_robo_ = ent_robo_->get_light_sensors();

  for(int i = 0;i < 2; i++) {
    EXPECT_EQ(vPose_robo_[i].x,vPose[i].x);
    EXPECT_EQ(vPose_robo_[i].y,vPose[i].y);
    EXPECT_EQ(vPose_robo_[i].theta,vPose[i].theta);
  }
};
