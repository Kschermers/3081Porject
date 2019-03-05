/**
 * @file braitenberg_vehicle_factory.h
 *
 * @copyright 2019 Kadin Schermers
 */

#ifndef SRC_BRAITENBEG_VEHICLE_FACTORY_H_
#define SRC_BRAITENBEG_VEHICLE_FACTORY_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <string>
#include "src/arena_entity_factory.h"
#include "src/braitenberg_vehicle.h"

/*******************************************************************************
 * Namespaces
 ******************************************************************************/
NAMESPACE_BEGIN(csci3081);

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/
/**
 * @brief BraitenbergVehicleFactory factory that creates Braitenberg Vehicle objects
 */
class BraitenbergVehicleFactory : public ArenaEntityFactory {
public:
/**
 * @brief default constructor for BraitenbergVehicleFactory
 */
  BraitenbergVehicleFactory() {}

/**
 * @brief delete copy and assignment constructor
 */

  BraitenbergVehicleFactory(const BraitenbergVehicleFactory & rhs) = delete;

  BraitenbergVehicleFactory operator=(const BraitenbergVehicle & rhs) = delete;

/**
 * @brief destructor for BraitenbergVehicleFactory
 */
 ~BraitenbergVehicleFactory() {}

/**
 * @brief create method inherited from arena_entity_factory that creates BraitenbergVehicle objects
 */
  BraitenbergVehicle* create(/*jsonobject* config*/) {return NULL;}
};

NAMESPACE_END(csci3081);

#endif /* SRC_BRAITENBEG_VEHICLE_FACTORY_H_*/
