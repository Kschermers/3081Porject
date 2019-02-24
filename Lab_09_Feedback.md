### Feedback for Lab 09

Run on February 21, 14:20:01 PM.


#### System Files and Lab Directory Structure

+ Pass: Copy directory "Files for Dependencies".



+ Pass: Check that directory "labs" exists.

+ Pass: Check that directory "labs/lab09_robots" exists.

+ Pass: Change into directory "labs/lab09_robots".

+ Pass: Check that make compiles.



+ Pass: Copy directory "Files for Testing".



+ Pass: Change into directory "Lab09".

+ Pass: Check that make compiles.



+ Pass: Check that directory "../build/bin" exists.

+ Pass: Check that a GoogleTest test passes.
    passes the test: RobotTest.ConstructorUserDefined.



+ Fail: Check that a GoogleTest test passes.
    fails the test: RobotTest.ConstructorDefault.
<pre>
[ RUN      ] RobotTest.ConstructorDefault
robot_unittest.cc:31: Failure
Expected equality of these values:
  robot0->get_position().x_
    Which is: 0
  200
FAIL: pos x_ in constructor
robot_unittest.cc:33: Failure
Expected equality of these values:
  robot1->get_position().x_
    Which is: 0
  200
FAIL: pos x_ in constructor
robot_unittest.cc:35: Failure
Expected equality of these values:
  robot0->get_sensor_angle()
    Which is: 0
  2.0
    Which is: 2
FAIL: sensor angle in constructor
robot_unittest.cc:36: Failure
Expected equality of these values:
  robot0->get_sensor_range()
    Which is: 0
  150
FAIL: sensor range in constructor</pre>



+ Skip: Check that a GoogleTest test passes.

  This test was not run because of an earlier failing test.

+ Skip: Check that a GoogleTest test passes.

  This test was not run because of an earlier failing test.

