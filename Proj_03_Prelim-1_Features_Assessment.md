### Partial Assessment for Project Iteration 03 - Prelim-1_Features (Graded By: Dan Orban)

#### Total score: _0_ / _8_

Run on May 10, 17:10:13 PM.


#### Prelim1 Release Branch

+ Pass: Checkout prelim 1 branch.




#### System Files and Lab Directory Structure

+ Pass: Copy directory "Files for Dependencies".



+ Pass: Check that directory "project" exists.

+ Pass: Check that directory "project/src" exists.

+ Pass: Copy directory "Files for Testing".



+ Pass: Change into directory "project".

+ Pass: Checkout regrade branch.



+ Pass: Change into directory "tests-i".

+ Fail: Check that make compiles.

    Make compile fails with errors:.
<pre>==== Auto-Generating Dependencies for ../src/aggresive_behavior.cc. ====
g++ -MM -MF ../build/obj/tests-i/aggresive_behavior.d -MP -MT ../build/obj/tests-i/aggresive_behavior.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/classes/csel-s19c3081/include -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -std=c++14 ../src/aggresive_behavior.cc
==== Compiling ../src/aggresive_behavior.cc into ../build/obj/tests-i/aggresive_behavior.o. ====
g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/classes/csel-s19c3081/include -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -std=c++14  -c -o  ../build/obj/tests-i/aggresive_behavior.o ../src/aggresive_behavior.cc
==== Auto-Generating Dependencies for ../src/love_behavior.cc. ====
g++ -MM -MF ../build/obj/tests-i/love_behavior.d -MP -MT ../build/obj/tests-i/love_behavior.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/classes/csel-s19c3081/include -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -std=c++14 ../src/love_behavior.cc
==== Compiling ../src/love_behavior.cc into ../build/obj/tests-i/love_behavior.o. ====
g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/classes/csel-s19c3081/include -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -std=c++14  -c -o  ../build/obj/tests-i/love_behavior.o ../src/love_behavior.cc
==== Auto-Generating Dependencies for ../src/light.cc. ====
g++ -MM -MF ../build/obj/tests-i/light.d -MP -MT ../build/obj/tests-i/light.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/classes/csel-s19c3081/include -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -std=c++14 ../src/light.cc
==== Compiling ../src/light.cc into ../build/obj/tests-i/light.o. ====
g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/classes/csel-s19c3081/include -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -std=c++14  -c -o  ../build/obj/tests-i/light.o ../src/light.cc
==== Auto-Generating Dependencies for ../src/explore_behavior.cc. ====
g++ -MM -MF ../build/obj/tests-i/explore_behavior.d -MP -MT ../build/obj/tests-i/explore_behavior.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/classes/csel-s19c3081/include -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -std=c++14 ../src/explore_behavior.cc
==== Compiling ../src/explore_behavior.cc into ../build/obj/tests-i/explore_behavior.o. ====
g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/classes/csel-s19c3081/include -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -std=c++14  -c -o  ../build/obj/tests-i/explore_behavior.o ../src/explore_behavior.cc
==== Auto-Generating Dependencies for ../src/motion_behavior.cc. ====
g++ -MM -MF ../build/obj/tests-i/motion_behavior.d -MP -MT ../build/obj/tests-i/motion_behavior.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/classes/csel-s19c3081/include -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -std=c++14 ../src/motion_behavior.cc
==== Compiling ../src/motion_behavior.cc into ../build/obj/tests-i/motion_behavior.o. ====
g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/classes/csel-s19c3081/include -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -std=c++14  -c -o  ../build/obj/tests-i/motion_behavior.o ../src/motion_behavior.cc
==== Auto-Generating Dependencies for ../src/graphics_arena_viewer.cc. ====
g++ -MM -MF ../build/obj/tests-i/graphics_arena_viewer.d -MP -MT ../build/obj/tests-i/graphics_arena_viewer.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/classes/csel-s19c3081/include -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -std=c++14 ../src/graphics_arena_viewer.cc
==== Compiling ../src/graphics_arena_viewer.cc into ../build/obj/tests-i/graphics_arena_viewer.o. ====
g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/classes/csel-s19c3081/include -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -std=c++14  -c -o  ../build/obj/tests-i/graphics_arena_viewer.o ../src/graphics_arena_viewer.cc
In file included from ../src/graphics_arena_viewer.h:20:0,
                 from ../src/graphics_arena_viewer.cc:16:
../src/braitenberg_vehicle.h:82:31: error: expected ; at end of member declaration
   void SubscribeTo(Observer* o) overri  de;
                               ^
../src/braitenberg_vehicle.h:82:33: error: overri does not name a type
   void SubscribeTo(Observer* o) overri  de;
                                 ^~~~~~
../src/braitenberg_vehicle.h:87:5: error: fully does not name a type
   */fully i
     ^~~~~
../src/braitenberg_vehicle.h:57:3: error: invalid abstract return type csci3081::BraitenbergVehicle
   BraitenbergVehicle operator=(const BraitenbergVehicle & rhs) = delete;
   ^~~~~~~~~~~~~~~~~~
../src/braitenberg_vehicle.h:44:7: note:   because the following virtual functions are pure within csci3081::BraitenbergVehicle:
 class BraitenbergVehicle : public ArenaMobileEntity, public Subject {
       ^~~~~~~~~~~~~~~~~~
In file included from ../src/braitenberg_vehicle.h:23:0,
                 from ../src/graphics_arena_viewer.h:20,
                 from ../src/graphics_arena_viewer.cc:16:
../src/subject.h:27:16: note: 	virtual void csci3081::Subject::UnsubscribeTo()
   virtual void UnsubscribeTo() = 0;
                ^~~~~~~~~~~~~
Makefile:139: recipe for target '../build/obj/tests-i/graphics_arena_viewer.o' failed
make: *** [../build/obj/tests-i/graphics_arena_viewer.o] Error 1
</pre>



+ Skip: Change into directory "..".

  This test was not run because of an earlier failing test.

+ Skip: Check that file "./build/bin/tests-i" exists.

  This test was not run because of an earlier failing test.


#### Functionality- Decoration Alone

+  _0_ / _1_ : Skip: Decorates Once - Gets through first decoration without a seg fault (scenes/pred_decorate_1.json)

  This test was not run because of an earlier failing test.

+  _0_ / _1_ : Skip: Decorates Twice - Gets through second decoration without a seg fault (scenes/pred_decorate_2.json)

  This test was not run because of an earlier failing test.

+  _0_ / _1_ : Skip: Decorates Thrice - Gets through third decoration without a seg fault (scenes/pred_decorate_3.json)

  This test was not run because of an earlier failing test.

+  _0_ / _1_ : Skip: Starves - Dies after 3rd decoration (scenes/pred_starve.json)

  This test was not run because of an earlier failing test.


#### Functionality - Consuming BV

+  _0_ / _1_ : Skip: Movement Towards BV - Does it move towards BV as a Predator or Decorated as BV? (scenes/pred_move_towards_bv.json)

  This test was not run because of an earlier failing test.

+  _0_ / _1_ : Skip: Undecorates - Does it undecorate after consuming BV? (scenes/pred_undecorates.json)

  This test was not run because of an earlier failing test.


#### Functionality - Decorator Behavior

+  _0_ / _2_ : Skip: Moves as a BV when decorated as BV. (scenes/pred_bv_decorator.json)

  This test was not run because of an earlier failing test.


#### Regrade Process

You may create json config files that prove that your functionality works in the "regrade/iteration3-prelim1" branch under the "project/scenes" folder.  Use the names for the scene files above.  Submit a new regrade request and we will re-run with your new files and a description of how to test.


#### Possible Areas of Failure

 * Cannot turn off mobility of entity (i.e. cannot call entity->set_is_moving(...)).
 * Program expects a BV to exist.
 * The BV must be the first entity in the config.
 * Simulation timing is handled outside of the arena_->AdvanceTime(1.0).
 * Segfault when a predator consumes.

#### Total score: _0_ / _8_

