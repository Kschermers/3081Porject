/**
 * @file aggresive_behavior.cc
 *
 * @copyright 2019 Kadin Schermers
 */

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "src/aggresive_behavior.h"
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
   AggresiveBehavior::AggresiveBehavior() {}

 /**
  * @brief destructor
  */
   AggresiveBehavior::~AggresiveBehavior() {}

/*******************************************************************************
 * Class Methods
 ******************************************************************************/

void AggresiveBehavior::getWheelVelocity(double rsr, double lsr, double speed, WheelVelocity* wv_ptr) {
    *wv_ptr = WheelVelocity(rsr,lsr,speed);
}

NAMESPACE_END(csci3081);
