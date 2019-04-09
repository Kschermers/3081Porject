/**
* @file predator.h
*
* @copyright 2019 Kadin Schermers
*/

#ifndef PROJECT_SRC_PREDATOR_H_
#define PROJECT_SRC_PREDATOR_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "src/braitenberg_vehicle.h"

/*******************************************************************************
 * Namespaces
 ******************************************************************************/
NAMESPACE_BEGIN(csci3081);

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/

class Predator: public BraitenbergVehicle {
 public:
  /**
   * @brief Default constructor.
   */
  Predator();
};

NAMESPACE_END(csci3081);

#endif  // PROJECT_SRC_PREDATOR_H_
