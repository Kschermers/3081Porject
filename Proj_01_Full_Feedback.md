### Feedback for Proj 01

Run on March 12, 05:51:58 AM.

+ Pass: Checkout devel branch.



+ Pass: Report branch name.




#### System Files and Lab Directory Structure

+ Pass: Copy directory "Files for Dependencies".



+ Pass: Check that directory "project" exists.

+ Pass: Check that directory "project/src" exists.

+ Pass: Copy directory "Files for Testing".



+ Pass: Change into directory "project".


#### Compile Tests

+ Pass: Clean project.



+ Pass: Check that make compiles.



+ Pass: Check that file "build/bin/arenaviewer" exists.


#### Documentation Tests

+ Pass: Check that file "docs/uml_design.pdf" exists.

+ Fail: Check that file "docs/design.pdf" exists.

     "docs/design.pdf" not found.

+ Pass: Documentation builds.



+ Pass: Check that file "docs/html/index.html" exists.


#### Git Usage

+ Pass: Check git commit history
Sufficient commits (found=38,required=25)

+ Pass: Run git ls-remote to check for # of branches in repo
Sufficient branches (found=6,required=4)

+ Pass: Run git ls-remote gather all branches in repo

4f42618c3a0c88e5e965f15c12e6aa5ae9a116a3	refs/heads/devel

8ff74716127fe44df4f1e5bbc7ed8ac04e0c5ef8	refs/heads/fix/01-compilation-errors

8ff74716127fe44df4f1e5bbc7ed8ac04e0c5ef8	refs/heads/fix/02-robot-collision-error

0eecc4896c49c79fc3695998222c177cfaeb133d	refs/heads/master

fc9f4cd39fb0c68686fcf8b79ce1359abe7fdd06	refs/heads/test/factory-pattern-tests

21e8e70873b42c94f236632a85590d95adc9275d	refs/heads/test/generateDoxygen




#### Style Tests

+ Fail: Ensuring code follows style guide.

<pre>cd src; make check-style
make[1]: Entering directory '/classes/grades/Spring-2019/csci3081/dtorban/csci3081-grading-env/grading-scripts/grading/Proj_01_Full_Feedback/repo-scher528/project/src'
==== Checking style is correct ====
/classes/grades/Spring-2019/csci3081/dtorban/csci3081-grading-env/grading-scripts/grading/Proj_01_Full_Feedback/repo-scher528/cpplint/cpplint.py --root=.. *.cc *.h
arena.cc:239:  Missing space after ,  [whitespace/comma] [3]
arena.cc:47:  Add #include <string> for string  [build/include_what_you_use] [4]
braitenberg_vehicle.cc:46:  Redundant blank line at the start of a code block should be deleted.  [whitespace/blank_line] [2]
braitenberg_vehicle.cc:47:  Missing space before ( in if(  [whitespace/parens] [5]
braitenberg_vehicle.cc:113:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
braitenberg_vehicle.cc:118:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
braitenberg_vehicle_factory.cc:30:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
braitenberg_vehicle_factory.cc:38:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
controller.cc:36:  Extra space for operator !   [whitespace/operators] [4]
controller.cc:41:  An else should appear on the same line as the preceding }  [whitespace/newline] [4]
controller.cc:41:  If an else has a brace on one side, it should have it on both  [readability/braces] [5]
controller.cc:103:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
controller.cc:104:  Tab found; better to use spaces  [whitespace/tab] [1]
controller.cc:105:  Tab found; better to use spaces  [whitespace/tab] [1]
controller.cc:106:  Tab found; better to use spaces  [whitespace/tab] [1]
graphics_arena_viewer.cc:39:  Missing spaces around =  [whitespace/operators] [4]
graphics_arena_viewer.cc:46:  An else should appear on the same line as the preceding }  [whitespace/newline] [4]
graphics_arena_viewer.cc:46:  If an else has a brace on one side, it should have it on both  [readability/braces] [5]
light_factory.cc:30:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
arena_entity_factory.h:28:  public: should be indented +1 space inside class ArenaEntityFactory  [whitespace/indent] [3]
arena_entity_factory.h:29:  Do not leave a blank line after "public:"  [whitespace/blank_line] [3]
arena_entity.h:141:  Is this a non-const reference? If so, make const or use a pointer: json_object& entity_config  [runtime/references] [2]
arena.h:52:  Zero-parameter constructors should not be marked explicit.  [runtime/explicit] [5]
arena.h:55:  Is this a non-const reference? If so, make const or use a pointer: json_object& arena_object  [runtime/references] [2]
behavior_enum.h:37:  Add #include <string> for string  [build/include_what_you_use] [4]
braitenberg_vehicle_factory.h:7:  #ifndef header guard has wrong style, please use: SRC_BRAITENBERG_VEHICLE_FACTORY_H_  [build/header_guard] [5]
braitenberg_vehicle_factory.h:56:  #endif line should be "#endif  // SRC_BRAITENBERG_VEHICLE_FACTORY_H_"  [build/header_guard] [5]
braitenberg_vehicle_factory.h:29:  public: should be indented +1 space inside class BraitenbergVehicleFactory  [whitespace/indent] [3]
braitenberg_vehicle_factory.h:46:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
common.h:15:  <chrono> is an unapproved C++11 header.  [build/c++11] [5]
common.h:22:  Is this a non-const reference? If so, make const or use a pointer: json_value& v  [runtime/references] [2]
common.h:23:  Is this a non-const reference? If so, make const or use a pointer: json_value& v  [runtime/references] [2]
common.h:24:  Tab found; better to use spaces  [whitespace/tab] [1]
common.h:23:  Add #include <string> for string  [build/include_what_you_use] [4]
entity_type.h:14:  Found C++ system header after other header. Should be: entity_type.h, c system, c++ system, other.  [build/include_order] [4]
food_factory.h:29:  public: should be indented +1 space inside class FoodFactory  [whitespace/indent] [3]
graphics_arena_viewer.h:171:  "virtual" is redundant since function is already declared as "override"  [readability/inheritance] [4]
light_factory.h:29:  public: should be indented +1 space inside class LightFactory  [whitespace/indent] [3]
light_factory.h:38:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
mainpage.h:0:  No copyright message found.  You should have a line: "Copyright [year] <Copyright Owner>"  [legal/copyright] [5]
mainpage.h:0:  No #ifndef header guard found, suggested CPP variable is: SRC_MAINPAGE_H_  [build/header_guard] [5]
Done processing arena.cc
Done processing braitenberg_vehicle.cc
Done processing braitenberg_vehicle_factory.cc
Done processing controller.cc
Done processing food.cc
Done processing food_factory.cc
Done processing graphics_arena_viewer.cc
Done processing light.cc
Done processing light_factory.cc
Done processing main.cc
Done processing motion_behavior.cc
Done processing motion_behavior_differential.cc
Done processing rgb_color.cc
Done processing arena_entity_factory.h
Done processing arena_entity.h
Done processing arena.h
Done processing arena_immobile_entity.h
Done processing arena_mobile_entity.h
Done processing arena_viewer.h
Done processing behavior_enum.h
Done processing braitenberg_vehicle_factory.h
Done processing braitenberg_vehicle.h
Done processing common.h
Done processing controller.h
Done processing entity_type.h
Done processing food_factory.h
Done processing food.h
Done processing graphics_arena_viewer.h
Done processing light_factory.h
Done processing light.h
Done processing mainpage.h
Done processing motion_behavior_differential.h
Done processing motion_behavior.h
Done processing params.h
Done processing pose.h
Done processing rgb_color.h
Done processing wheel_velocity.h
Total errors found: 41
Makefile:162: recipe for target 'check-style' failed
make[1]: *** [check-style] Error 1
make[1]: Leaving directory '/classes/grades/Spring-2019/csci3081/dtorban/csci3081-grading-env/grading-scripts/grading/Proj_01_Full_Feedback/repo-scher528/project/src'
Makefile:8: recipe for target 'check-style' failed
make: *** [check-style] Error 2
</pre>




#### Unit Tests

+ Pass: Check that file "build/bin/unittest" exists.

+ Pass: Check that a GoogleTest test passes.
    passes the test: InstBraitenbergVehicle.ColorMatchesBehavior.



+ Pass: Check that a GoogleTest test passes.
    passes the test: InstBraitenbergVehicle.RobotMovesInEmptyScene.



