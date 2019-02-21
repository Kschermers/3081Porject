### Feedback for Lab 09

Run on February 21, 13:39:20 PM.


#### System Files and Lab Directory Structure

+ Pass: Copy directory "Files for Dependencies".



+ Pass: Check that directory "labs" exists.

+ Pass: Check that directory "labs/lab09_robots" exists.

+ Pass: Change into directory "labs/lab09_robots".

+ Fail: Check that make compiles.

    Make compile fails with errors:.
<pre>make -C src all
make[1]: Entering directory '/class/grades/Spring-2019/csci3081/student-repos/Lab_09_Feedback/repo-scher528/labs/lab09_robots/src'
==== Auto-Generating Dependencies for robot_viewer.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/src/robot_viewer.d -MP -MT ../build/obj/src/robot_viewer.o -W -Wall -g -std=c++14 -Wno-unused -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0 robot_viewer.cc
==== Compiling robot_viewer.cc into ../build/obj/src/robot_viewer.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -W -Wall -g -std=c++14 -Wno-unused -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/robot_viewer.o robot_viewer.cc
==== Auto-Generating Dependencies for robot_land.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/src/robot_land.d -MP -MT ../build/obj/src/robot_land.o -W -Wall -g -std=c++14 -Wno-unused -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0 robot_land.cc
==== Compiling robot_land.cc into ../build/obj/src/robot_land.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -W -Wall -g -std=c++14 -Wno-unused -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/robot_land.o robot_land.cc
==== Auto-Generating Dependencies for main.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/src/main.d -MP -MT ../build/obj/src/main.o -W -Wall -g -std=c++14 -Wno-unused -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0 main.cc
==== Compiling main.cc into ../build/obj/src/main.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -W -Wall -g -std=c++14 -Wno-unused -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/main.o main.cc
==== Auto-Generating Dependencies for robot.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/src/robot.d -MP -MT ../build/obj/src/robot.o -W -Wall -g -std=c++14 -Wno-unused -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0 robot.cc
==== Compiling robot.cc into ../build/obj/src/robot.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -W -Wall -g -std=c++14 -Wno-unused -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/robot.o robot.cc
In file included from robot.cc:10:0:
../src/robot.h:30:31: error: ‘Point’ has not been declared
  Robot(int id, double radius, Point origin, double speed);
                               ^~~~~
../src/robot.h:43:3: error: ‘Point’ does not name a type; did you mean ‘int’?
   Point get_position();
   ^~~~~
   int
../src/robot.h:52:3: error: ‘Point’ does not name a type; did you mean ‘int’?
   Point origin_;   // center of circle around which robot is rotating
   ^~~~~
   int
../src/robot.h:54:3: error: ‘Point’ does not name a type; did you mean ‘int’?
   Point position_; // current {x,y} position in graphics window
   ^~~~~
   int
robot.cc:15:37: error: ‘Point’ has not been declared
 Robot::Robot(int id, double radius, Point origin, double speed) {
                                     ^~~~~
robot.cc: In constructor ‘Robot::Robot(int, double, int, double)’:
robot.cc:19:4: error: ‘origin_’ was not declared in this scope
    origin_ = (512, 350);
    ^~~~~~~
robot.cc:19:4: note: suggested alternative: ‘origin’
    origin_ = (512, 350);
    ^~~~~~~
    origin
robot.cc:21:3: error: ‘position_’ was not declared in this scope
   position_ = origin;
   ^~~~~~~~~
robot.cc:21:3: note: suggested alternative: ‘direction_’
   position_ = origin;
   ^~~~~~~~~
   direction_
robot.cc:23:3: error: expected ‘;’ before ‘sensor_angle_’
   sensor_angle_ = 0.0  //idk yet
   ^~~~~~~~~~~~~
robot.cc: In member function ‘void Robot::Update(double)’:
robot.cc:35:12: error: ‘circle_x’ was not declared in this scope
     xnow = circle_x(t);
            ^~~~~~~~
robot.cc:36:12: error: ‘circle_y’ was not declared in this scope
     ynow = circle_y(t);
            ^~~~~~~~
robot.cc:37:26: error: ‘delta’ was not declared in this scope
     xprev = circle_x(t - delta);
                          ^~~~~
robot.cc:43:5: error: ‘position_’ was not declared in this scope
     position_ = (xnow, ynow);
     ^~~~~~~~~
robot.cc:43:5: note: suggested alternative: ‘direction_’
     position_ = (xnow, ynow);
     ^~~~~~~~~
     direction_
robot.cc:44:23: error: ‘atan2’ is not a member of ‘std’
     direction_ = std::atan2(yvel, xvel);
                       ^~~~~
robot.cc: At global scope:
robot.cc:64:1: error: ‘Point’ does not name a type; did you mean ‘int’?
 Point Robot::get_position() {
 ^~~~~
 int
Makefile:105: recipe for target '../build/obj/src/robot.o' failed
make[1]: *** [../build/obj/src/robot.o] Error 1
make[1]: Leaving directory '/class/grades/Spring-2019/csci3081/student-repos/Lab_09_Feedback/repo-scher528/labs/lab09_robots/src'
Makefile:14: recipe for target 'proj01' failed
make: *** [proj01] Error 2
</pre>



+ Skip: Copy directory "Files for Testing".

  This test was not run because of an earlier failing test.

+ Skip: Change into directory "Lab09".

  This test was not run because of an earlier failing test.

+ Skip: Check that make compiles.

  This test was not run because of an earlier failing test.

+ Skip: Check that directory "../build/bin" exists.

  This test was not run because of an earlier failing test.

+ Skip: Check that a GoogleTest test passes.

  This test was not run because of an earlier failing test.

+ Skip: Check that a GoogleTest test passes.

  This test was not run because of an earlier failing test.

+ Skip: Check that a GoogleTest test passes.

  This test was not run because of an earlier failing test.

+ Skip: Check that a GoogleTest test passes.

  This test was not run because of an earlier failing test.

