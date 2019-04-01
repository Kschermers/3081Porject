/**
 * @file explore_behavior.h
 *
 * @copyright 2019 Kadin Schermers
 */

 #ifndef SRC_EXPLORE_BEHAVIOR_H_
 #define SRC_EXPLORE_BEHAVIOR_H_

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
 * @ brief class for explore behavior
 */
class ExploreBehavior : public BehaviorPattern {
 public:
   /**
    * @brief constructor
    */
     ExploreBehavior();

   /**
    * @brief destructor
    */
     ~ExploreBehavior();

  /*
   * @brief method to return wheel velocity for explore behavior
   */
  void getWheelVelocity(double rsr, double lsr, double speed, WheelVelocity* wv_ptr) override;

};

NAMESPACE_END(csci3081);

#endif  /* SRC_EXPLORE_BEHAVIOR_H_ */
