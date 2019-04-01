/**
 * @file food_factory.h
 *
 * @copyright 2019 Kadin Schermers
 */

#ifndef PROJECT_SRC_FOOD_FACTORY_H_
#define PROJECT_SRC_FOOD_FACTORY_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <string>
#include "src/arena_entity_factory.h"
#include "src/food.h"

/*******************************************************************************
 * Namespaces
 ******************************************************************************/
NAMESPACE_BEGIN(csci3081);

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/
/**
 * @brief FoodFactory that creates Food objects
 */
class FoodFactory : public ArenaEntityFactory {
 public:
/**
 * @brief constructor
 */
  FoodFactory();

/**
 * @brief destructor
 */
  ~FoodFactory();

/**
 * @brief create method inherited from arena_entity_factory that makes a Food object
 */
  ArenaEntity* create(const json_object& entity_config) override;
};

NAMESPACE_END(csci3081);

#endif /* PROJECT_SRC_FOOD_FACTORY_H_ */
