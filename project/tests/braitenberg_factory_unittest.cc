/*******************************************************************************
* Includes
******************************************************************************/
#include <gtest/gtest.h>
#include <string>
#include "src/braitenberg_vehicle_factory.h"
#include "src/braitenberg_vehicle.h"
/******************************************************
* TEST FEATURE SetUp
*******************************************************/
class BraitenbergVehicleFactoryTest : public ::testing::Test {
protected:
virtual void SetUp() {
braitenberg_factory_ = new csci3081::BraitenbergVehicleFactory();
std::string json =
"{\"type\": \"Braitenberg\", \"x\":270, \"y\":270, \"r\":15, \"theta\": 215, \"light_behavior\": \"None\", \"food_behavior\": \"Explore\" }";
config_ = new json_value();
std::string err = parse_json(config_, &json);
}

virtual void TearDown() {
  delete braitenberg_factory_;
  delete config_;
}

csci3081::BraitenbergVehicleFactory* braitenberg_factory_;
json_value* config_;
};
/*******************************************************************************
* Test Cases
******************************************************************************/
TEST_F(BraitenbergVehicleFactoryTest, Constructor) {
};
TEST_F(BraitenbergVehicleFactoryTest, Create) {
csci3081::BraitenbergVehicle* entity_robot_ =
(csci3081::BraitenbergVehicle*)
braitenberg_factory_->create(config_->get<json_object>());

EXPECT_NEAR(entity_robot_->get_pose().x, 270, .01);
EXPECT_NEAR(entity_robot_->get_pose().y, 270, .01);
EXPECT_NEAR(entity_robot_->get_pose().theta, 215, .01);
EXPECT_NEAR(entity_robot_->get_radius(), 15, .01);
EXPECT_EQ(entity_robot_->get_light_behavior(), csci3081::Behavior::kNone);
EXPECT_EQ(entity_robot_->get_food_behavior(), csci3081::Behavior::kExplore);
};
