/**
 * @file aggresive_behavior.h
 *
 * @copyright 2019 Kadin Schermers
 */

#ifndef PROJECT_SRC_AGGRESIVE_BEHAVIOR_H_
#define PROJECT_SRC_AGGRESIVE_BEHAVIOR_H_

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
 * @ brief class for aggresive behavior
 */
class AggresiveBehavior : public BehaviorPattern {
 public:
   /**
    * @brief constructor
    */
     AggresiveBehavior();

   /**
    * @brief destructor
    */
     ~AggresiveBehavior();

  /*
   * @brief method to return wheel velocity for aggresive behavior
   */
  void getWheelVelocity(
    double rsr,
    double lsr,
    double speed,
    WheelVelocity* wv_ptr) override;
};

NAMESPACE_END(csci3081);

#endif  /* PROJECT_SRC_AGGRESIVE_BEHAVIOR_H_ */
