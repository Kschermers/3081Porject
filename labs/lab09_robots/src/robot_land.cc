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
 RobotLand::RobotLand() {

    Robot * robot0 = new Robot(0,50,(200,300),1);
    Robot * robot1 = new Robot(1,50,(200,300),.75);
  
  }

/*******************************************************************************
 * Member Functions
 ******************************************************************************/

void AdvanceTime(double dt) {
    sim_time_ += dt;
    *robot0->Update(time);
    *robot1->Update(time);
    std::cout << "Advancing simulation time to " << sim_time_ << std::endl;
}

Robot * RobotLand::get_robot(int id) {
  if (id == 1) {
    return *robot1;
  } else if (id == 0) { 
    return *robot0;
  } else {
    return NULL;
  }
}

// Hard coded for now...
void RobotLand::get_obstacle_pos(double *x_pos, double *y_pos) {
  *x_pos = 200;
  *y_pos = 300;
}
