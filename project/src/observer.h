/**
* @file observer.h
*
* @copyright 2019 Kadin Schermers
*/
#ifndef PROJECT_SRC_OBSERVER_H_
#define PROJECT_SRC_OBSERVER_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "src/wheel_velocity.h"

/*******************************************************************************
 * Namespaces
 ******************************************************************************/
NAMESPACE_BEGIN(csci3081);


class Observer {
 public:
  virtual ~Observer() {}

  virtual void UpdateOb(
     WheelVelocity* light_wheel_,
     WheelVelocity* food_wheel_,
     WheelVelocity* bv_wheel_) = 0;
};

NAMESPACE_END(csci3081);
#endif  // PROJECT_SRC_OBSERVER_H_
