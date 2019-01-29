/* Written By: Kadin Schermers
 * UMN ID: scher528
 * Written For: CSCI 3081W S19
 * Assignment: Lab 3
 * Date: 1/29/2019
 * File: point2.h
 */

#ifndef POINT2_H
#define POINT2_H

class Point2 {
private:
    float x, y;
public:
    Point2();
    Point2(int x, int y);
    float DistanceBetween(Point2);
    int Quadrant();
    void Print();
};

#endif
