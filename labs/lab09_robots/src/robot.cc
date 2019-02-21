/**
 * @file robot.c
 *
 * @copyright Kadin Schermers and CSCI 3081 Staff
 */
 
 /******************************************************************************
 * Includes
 ******************************************************************************/
 #include "src/robot.h"
 #include <cmath>

/*******************************************************************************
 * Namespaces
 ******************************************************************************/
 
/*******************************************************************************
 * Constructors/Destructor
 ******************************************************************************/
Robot::Robot(int id, double radius, Point origin, double speed) {
	id_ = id;
 	radius_ = radius;
 	color_ = true;  //idk yet
  	origin_ = (512, 350);
 	speed_ = speed;
 	position_ = origin;
    direction_ = 0.0;  //idk yet
    sensor_angle_ = 0.0;  //idk yet
    sensor_range_ = 0.0;  //idk yet
}
 
/*******************************************************************************
 * Member Functions
 ******************************************************************************/
void Robot::Update(double time) {
	
	double xvel, yvel, xnow, ynow, xprev, yprev;
    double delta = 0.1;
    double t = speed_ * time;

    xnow = circle_x(t);
    ynow = circle_y(t);
    xprev = circle_x(t - delta);
    yprev = circle_y(t - delta);

    xvel = xnow - xprev;
    yvel = ynow - yprev;

    position_ = (xnow, ynow);
    direction_ = atan2(yvel, xvel);

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
