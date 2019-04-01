/**
 * @file coward_behavior.h
 *
 * @copyright 2019 Kadin Schermers
 */

 #ifndef SRC_COWARD_BEHAVIOR_H_
 #define SRC_COWARD_BEHAVIOR_H_

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
 * @ brief class for coward behavior
 */
class CowardBehavior : public BehaviorPattern {
 public:

   /**
    * @brief constructor
    */
     CowardBehavior();

   /**
    * @brief destructor
    */
     ~CowardBehavior();

  /*
   * @brief method to return wheel velocity for coward behavior
   */
  void getWheelVelocity(double rsr, double lsr, double speed, WheelVelocity* wv_ptr) override;

};

NAMESPACE_END(csci3081);

#endif  /* SRC_COWARD_BEHAVIOR_H_ */
