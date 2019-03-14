/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <gtest/gtest.h>
#include "src/light_factory.h"
#include "src/light.h"
#include "src/params.h"
#include "src/pose.h"

/*******************************************************************************
 * Namespaces
 ******************************************************************************/
NAMESPACE_BEGIN(csci3081);

 /******************************************************
* TEST FEATURE SetUp
*******************************************************/
class LightFactoryTest : public ::testing::Test {

 protected:
  virtual void SetUp() {
    factory_ = new LightFactory();
    std::string json =
     "{\"type\": \"Light\", \"x\":150, \"y\":300, \"r\":25 }";
    config_ = new json_value();
    std::string err = parse_json(config_, &json);
  }
  virtual void TearDown() {
    delete factory_;
    delete config_;
  }

  csci3081::LightFactory * factory_;
  json_value* config_;
  };

/*******************************************************************************
 * Test Cases
 ******************************************************************************/

TEST_F(LightFactoryTest, Create) {

  csci3081::Light* ent_light_ = (csci3081::Light*) factory_->create(config_->get<json_object>());

  EXPECT_NEAR(ent_light_->get_radius(), 25, .01);
  EXPECT_EQ(ent_light_->get_type(), csci3081::EntityType::kLight);
  EXPECT_NEAR(ent_light_->get_pose().x, 150, .01);
  EXPECT_NEAR(ent_light_->get_pose().y, 300, .01);
};

NAMESPACE_END(csci3081);
