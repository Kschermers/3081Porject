/**
 * @file light_factory.cc
 *
 * @copyright 2019 Kadin Schermers
 */

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <string>
#include "src/light_factory.h"
#include "src/light.h"

/*******************************************************************************
 * Namespaces
 ******************************************************************************/
NAMESPACE_BEGIN(csci3081);

/*******************************************************************************
 * Constructors/Destructor
 ******************************************************************************/
/**
 * @brief default constructor for LightFactory
 */
  LightFactory::LightFactory() {}

/**
 * @brief destructor for BraitenbergVehicleFactory
 */
  LightFactory::~LightFactory() {}

/*******************************************************************************
 * Class Methods
 ******************************************************************************/
/**
 * @brief create method inherited from arena_entity_factory that creates Light objects
 */
  Light* LightFactory::create(/*jsonobject* config*/) {
    return new Light();
  }

NAMESPACE_END(csci3081);
