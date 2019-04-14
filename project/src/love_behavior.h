/**
 * @file love_behavior.h
 *
 * @copyright 2019 Kadin Schermers
 */

#ifndef PROJECT_SRC_LOVE_BEHAVIOR_H_
#define PROJECT_SRC_LOVE_BEHAVIOR_H_

 /*******************************************************************************
  * Includes
  ******************************************************************************/
#include "src/behavior_pattern.h"
#include "src/wheel_velocity.h"

 /*******************************************************************************
  * Namespaces
  ******************************************************************************/
NAMESPACE_BEGIN(csci3081);

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/
/*
 * @ brief class for love behavior
 */
class LoveBehavior : public BehaviorPattern {
 public:
   /**
    * @brief constructor
    */
     LoveBehavior();

   /**
    * @brief destructor
    */
     ~LoveBehavior();

  /*
   * @brief method to return wheel velocity for love behavior
   */
  void getWheelVelocity(
    double rsr,
    double lsr,
    double speed,
    WheelVelocity* wv_ptr) override;
};

NAMESPACE_END(csci3081);

#endif  /* PROJECT_SRC_LOVE_BEHAVIOR_H_ */
