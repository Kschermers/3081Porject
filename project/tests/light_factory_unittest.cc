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
  }
  virtual void TearDown() {
    delete factory_;
  }

  csci3081::LightFactory * factory_;

};

/*******************************************************************************
 * Test Cases
 ******************************************************************************/

TEST_F(LightFactoryTest, Create) {

  csci3081::Light* ent_light_ = (csci3081::Light*) factory_->create();

  EXPECT_EQ(ent_light_->get_speed(), 3);
  EXPECT_EQ(ent_light_->get_color().r, 255);
  EXPECT_EQ(ent_light_->get_color().g, 255);
  EXPECT_EQ(ent_light_->get_color().b, 255);
  EXPECT_EQ(ent_light_->get_radius(), LIGHT_RADIUS);
  EXPECT_EQ(ent_light_->get_type(), csci3081::EntityType::kLight);
  EXPECT_EQ(ent_light_->get_pose().x, 200);
  EXPECT_EQ(ent_light_->get_pose().y, 200);
  EXPECT_EQ(ent_light_->is_mobile(), true);
};

NAMESPACE_END(csci3081);
