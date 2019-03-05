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
  BraitenbergVehicleFactory::BraitenbergVehicleFactory() {}

/**
 * @brief destructor for BraitenbergVehicleFactory
 */
 BraitenbergVehicleFactory::~BraitenbergVehicleFactory() {}

/*******************************************************************************
 * Class Methods
 ******************************************************************************/
/**
 * @brief create method inherited from arena_entity_factory that creates BraitenbergVehicle objects
 */
  BraitenbergVehicle* BraitenbergVehicleFactory::create(/*jsonobject* config*/) {
    return new BraitenbergVehicle();
  }

NAMESPACE_END(csci3081);
