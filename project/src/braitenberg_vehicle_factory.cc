/**
 * @file braitenberg_vehicle_factory.cc
 *
 * @copyright 2019 Kadin Schermers
 */

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <string>
#include "src/braitenberg_vehicle_factory.h"
#include "src/braitenberg_vehicle.h"

/*******************************************************************************
 * Namespaces
 ******************************************************************************/
NAMESPACE_BEGIN(csci3081);

/*******************************************************************************
 * Constructors/Destructor
 ******************************************************************************/
/**
 * @brief default constructor for BraitenbergVehicleFactory
 */
  BraitenbergVehicleFactory::BraitenbergVehicleFactory() {};

/**
 * @brief destructor for BraitenbergVehicleFactory
 */
  BraitenbergVehicleFactory::~BraitenbergVehicleFactory() {};

/*******************************************************************************
 * Class Methods
 ******************************************************************************/
/**
 * @brief create method inherited from arena_entity_factory that creates BraitenbergVehicle objects
 */
ArenaEntity* BraitenbergVehicleFactory::create(
  const json_object& entity_config) {
    BraitenbergVehicle* bv = new BraitenbergVehicle();
    bv->LoadFromObject(&entity_config);
    return bv;
}

NAMESPACE_END(csci3081);
