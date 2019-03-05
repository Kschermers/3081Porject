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
  Food* FoodFactory::create(/*jsonobject* config*/) {
    return new Food();
  }

NAMESPACE_END(csci3081);
