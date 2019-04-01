/**
 * @file behavior_pattern.h
 *
 * @copyright 2019 Kadin Schermers
 */

#ifndef PROJECT_SRC_BEHAVIOR_PATTERN_H_
#define PROJECT_SRC_BEHAVIOR_PATTERN_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "src/wheel_velocity.h"

 /*******************************************************************************
  * Namespaces
  ******************************************************************************/
NAMESPACE_BEGIN(csci3081);

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/
/*
 * @ brief shell class for creating strategy pattern for behaviours for BVs
 */
class BehaviorPattern {
 public:
/**
 * @brief destructor
 */
  virtual ~BehaviorPattern() {}

  /*
   * @brief method to return wheel velocity based on behavior type
   */
  virtual void getWheelVelocity(
    double rsr,
    double lsr,
    double speed,
    WheelVelocity* wv_ptr) = 0;
};

NAMESPACE_END(csci3081);

#endif  /* PROJECT_SRC_BEHAVIOR_PATTERN_H_ */
