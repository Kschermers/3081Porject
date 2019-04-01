/**
 * @file love_behavior.cc
 *
 * @copyright 2019 Kadin Schermers
 */

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "src/behavior_pattern.h"
#include "src/love_behavior.h"
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
    LoveBehavior::LoveBehavior() {}

  /**
   * @brief destructor
   */
    LoveBehavior::~LoveBehavior() {}
/*******************************************************************************
 * Class Methods
 ******************************************************************************/

void LoveBehavior::getWheelVelocity(double rsr, double lsr, double speed, WheelVelocity* wv_ptr) {
    *wv_ptr = WheelVelocity(1.0/lsr,1.0/rsr,speed);
}

NAMESPACE_END(csci3081);
