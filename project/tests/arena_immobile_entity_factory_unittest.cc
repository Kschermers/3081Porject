/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <gtest/gtest.h>
#include "src/arena_immobile_entity_factory.h"
#include "src/arena_immobile_entity.h"
#include "src/food.h"
#include "src/params.h"
#include "src/entity_type.h"

 /******************************************************
* TEST FEATURE SetUp
*******************************************************/
class ImmobileFactoryTest : public ::testing::Test {

 protected:
  virtual void SetUp() {
    factory_ = new csci3081::ArenaImmobileEntityFactory();
  }
  virtual void TearDown() {
    delete factory_;
  }

  csci3081::ArenaImmobileEntityFactory * factory_;

};

/*******************************************************************************
 * Test Cases
 ******************************************************************************/

TEST_F(ImmobileFactoryTest, Create) {

  csci3081::ArenaImmobileEntity* ent_ = (csci3081::Food*) factory_->create(csci3081::EntityType::kFood);

  EXPECT_EQ(ent_->get_color().r, 0);
  EXPECT_EQ(ent_->get_color().g, 255);
  EXPECT_EQ(ent_->get_color().b, 0);
  EXPECT_EQ(ent_->get_radius(),FOOD_RADIUS);
  EXPECT_EQ(ent_->get_pose().x, 400);
  EXPECT_EQ(ent_->get_pose().y, 400);
  EXPECT_EQ(ent_->get_type(), csci3081::EntityType::kFood);
  EXPECT_EQ(ent_->is_mobile(), false);
};
