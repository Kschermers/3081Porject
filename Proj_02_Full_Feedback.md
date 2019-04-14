### Feedback for Proj 02

Run on April 13, 19:31:43 PM.

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

+ Pass: Documentation builds.



+ Pass: Check that file "docs/html/index.html" exists.


#### Git Usage

+ Pass: Check git commit history
Commits found=50

+ Pass: Run git ls-remote gather all branches in repo

30b9f3bb98793db41ad4f019004672ef22e3f02c	refs/heads/devel

8ff74716127fe44df4f1e5bbc7ed8ac04e0c5ef8	refs/heads/fix/01-compilation-errors

8ff74716127fe44df4f1e5bbc7ed8ac04e0c5ef8	refs/heads/fix/02-robot-collision-error

59bcb58c346db092c4b4d808f4e45139b4bc10b1	refs/heads/master

40ba70ffd31a9639d7e0192c259788aef403ae41	refs/heads/pre-release/iteration1

9fbae6feb8f56dadd43dbdbfe6696c5370b21603	refs/heads/release/iteration1

36b28d3a300dcb15bd7f176b2c757bb3dd48e12c	refs/heads/release/iteration2-prelim1

aeb161923ea0a6b09252911fb7db7c9b534b73f9	refs/heads/release/iteration2-prelim2

fc9f4cd39fb0c68686fcf8b79ce1359abe7fdd06	refs/heads/test/factory-pattern-tests

21e8e70873b42c94f236632a85590d95adc9275d	refs/heads/test/generateDoxygen




#### Git Issue Usage

+ Pass: Configuring GHI

+ Pass: Run ghi for total number of open issues in Github repo (Found: 1)

[OPEN issue #2] :  Json files not properly loading 





+ Pass: Run ghi for total number of closed issues in Github repo (Found: 1)

[CLOSED issue #1] :  Seg Fault on BV Behavior Switch 1






#### Style Tests

+ Fail: Ensuring code follows style guide.

<pre>cd src; make check-style
make[1]: Entering directory '/classes/grades/Spring-2019/csci3081/dtorban/csci3081-grading-env/grading-scripts/grading/Proj_02_Full_Feedback/repo-scher528/project/src'
==== Checking style is correct ====
/classes/grades/Spring-2019/csci3081/dtorban/csci3081-grading-env/grading-scripts/grading/Proj_02_Full_Feedback/repo-scher528/cpplint/cpplint.py --root=.. *.cc *.h
aggresive_behavior.h:7:  #ifndef header guard has wrong style, please use: SRC_AGGRESIVE_BEHAVIOR_H_  [build/header_guard] [5]
aggresive_behavior.h:51:  #endif line should be "#endif  // SRC_AGGRESIVE_BEHAVIOR_H_"  [build/header_guard] [5]
arena_entity_factory.h:7:  #ifndef header guard has wrong style, please use: SRC_ARENA_ENTITY_FACTORY_H_  [build/header_guard] [5]
arena_entity_factory.h:42:  #endif line should be "#endif  // SRC_ARENA_ENTITY_FACTORY_H_"  [build/header_guard] [5]
arena_entity.h:7:  #ifndef header guard has wrong style, please use: SRC_ARENA_ENTITY_H_  [build/header_guard] [5]
arena_entity.h:164:  #endif line should be "#endif  // SRC_ARENA_ENTITY_H_"  [build/header_guard] [5]
arena.h:7:  #ifndef header guard has wrong style, please use: SRC_ARENA_H_  [build/header_guard] [5]
arena.h:164:  #endif line should be "#endif  // SRC_ARENA_H_"  [build/header_guard] [5]
arena_immobile_entity.h:7:  #ifndef header guard has wrong style, please use: SRC_ARENA_IMMOBILE_ENTITY_H_  [build/header_guard] [5]
arena_immobile_entity.h:44:  #endif line should be "#endif  // SRC_ARENA_IMMOBILE_ENTITY_H_"  [build/header_guard] [5]
arena_mobile_entity.h:7:  #ifndef header guard has wrong style, please use: SRC_ARENA_MOBILE_ENTITY_H_  [build/header_guard] [5]
arena_mobile_entity.h:69:  #endif line should be "#endif  // SRC_ARENA_MOBILE_ENTITY_H_"  [build/header_guard] [5]
arena_viewer.h:7:  #ifndef header guard has wrong style, please use: SRC_ARENA_VIEWER_H_  [build/header_guard] [5]
arena_viewer.h:23:  #endif line should be "#endif  // SRC_ARENA_VIEWER_H_"  [build/header_guard] [5]
behavior_enum.h:7:  #ifndef header guard has wrong style, please use: SRC_BEHAVIOR_ENUM_H_  [build/header_guard] [5]
behavior_enum.h:55:  #endif line should be "#endif  // SRC_BEHAVIOR_ENUM_H_"  [build/header_guard] [5]
behavior_pattern.h:7:  #ifndef header guard has wrong style, please use: SRC_BEHAVIOR_PATTERN_H_  [build/header_guard] [5]
behavior_pattern.h:45:  #endif line should be "#endif  // SRC_BEHAVIOR_PATTERN_H_"  [build/header_guard] [5]
braitenberg_vehicle_factory.h:7:  #ifndef header guard has wrong style, please use: SRC_BRAITENBERG_VEHICLE_FACTORY_H_  [build/header_guard] [5]
braitenberg_vehicle_factory.h:56:  #endif line should be "#endif  // SRC_BRAITENBERG_VEHICLE_FACTORY_H_"  [build/header_guard] [5]
braitenberg_vehicle.h:7:  #ifndef header guard has wrong style, please use: SRC_BRAITENBERG_VEHICLE_H_  [build/header_guard] [5]
braitenberg_vehicle.h:131:  #endif line should be "#endif  // SRC_BRAITENBERG_VEHICLE_H_"  [build/header_guard] [5]
common.h:7:  #ifndef header guard has wrong style, please use: SRC_COMMON_H_  [build/header_guard] [5]
common.h:61:  #endif line should be "#endif  // SRC_COMMON_H_"  [build/header_guard] [5]
controller.h:7:  #ifndef header guard has wrong style, please use: SRC_CONTROLLER_H_  [build/header_guard] [5]
controller.h:84:  #endif line should be "#endif  // SRC_CONTROLLER_H_"  [build/header_guard] [5]
coward_behavior.h:7:  #ifndef header guard has wrong style, please use: SRC_COWARD_BEHAVIOR_H_  [build/header_guard] [5]
coward_behavior.h:51:  #endif line should be "#endif  // SRC_COWARD_BEHAVIOR_H_"  [build/header_guard] [5]
entity_type.h:7:  #ifndef header guard has wrong style, please use: SRC_ENTITY_TYPE_H_  [build/header_guard] [5]
entity_type.h:42:  #endif line should be "#endif  // SRC_ENTITY_TYPE_H_"  [build/header_guard] [5]
explore_behavior.h:7:  #ifndef header guard has wrong style, please use: SRC_EXPLORE_BEHAVIOR_H_  [build/header_guard] [5]
explore_behavior.h:51:  #endif line should be "#endif  // SRC_EXPLORE_BEHAVIOR_H_"  [build/header_guard] [5]
food_factory.h:7:  #ifndef header guard has wrong style, please use: SRC_FOOD_FACTORY_H_  [build/header_guard] [5]
food_factory.h:48:  #endif line should be "#endif  // SRC_FOOD_FACTORY_H_"  [build/header_guard] [5]
food.h:7:  #ifndef header guard has wrong style, please use: SRC_FOOD_H_  [build/header_guard] [5]
food.h:77:  #endif line should be "#endif  // SRC_FOOD_H_"  [build/header_guard] [5]
graphics_arena_viewer.h:7:  #ifndef header guard has wrong style, please use: SRC_GRAPHICS_ARENA_VIEWER_H_  [build/header_guard] [5]
graphics_arena_viewer.h:280:  #endif line should be "#endif  // SRC_GRAPHICS_ARENA_VIEWER_H_"  [build/header_guard] [5]
light_factory.h:7:  #ifndef header guard has wrong style, please use: SRC_LIGHT_FACTORY_H_  [build/header_guard] [5]
light_factory.h:48:  #endif line should be "#endif  // SRC_LIGHT_FACTORY_H_"  [build/header_guard] [5]
light.h:7:  #ifndef header guard has wrong style, please use: SRC_LIGHT_H_  [build/header_guard] [5]
light.h:72:  #endif line should be "#endif  // SRC_LIGHT_H_"  [build/header_guard] [5]
love_behavior.h:7:  #ifndef header guard has wrong style, please use: SRC_LOVE_BEHAVIOR_H_  [build/header_guard] [5]
love_behavior.h:51:  #endif line should be "#endif  // SRC_LOVE_BEHAVIOR_H_"  [build/header_guard] [5]
mainpage.h:7:  #ifndef header guard has wrong style, please use: SRC_MAINPAGE_H_  [build/header_guard] [5]
mainpage.h:11:  #endif line should be "#endif  // SRC_MAINPAGE_H_"  [build/header_guard] [5]
motion_behavior_differential.h:7:  #ifndef header guard has wrong style, please use: SRC_MOTION_BEHAVIOR_DIFFERENTIAL_H_  [build/header_guard] [5]
motion_behavior_differential.h:87:  #endif line should be "#endif  // SRC_MOTION_BEHAVIOR_DIFFERENTIAL_H_"  [build/header_guard] [5]
motion_behavior.h:7:  #ifndef header guard has wrong style, please use: SRC_MOTION_BEHAVIOR_H_  [build/header_guard] [5]
motion_behavior.h:64:  #endif line should be "#endif  // SRC_MOTION_BEHAVIOR_H_"  [build/header_guard] [5]
observer.h:6:  #ifndef header guard has wrong style, please use: SRC_OBSERVER_H_  [build/header_guard] [5]
observer.h:31:  #endif line should be "#endif  // SRC_OBSERVER_H_"  [build/header_guard] [5]
params.h:7:  #ifndef header guard has wrong style, please use: SRC_PARAMS_H_  [build/header_guard] [5]
params.h:80:  #endif line should be "#endif  // SRC_PARAMS_H_"  [build/header_guard] [5]
pose.h:7:  #ifndef header guard has wrong style, please use: SRC_POSE_H_  [build/header_guard] [5]
pose.h:95:  #endif line should be "#endif  // SRC_POSE_H_"  [build/header_guard] [5]
predator.h:7:  #ifndef header guard has wrong style, please use: SRC_PREDATOR_H_  [build/header_guard] [5]
predator.h:34:  #endif line should be "#endif  // SRC_PREDATOR_H_"  [build/header_guard] [5]
rgb_color.h:7:  #ifndef header guard has wrong style, please use: SRC_RGB_COLOR_H_  [build/header_guard] [5]
rgb_color.h:78:  #endif line should be "#endif  // SRC_RGB_COLOR_H_"  [build/header_guard] [5]
subject.h:6:  #ifndef header guard has wrong style, please use: SRC_SUBJECT_H_  [build/header_guard] [5]
subject.h:34:  #endif line should be "#endif  // SRC_SUBJECT_H_"  [build/header_guard] [5]
wheel_velocity.h:7:  #ifndef header guard has wrong style, please use: SRC_WHEEL_VELOCITY_H_  [build/header_guard] [5]
wheel_velocity.h:74:  #endif line should be "#endif  // SRC_WHEEL_VELOCITY_H_"  [build/header_guard] [5]
Done processing aggresive_behavior.cc
Done processing arena.cc
Done processing braitenberg_vehicle.cc
Done processing braitenberg_vehicle_factory.cc
Done processing controller.cc
Done processing coward_behavior.cc
Done processing explore_behavior.cc
Done processing food.cc
Done processing food_factory.cc
Done processing graphics_arena_viewer.cc
Done processing light.cc
Done processing light_factory.cc
Done processing love_behavior.cc
Done processing main.cc
Done processing motion_behavior.cc
Done processing motion_behavior_differential.cc
Done processing predator.cc
Done processing rgb_color.cc
Done processing aggresive_behavior.h
Done processing arena_entity_factory.h
Done processing arena_entity.h
Done processing arena.h
Done processing arena_immobile_entity.h
Done processing arena_mobile_entity.h
Done processing arena_viewer.h
Done processing behavior_enum.h
Done processing behavior_pattern.h
Done processing braitenberg_vehicle_factory.h
Done processing braitenberg_vehicle.h
Done processing common.h
Done processing controller.h
Done processing coward_behavior.h
Done processing entity_type.h
Done processing explore_behavior.h
Done processing food_factory.h
Done processing food.h
Done processing graphics_arena_viewer.h
Done processing light_factory.h
Done processing light.h
Done processing love_behavior.h
Done processing mainpage.h
Done processing motion_behavior_differential.h
Done processing motion_behavior.h
Done processing observer.h
Done processing params.h
Done processing pose.h
Done processing predator.h
Done processing rgb_color.h
Done processing subject.h
Done processing wheel_velocity.h
Total errors found: 64
Makefile:162: recipe for target 'check-style' failed
make[1]: *** [check-style] Error 1
make[1]: Leaving directory '/classes/grades/Spring-2019/csci3081/dtorban/csci3081-grading-env/grading-scripts/grading/Proj_02_Full_Feedback/repo-scher528/project/src'
Makefile:8: recipe for target 'check-style' failed
make: *** [check-style] Error 2
</pre>




#### Unit Tests

+ Pass: Check that file "build/bin/unittest" exists.

+ Pass: Check that a GoogleTest test passes.
    passes the test: InstProj02.TestsRun.



