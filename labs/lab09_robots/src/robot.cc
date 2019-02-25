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
Robot::Robot(int id, double radius, Point origin = (200,300), double speed = 1) {
	id_ = id;
 	radius_ = radius;
 	color_ = true;
  	origin_ = (512, 350);
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
    double delta = 0.1;

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
/*
bool Robot::get_vel(double *x_vel, double *y_vel) {

	double xnow, ynow, xprev, yprev;
    double t = speed_ * ;
    double delta = 0.1;

    xnow = circle_x(t);
    ynow = circle_y(t);
    xprev = circle_x(t - delta);
    yprev = circle_y(t - delta);

    *x_vel = xnow - xprev;
    *y_vel = ynow - yprev;
}*/
