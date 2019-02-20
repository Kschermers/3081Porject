// Copyright 2019 Kadin Schermers

#include <utility>

#ifndef SRC_OBSTACLE_H_
#define SRC_OBSTACLE_H_

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/
/**
 * @brief Obstacle generates obstacle objects for the robot to avoid
 */
class Obstacle {
 public:
     Obstacle() : radius_(10), position_(20.0, 20.0) {}
     /**
     * @brief return the radius parameter of the Obstacle class
     * radius can be any positive int.
     *
     * @return radius of obstacle
     */
     int get_radius() {return radius_;}
     std::pair<double, double> get_pos() {return pos_;}
 private:
      int radius_;
      std::pair<double, double> pos_;
}

#endif  // SRC_OBSTACLE_H_
