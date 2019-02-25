/**
 * @file robot_land.cc
 *
 * @copyright 201 3081 Staff, All rights reserved.
 */

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "src/robot_land.h"

/*******************************************************************************
 * Constructors/Destructor
 ******************************************************************************/
 RobotLand::RobotLand(void) {

    Robot * robot0 = new Robot(0, 50.0, Point(512.0, 350.0), 1.0);
    Robot * robot1 = new Robot(1, 50.0, Point(512.0, 350.0), .75);
  
  }

RobotLand::~RobotLand() {

  delete robot0;
  delete robot1;
}

/*******************************************************************************
 * Member Functions
 ******************************************************************************/

Robot * RobotLand::get_robot(int id) {
  if (id == 1) {
    return robot1;
  } else if (id == 0) { 
    return robot0;
  } else {
    return NULL;
  }
}

// Hard coded for now...
void RobotLand::get_obstacle_pos(double *x_pos, double *y_pos) {
  *x_pos = 200;
  *y_pos = 300;
}
