/**
 * @file braitenberg_vehicle.h
 *
 * @copyright 2017 3081 Staff, All rights reserved.
 */

#ifndef PROJECT_SRC_BRAITENBERG_VEHICLE_H_
#define PROJECT_SRC_BRAITENBERG_VEHICLE_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include <ctime>
#include <string>
#include <vector>
#include "src/common.h"
#include "src/arena_mobile_entity.h"
#include "src/motion_behavior_differential.h"
#include "src/wheel_velocity.h"
#include "src/behavior_enum.h"
#include "src/observer.h"
#include "src/subject.h"


/*******************************************************************************
 * Namespaces
 ******************************************************************************/
NAMESPACE_BEGIN(csci3081);

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/

/**
 * @brief Entity class to represent a Braitenberg Vehicle
 *
 * A braitenberg vehicle is a simple machine that is used to show how simple
 * concepts (in this case wiring) can give way to complex looking behavior. In
 * this simulation, Braitenberg vehicles contain sensors, which can be hooked
 * up in four different ways, and thus they can exhibit four different behaviors
 */

class BraitenbergVehicle : public ArenaMobileEntity, public Subject {
 public:
  /**
   * @brief Default constructor.
   */
  BraitenbergVehicle();

  /**
   * Deleting the copy assignment and copy constructor. required now with
   *  inclusion of references to sensors and motion_handler/behavior
   */
  BraitenbergVehicle(const BraitenbergVehicle & rhs) = delete;

  BraitenbergVehicle operator=(const BraitenbergVehicle & rhs) = delete;

  /**
   * @brief Update the BraitenbergVehicle's position and velocity after the
   * specified duration has passed.
   *
   * @param dt The # of timesteps that have elapsed since the last update.
   */
  void TimestepUpdate(unsigned int dt) override;

  /**
  * @brief Update method for BraitenbergVehicles that handles calculating wheel
  * velocities based on behaviors and for each entity type. Also sets color of
  * BV based on currently active behaviors. Handles starvation functionality as
  * well.
  *
  */
  void Update() override;

  /**
  * @brief Sets the BV to be the currently observed BV so its wheel velocities
  * can be viewed in the GAV
  *
  * @param o the Observer a.k.a the GAV
  */
  void SubscribeTo(Observer* o) overri  de;

  /**
  * @brief remove the BV from being viewed by the Observer
  *
  */fully i
  void UnsubscribeTo() override;

  /**
  * @brief uses Observers update method to send the necessary observed info,
  * in this case wheel velocities, to the Observer
  *
  */
  void NotifyObserver() override;

  /**
   * @brief Change the movement state of the BraitenbergVehicle.
   */
  void HandleCollision(EntityType ent_type,
                       ArenaEntity * object = NULL) override;

  /**
  * @brief If sensors sense an entity, let the BV know and react accordingly
  *
  */
  void SenseEntity(const ArenaEntity& entity);

  std::string get_name() const override;

  std::vector<Pose> get_light_sensors_const() const;
  // productt of all wheel velocities that act upon a BV

  std::vector<Pose> get_light_sensors();

  void UpdateLightSensors();

  void LoadFromObject(const json_object* entity_config) override;

  Behavior get_light_behavior() { return light_behavior_; }

  void set_light_behavior(Behavior behavior) { light_behavior_ = behavior; }

  Behavior get_food_behavior() { return food_behavior_; }

  void set_food_behavior(Behavior behavior) { food_behavior_ = behavior; }

  Behavior get_bv_behavior() { return bv_behavior_; }

  void set_bv_behavior(Behavior behavior) { bv_behavior_ = behavior; }

  double get_sensor_reading_left(const ArenaEntity* entity);

  double get_sensor_reading_right(const ArenaEntity* entity);

  static int count;

 private:
  // counter to track starvation
  int starving_count_;

  std::vector<Pose> light_sensors_;
  MotionBehaviorDifferential * motion_behavior_{nullptr};

  // Pointer to the Observer for observer pattern implementation
  Observer* observer_;

  // product of all wheel velocities that act upon a BV
  WheelVelocity wheel_velocity_;

  // Behaviors for each sensor
  Behavior light_behavior_;
  Behavior food_behavior_;
  Behavior bv_behavior_;

  // Entities for sensing by BV
  const ArenaEntity* closest_light_entity_;
  const ArenaEntity* closest_food_entity_;
  const ArenaEntity* closest_bv_entity_;

  // Wheel velocity for each sensor
  WheelVelocity* light_wheel_velocity;
  WheelVelocity* food_wheel_velocity;
  WheelVelocity* bv_wheel_velocity;

  double defaultSpeed_;
  int turnCount = -1;
};

NAMESPACE_END(csci3081);

#endif  // PROJECT_SRC_BRAITENBERG_VEHICLE_H_
