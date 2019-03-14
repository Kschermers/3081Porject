/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <gtest/gtest.h>
#include "src/food_factory.h"
#include "src/food.h"
#include "src/params.h"

 /******************************************************
* TEST FEATURE SetUp
*******************************************************/
class FoodFactoryTest : public ::testing::Test {

 protected:
  virtual void SetUp() {
    factory_ = new csci3081::FoodFactory();
    std::string json =
    "{\"type\": \"Food\", \"x\":200, \"y\":200, \"r\":20, \"theta\": 0.0 }";
    config_ = new json_value();
    std::string err = parse_json(config_, &json);
  }
  virtual void TearDown() {
    delete factory_;
    delete config_;
  }

  csci3081::FoodFactory * factory_;
  json_value* config_;
};

/*******************************************************************************
 * Test Cases
 ******************************************************************************/

TEST_F(FoodFactoryTest, Create) {

  csci3081::Food* ent_ = (csci3081::Food*) factory_->create(config_->get<json_object>());

  EXPECT_NEAR(ent_->get_radius(),20, .01);
  EXPECT_NEAR(ent_->get_pose().x, 200, .01);
  EXPECT_NEAR(ent_->get_pose().y, 200, .01);
  EXPECT_NEAR(ent_->get_pose().theta, 0.0, .01);
  EXPECT_EQ(ent_->get_type(), csci3081::EntityType::kFood);
};
