### Feedback for Lab 09

Run on February 24, 15:55:46 PM.


#### System Files and Lab Directory Structure

+ Pass: Copy directory "Files for Dependencies".



+ Pass: Check that directory "labs" exists.

+ Pass: Check that directory "labs/lab09_robots" exists.

+ Pass: Change into directory "labs/lab09_robots".

+ Pass: Check that make compiles.



+ Pass: Copy directory "Files for Testing".



+ Pass: Change into directory "Lab09".

+ Fail: Check that make compiles.

    Make compile fails with errors:.
<pre>==== Auto-Generating Dependencies for ../src/robot_land.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/robot_land.d -MP -MT ../build/obj/tests/robot_land.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0  -std=c++14 ../src/robot_land.cc
==== Compiling ../src/robot_land.cc into ../build/obj/tests/robot_land.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0  -std=c++14  -c -o  ../build/obj/tests/robot_land.o ../src/robot_land.cc
==== Auto-Generating Dependencies for robot_unittest.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/robot_unittest.d -MP -MT ../build/obj/tests/robot_unittest.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0  -std=c++14 robot_unittest.cc
==== Compiling robot_unittest.cc into ../build/obj/tests/robot_unittest.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0  -std=c++14  -c -o  ../build/obj/tests/robot_unittest.o robot_unittest.cc
==== Linking ../build/bin/unittest. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -L/classes/grades/Spring-2019/csci3081/csel-s19c3081/lib -pthread -fprofile-arcs -ftest-coverage ../build/obj/tests/robot_land.o ../build/obj/tests/robot_unittest.o -o ../build/bin/unittest -lgtest_main -lgtest -lgmock 
../build/obj/tests/robot_unittest.o: In function `RobotTest_ConstructorUserDefined_Test::TestBody()':
/class/grades/Spring-2019/csci3081/student-repos/Lab_09_Feedback/repo-scher528/labs/lab09_robots/Lab09/robot_unittest.cc:24: undefined reference to `Robot::get_id()'
/class/grades/Spring-2019/csci3081/student-repos/Lab_09_Feedback/repo-scher528/labs/lab09_robots/Lab09/robot_unittest.cc:25: undefined reference to `Robot::get_radius()'
../build/obj/tests/robot_unittest.o: In function `RobotTest_ConstructorDefault_Test::TestBody()':
/class/grades/Spring-2019/csci3081/student-repos/Lab_09_Feedback/repo-scher528/labs/lab09_robots/Lab09/robot_unittest.cc:29: undefined reference to `Robot::get_color()'
/class/grades/Spring-2019/csci3081/student-repos/Lab_09_Feedback/repo-scher528/labs/lab09_robots/Lab09/robot_unittest.cc:30: undefined reference to `Robot::get_direction()'
/class/grades/Spring-2019/csci3081/student-repos/Lab_09_Feedback/repo-scher528/labs/lab09_robots/Lab09/robot_unittest.cc:31: undefined reference to `Robot::get_position()'
/class/grades/Spring-2019/csci3081/student-repos/Lab_09_Feedback/repo-scher528/labs/lab09_robots/Lab09/robot_unittest.cc:32: undefined reference to `Robot::get_position()'
/class/grades/Spring-2019/csci3081/student-repos/Lab_09_Feedback/repo-scher528/labs/lab09_robots/Lab09/robot_unittest.cc:33: undefined reference to `Robot::get_position()'
/class/grades/Spring-2019/csci3081/student-repos/Lab_09_Feedback/repo-scher528/labs/lab09_robots/Lab09/robot_unittest.cc:34: undefined reference to `Robot::get_position()'
/class/grades/Spring-2019/csci3081/student-repos/Lab_09_Feedback/repo-scher528/labs/lab09_robots/Lab09/robot_unittest.cc:35: undefined reference to `Robot::get_sensor_angle()'
/class/grades/Spring-2019/csci3081/student-repos/Lab_09_Feedback/repo-scher528/labs/lab09_robots/Lab09/robot_unittest.cc:36: undefined reference to `Robot::get_sensor_range()'
../build/obj/tests/robot_unittest.o: In function `RobotTest_UpdateRobot0_Test::TestBody()':
/class/grades/Spring-2019/csci3081/student-repos/Lab_09_Feedback/repo-scher528/labs/lab09_robots/Lab09/robot_unittest.cc:45: undefined reference to `Robot::Update(double)'
/class/grades/Spring-2019/csci3081/student-repos/Lab_09_Feedback/repo-scher528/labs/lab09_robots/Lab09/robot_unittest.cc:46: undefined reference to `Robot::get_position()'
/class/grades/Spring-2019/csci3081/student-repos/Lab_09_Feedback/repo-scher528/labs/lab09_robots/Lab09/robot_unittest.cc:47: undefined reference to `Robot::get_position()'
/class/grades/Spring-2019/csci3081/student-repos/Lab_09_Feedback/repo-scher528/labs/lab09_robots/Lab09/robot_unittest.cc:48: undefined reference to `Robot::get_direction()'
../build/obj/tests/robot_unittest.o: In function `RobotTest_UpdateRobot1_Test::TestBody()':
/class/grades/Spring-2019/csci3081/student-repos/Lab_09_Feedback/repo-scher528/labs/lab09_robots/Lab09/robot_unittest.cc:57: undefined reference to `Robot::Update(double)'
/class/grades/Spring-2019/csci3081/student-repos/Lab_09_Feedback/repo-scher528/labs/lab09_robots/Lab09/robot_unittest.cc:58: undefined reference to `Robot::get_position()'
/class/grades/Spring-2019/csci3081/student-repos/Lab_09_Feedback/repo-scher528/labs/lab09_robots/Lab09/robot_unittest.cc:59: undefined reference to `Robot::get_position()'
/class/grades/Spring-2019/csci3081/student-repos/Lab_09_Feedback/repo-scher528/labs/lab09_robots/Lab09/robot_unittest.cc:60: undefined reference to `Robot::get_direction()'
../build/obj/tests/robot_unittest.o: In function `RobotTest::SetUp()':
/class/grades/Spring-2019/csci3081/student-repos/Lab_09_Feedback/repo-scher528/labs/lab09_robots/Lab09/robot_unittest.cc:12: undefined reference to `Robot::Robot(int, double, Point, double)'
/class/grades/Spring-2019/csci3081/student-repos/Lab_09_Feedback/repo-scher528/labs/lab09_robots/Lab09/robot_unittest.cc:13: undefined reference to `Robot::Robot(int, double, Point, double)'
collect2: error: ld returned 1 exit status
Makefile:184: recipe for target '../build/bin/unittest' failed
make: *** [../build/bin/unittest] Error 1
</pre>



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

