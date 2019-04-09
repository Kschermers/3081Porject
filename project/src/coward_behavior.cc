/**
 * @file coward_behavior.cc
 *
 * @copyright 2019 Kadin Schermers
 */

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "src/coward_behavior.h"
#include "src/wheel_velocity.h"

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
    CowardBehavior::CowardBehavior() {}

  /**
   * @brief destructor
   */
    CowardBehavior::~CowardBehavior() {}

/*******************************************************************************
 * Class Methods
 ******************************************************************************/

void CowardBehavior::getWheelVelocity(
  double rsr,
  double lsr,
  double speed,
  WheelVelocity* wv_ptr) {
    *wv_ptr = WheelVelocity(lsr, rsr, speed);
}

NAMESPACE_END(csci3081);
