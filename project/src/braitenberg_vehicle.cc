/**
 * @file braitenberg_vehicle.cc
 *
 * @copyright 2017 3081 Staff, All rights reserved.
 */
/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <iostream>
#include <ctime>
#include "src/braitenberg_vehicle.h"
#include "src/params.h"
#include "src/aggresive_behavior.h"
#include "src/explore_behavior.h"
#include "src/coward_behavior.h"
#include "src/love_behavior.h"

class SensorLightLove;

/*******************************************************************************
 * Namespaces
 ******************************************************************************/
NAMESPACE_BEGIN(csci3081);

int BraitenbergVehicle::count = 0;

/*******************************************************************************
 * Constructors/Destructor
 ******************************************************************************/

BraitenbergVehicle::BraitenbergVehicle() :
  light_sensors_(), wheel_velocity_(), light_behavior_(kNone),
  food_behavior_(kNone), bv_behavior_(kNone), closest_light_entity_(NULL),
  closest_food_entity_(NULL), closest_bv_entity_(NULL), defaultSpeed_(5.0) {
  set_type(kBraitenberg);
  motion_behavior_ = new MotionBehaviorDifferential(this);
  light_sensors_.push_back(Pose());
  light_sensors_.push_back(Pose());
  set_color(BRAITENBERG_COLOR);
  set_pose(ROBOT_INIT_POS);

  wheel_velocity_ = WheelVelocity(0, 0);

  // Set ID
  count++;
  set_id(count);
}

void BraitenbergVehicle::TimestepUpdate(__unused unsigned int dt) {
  if (turnCount > 0) {
    turnCount = turnCount -1;
  }  else if (turnCount == 0) {
    set_heading(static_cast<int>((get_pose().theta + 45)) % 360);
    turnCount = -1;
  }  else {
    turnCount = -1;
  }

  if (is_moving()) {
    motion_behavior_->UpdatePose(dt, wheel_velocity_);
  }

  UpdateLightSensors();
}

void BraitenbergVehicle::HandleCollision(__unused EntityType ent_type,
                                         __unused ArenaEntity * object) {
  set_heading(static_cast<int>((get_pose().theta + 180)) % 360);
  turnCount = 20;
}

void BraitenbergVehicle::SenseEntity(const ArenaEntity& entity) {
  const ArenaEntity** closest_entity_ = NULL;
  if (entity.get_type() == kLight) {
    closest_entity_ = &closest_light_entity_;
  } else if (entity.get_type() == kFood) {
    closest_entity_ = &closest_food_entity_;
  } else if (entity.get_type() == kBraitenberg) {
    closest_entity_ = &closest_bv_entity_;
  }

  if (!closest_entity_) {
    return;
  }

  if (!*closest_entity_) {
    *closest_entity_ = &entity;
  }

  double distance = (this->get_pose()-entity.get_pose()).Length();
  double closest_distance =
  (this->get_pose()-(*closest_entity_)->get_pose()).Length();
  if (distance < closest_distance) {
    *closest_entity_ = &entity;
    closest_distance = distance;
  }
  if (closest_distance > 100.0) {
    *closest_entity_ = NULL;
  }
}

void BraitenbergVehicle::Update() {
  WheelVelocity light_wheel_velocity = WheelVelocity(0, 0);
  ExploreBehavior exBev = ExploreBehavior();
  LoveBehavior lvBev = LoveBehavior();
  AggresiveBehavior agBev = AggresiveBehavior();
  CowardBehavior cwBev = CowardBehavior();

  int numBehaviors = 3;
  WheelVelocity* light_for_switch = new WheelVelocity(0, 0);

  switch (light_behavior_) {

    case kExplore:

      exBev.getWheelVelocity(
        get_sensor_reading_right(closest_light_entity_),
        get_sensor_reading_left(closest_light_entity_),
        defaultSpeed_,
        light_for_switch);
        break;

    case kLove:

      lvBev.getWheelVelocity(
        get_sensor_reading_right(closest_light_entity_),
        get_sensor_reading_left(closest_light_entity_),
        defaultSpeed_,
        light_for_switch);
        break;

    case kAggressive:

      agBev.getWheelVelocity(
        get_sensor_reading_right(closest_light_entity_),
        get_sensor_reading_left(closest_light_entity_),
        defaultSpeed_,
        light_for_switch);
        break;

    case kCoward:
      cwBev.getWheelVelocity(
        get_sensor_reading_right(closest_light_entity_),
        get_sensor_reading_left(closest_light_entity_),
        defaultSpeed_,
        light_for_switch);
        break;

    case kNone:
    default:
      numBehaviors--;
      break;

      light_wheel_velocity = *light_for_switch;
  }

  WheelVelocity food_wheel_velocity = WheelVelocity(0, 0);
  WheelVelocity* food_for_switch = new WheelVelocity(0, 0);

  switch (food_behavior_) {

    case kExplore:

      exBev.getWheelVelocity(
        get_sensor_reading_right(closest_food_entity_),
        get_sensor_reading_left(closest_food_entity_),
        defaultSpeed_,
        food_for_switch);
        break;

    case kLove:

      lvBev.getWheelVelocity(
        get_sensor_reading_right(closest_food_entity_),
        get_sensor_reading_left(closest_food_entity_),
        defaultSpeed_,
        food_for_switch);
        break;

    case kAggressive:

      agBev.getWheelVelocity(
        get_sensor_reading_right(closest_food_entity_),
        get_sensor_reading_left(closest_food_entity_),
        defaultSpeed_,
        food_for_switch);
        break;

    case kCoward:
      cwBev.getWheelVelocity(
        get_sensor_reading_right(closest_food_entity_),
        get_sensor_reading_left(closest_food_entity_),
        defaultSpeed_,
        food_for_switch);
        break;

    case kNone:
    default:
      numBehaviors--;
      break;

      food_wheel_velocity = *food_for_switch;
  }

  WheelVelocity bv_wheel_velocity = WheelVelocity(0, 0);
  WheelVelocity* bv_for_switch = new WheelVelocity(0, 0);

  switch (bv_behavior_) {

    case kExplore:

      exBev.getWheelVelocity(
        get_sensor_reading_right(closest_bv_entity_),
        get_sensor_reading_left(closest_bv_entity_),
        defaultSpeed_,
        bv_for_switch);
        break;

    case kLove:

      lvBev.getWheelVelocity(
        get_sensor_reading_right(closest_bv_entity_),
        get_sensor_reading_left(closest_bv_entity_),
        defaultSpeed_,
        bv_for_switch);
        break;

    case kAggressive:

      agBev.getWheelVelocity(
        get_sensor_reading_right(closest_bv_entity_),
        get_sensor_reading_left(closest_bv_entity_),
        defaultSpeed_,
        bv_for_switch);
        break;

    case kCoward:
      cwBev.getWheelVelocity(
        get_sensor_reading_right(closest_bv_entity_),
        get_sensor_reading_left(closest_bv_entity_),
        defaultSpeed_,
        bv_for_switch);
        break;

    case kNone:
    default:
      numBehaviors--;
      break;

      bv_wheel_velocity = *bv_for_switch;
  }

  RgbColor robocolor;

  if (food_behavior_ == kNone && light_behavior_ != kNone) {
    robocolor.r = 255;
    robocolor.g = 204;
    robocolor.b = 51;

    set_color(robocolor);
  } else if (food_behavior_ != kNone && light_behavior_ == kNone) {
    robocolor.r = 0;
    robocolor.g = 0;
    robocolor.b = 255;

    set_color(robocolor);
  } else {
    robocolor.r = 122;
    robocolor.g = 0;
    robocolor.b = 25;

    set_color(robocolor);
  }
  if (numBehaviors) {
    wheel_velocity_ = WheelVelocity(
      (light_wheel_velocity.left + food_wheel_velocity.left + bv_wheel_velocity.left)/numBehaviors,
      (light_wheel_velocity.right + food_wheel_velocity.right + bv_wheel_velocity.right)/numBehaviors,
      defaultSpeed_);
  } else {
    wheel_velocity_ = WheelVelocity(0, 0);
  }
}

std::string BraitenbergVehicle::get_name() const {
  return "Braitenberg " + std::to_string(get_id());
}

std::vector<Pose> BraitenbergVehicle::get_light_sensors_const() const {
  return light_sensors_;
}

std::vector<Pose> BraitenbergVehicle::get_light_sensors() {
  return light_sensors_;
}

double BraitenbergVehicle::get_sensor_reading_left(const ArenaEntity* entity) {
  if (entity) {
    return 1800.0/std::pow(
      1.08, (entity->get_pose()-light_sensors_[0]).Length());
  }

  return 0.0001;
}

double BraitenbergVehicle::get_sensor_reading_right(const ArenaEntity* entity) {
  if (entity) {
    return 1800.0/std::pow(
      1.08, (entity->get_pose()-light_sensors_[1]).Length());
  }

  return 0.0001;
}

void BraitenbergVehicle::UpdateLightSensors() {
  for (unsigned int f = 0; f < light_sensors_.size(); f++) {
    Pose& pos = light_sensors_[f];
    if (f == 0) {
      pos.x = get_pose().x + get_radius() * cos(deg2rad(get_pose().theta - 40));
      pos.y = get_pose().y + get_radius() * sin(deg2rad(get_pose().theta - 40));
    } else {
      pos.x = get_pose().x + get_radius() * cos(deg2rad(get_pose().theta + 40));
      pos.y = get_pose().y + get_radius() * sin(deg2rad(get_pose().theta + 40));
    }
  }
}

void BraitenbergVehicle::LoadFromObject(const json_object* entity_config) {
  ArenaEntity::LoadFromObject(entity_config);
  json_object temp = *entity_config;
  if (temp.find("light_behavior") != temp.end()) {
      light_behavior_ = get_behavior_type(
        temp["light_behavior"].get<std::string>());
  }
  if (temp.find("food_behavior") != temp.end()) {
      food_behavior_ = get_behavior_type(
        temp["food_behavior"].get<std::string>());
  }
  if (temp.find("bv_behavior") != temp.end()) {
    bv_behavior_ = get_behavior_type(
      temp["bv_behavior"].get<std::string>());
  }

  UpdateLightSensors();
}

NAMESPACE_END(csci3081);
