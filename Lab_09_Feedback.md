### Feedback for Lab 09

Run on February 24, 17:24:30 PM.


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
In file included from ../src/robot_viewer.h:14:0,
                 from robot_viewer.cc:10:
../src/robot_land.h: In member function ‘void RobotLand::AdvanceTime(double)’:
../src/robot_land.h:63:6: error: ‘robot0’ was not declared in this scope
     *robot0->Update(time);
      ^~~~~~
../src/robot_land.h:63:6: note: suggested alternative: ‘Robot’
     *robot0->Update(time);
      ^~~~~~
      Robot
../src/robot_land.h:64:6: error: ‘robot1’ was not declared in this scope
     *robot1->Update(time);
      ^~~~~~
../src/robot_land.h:64:6: note: suggested alternative: ‘Robot’
     *robot1->Update(time);
      ^~~~~~
      Robot
Makefile:105: recipe for target '../build/obj/src/robot_viewer.o' failed
make[1]: *** [../build/obj/src/robot_viewer.o] Error 1
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

