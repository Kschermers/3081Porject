/**
 * @file food_factory.cc
 *
 * @copyright 2019 Kadin Schermers
 */

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <string>
#include "src/food_factory.h"
#include "src/food.h"

/*******************************************************************************
 * Namespaces
 ******************************************************************************/
NAMESPACE_BEGIN(csci3081);

/*******************************************************************************
 * Constructors/Destructor
 ******************************************************************************/
/**
 * @brief constructor
 */
  FoodFactory::FoodFactory() {}

/**
 * @brief destructor
 */
  FoodFactory::~FoodFactory() {}

/*******************************************************************************
 * Class Methods
 ******************************************************************************/
 /**
  * @brief create method inherited from arena_entity_factory that makes a Food object
  */
  ArenaEntity* FoodFactory::create(const json_object& entity_config) {
    Food* f = new Food();
    f->LoadFromObject(&entity_config);
    return f;
  }

NAMESPACE_END(csci3081);
