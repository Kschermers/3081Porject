/* Written By: Kadin Schermers
 * UMN ID: scher528
 * Written For: CSCI 3081W S19
 * Assignment: Lab 3
 * Date: 1/29/2019
 * File: point2.cc
 */

#include <iostream>
#include <cmath>
#include "point2.h"

using namespace std;

Point2::Point2() {
    this -> x = 0;
    this -> y = 0;
}

Point2::Point2(double a, double b) {
    this -> x = a;
    this -> y = b;
}

float Point2::DistanceBetween(Point2 p) {
    double exp = 2.0;
    double thisx = (double) this -> x;
    double thisy = (double) this -> y;
    double px = (double) p.x;
    double py = (double) p.y;
    
    return (float) sqrt( (pow((px - thisx),exp)) + (pow((py - thisy),exp)) );
}

int Point2::Quadrant() {
    int x = (int) this -> x;
    int y = (int) this -> y;
    
    if (x == 0 && y == 0) {
        return 0;
    } else {
        if (x > 0 && y >= 0) {
            return 1;
        } else if ( x <= 0 && y > 0) {
            return 2;
        } else if ( x < 0 && y <= 0) {
            return 3;
        } else {
            return 4;
        }
    }
}

void Point2::Print() {
    cout << "Point with X value of " << this -> x << " and Y value of " << this -> y;
}
