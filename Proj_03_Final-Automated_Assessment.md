### Partial Assessment for Project Iteration 03 - Final-Automated (Graded By: Nikki Kyllonen)

#### Total score: _5.0_ / _18_

Run on May 15, 18:17:09 PM.


#### Release Branch

+ Pass: Checkout release branch.




#### System Files and Lab Directory Structure

+ Pass: Copy directory "Files for Dependencies".



+ Pass: Check that directory "project" exists.

+ Pass: Check that directory "project/src" exists.

+ Pass: Copy directory "Files for Testing".



+ Pass: Change into directory "project".


#### Google Style

+  _0_ / _5_ : Fail: Make sure final submission code is style compliant.

<pre>cd src; make check-style
make[1]: Entering directory '/export/scratch/nikki/3081-s19/csci3081-grading-env/grading-scripts/grading/Proj_03_Final-Automated_Assessment/repo-scher528/project/src'
==== Checking style is correct ====
/export/scratch/nikki/3081-s19/csci3081-grading-env/grading-scripts/grading/Proj_03_Final-Automated_Assessment/repo-scher528/cpplint/cpplint.py --root=.. *.cc *.h
aggresive_behavior.h:7:  #ifndef header guard has wrong style, please use: SRC_AGGRESIVE_BEHAVIOR_H_  [build/header_guard] [5]
aggresive_behavior.h:51:  #endif line should be "#endif  // SRC_AGGRESIVE_BEHAVIOR_H_"  [build/header_guard] [5]
arena_entity_factory.h:7:  #ifndef header guard has wrong style, please use: SRC_ARENA_ENTITY_FACTORY_H_  [build/header_guard] [5]
arena_entity_factory.h:42:  #endif line should be "#endif  // SRC_ARENA_ENTITY_FACTORY_H_"  [build/header_guard] [5]
arena_entity.h:7:  #ifndef header guard has wrong style, please use: SRC_ARENA_ENTITY_H_  [build/header_guard] [5]
arena_entity.h:164:  #endif line should be "#endif  // SRC_ARENA_ENTITY_H_"  [build/header_guard] [5]
arena.h:7:  #ifndef header guard has wrong style, please use: SRC_ARENA_H_  [build/header_guard] [5]
arena.h:168:  #endif line should be "#endif  // SRC_ARENA_H_"  [build/header_guard] [5]
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
braitenberg_vehicle_factory.h:58:  #endif line should be "#endif  // SRC_BRAITENBERG_VEHICLE_FACTORY_H_"  [build/header_guard] [5]
braitenberg_vehicle.h:7:  #ifndef header guard has wrong style, please use: SRC_BRAITENBERG_VEHICLE_H_  [build/header_guard] [5]
braitenberg_vehicle.h:172:  #endif line should be "#endif  // SRC_BRAITENBERG_VEHICLE_H_"  [build/header_guard] [5]
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
Ignoring "mainpage.h": file excluded by "/export/scratch/nikki/3081-s19/csci3081-grading-env/grading-scripts/grading/Proj_03_Final-Automated_Assessment/repo-scher528/project/src/CPPLINT.cfg". File path component "mainpage.h" matches pattern "mainpage.h"
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
predator.h:40:  #endif line should be "#endif  // SRC_PREDATOR_H_"  [build/header_guard] [5]
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
Done processing motion_behavior_differential.h
Done processing motion_behavior.h
Done processing observer.h
Done processing params.h
Done processing pose.h
Done processing predator.h
Done processing rgb_color.h
Done processing subject.h
Done processing wheel_velocity.h
Total errors found: 62
Makefile:162: recipe for target 'check-style' failed
make[1]: *** [check-style] Error 1
make[1]: Leaving directory '/export/scratch/nikki/3081-s19/csci3081-grading-env/grading-scripts/grading/Proj_03_Final-Automated_Assessment/repo-scher528/project/src'
Makefile:8: recipe for target 'check-style' failed
make: *** [check-style] Error 2
</pre>




#### Git Tests

+  _0_ / _3_ : Fail: Check git commit history
Insufficient commits (found=10,required=25)

+  _0.0_ / _5_ : Pass: Counting branches made for Iteration 3

Insufficient branches found (found=0, required=2):




#### Git Issue Usage

+ Pass: Configuring GHI

+  _5.0_ / _5_ : Pass: Run ghi for total number of issues in Github repo (Found: 2, Expected: 2) 

 [OPEN issue #4] :  CSV factories not implemented

[CLOSED issue #2] :  Json files not properly loading  1

 



#### Total score: _5.0_ / _18_

