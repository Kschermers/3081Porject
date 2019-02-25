/**
 * @file robot.c
 *
 * @copyright Kadin Schermers and CSCI 3081 Staff
 */
 
 /*******************************************************************************
 * Includes
 ******************************************************************************/
 #include "src/robot.h"

/*******************************************************************************
 * Constructors/Destructor
 ******************************************************************************/
Robot::Robot(int id, double radius, Point origin, double speed) {
	id_ = id;
 	radius_ = radius;
 	color_ = true;
  	origin_ = origin;
 	speed_ = speed;
 	position_ = origin;
 	direction_ = 0.0;
 	sensor_angle_ = 2.0;
 	sensor_range_ = 3.0 * radius_;
 	Update(0.0);
}
 
/*******************************************************************************
 * Member Functions
 ******************************************************************************/
void Robot::Update(double time) {
	
	double xvel, yvel, xnow, ynow, xprev, yprev;

    xnow = origin_.x_ + 200.0 * cos(time * speed_);
    ynow = origin_.y_ + 200.0 * sin(time * speed_);
    xprev = position_.x_;
    yprev = position_.y_;

    xvel = xnow - xprev;
    yvel = ynow - yprev;

    position_ = Point(xnow, ynow);
    direction_ = std::atan2(yvel, xvel);

}

bool Robot::get_color() {
	return color_;
}

void Robot::set_color (bool color) {
	color_ = color;
}

int Robot::get_id() {
	return id_;
}

double Robot::get_radius() {
	return radius_;
}

Point Robot::get_position() {
	return position_;
}

double Robot::get_direction() {
	return direction_;
}

double Robot::get_sensor_angle() {
	return sensor_angle_;
}

double Robot::get_sensor_range() {
	return sensor_range_;
}
