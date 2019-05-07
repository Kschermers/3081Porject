### Partial Assessment for Project Iteration 02 - Final-Code (Graded By: Dan Orban)

#### Total score: _5.0_ / _16_

Run on May 07, 16:42:28 PM.


#### Release Branch

+ Pass: Checkout release branch.




#### System Files and Lab Directory Structure

+ Pass: Copy directory "Files for Dependencies".



+ Pass: Check that directory "project" exists.

+ Pass: Check that directory "project/src" exists.

+ Pass: Copy directory "Files for Testing".



+ Pass: Change into directory "project".


#### Feature Testing


#### Compile Tests

+ Pass: Clean project.



+ Fail: Check that make compiles.

    Make compile fails with errors:.
<pre>cd src; make -j
make[1]: Entering directory '/home/dan/TA/csci3081/3081_S19/csci3081-grading-env/grading-scripts/grading/Proj_02_Final-Code_Assessment/repo-scher528/project/src'
==== Auto-Generating Dependencies for aggresive_behavior.cc. ====
==== Auto-Generating Dependencies for light.cc. ====
==== Auto-Generating Dependencies for love_behavior.cc. ====
g++ -MM -MF ../build/obj/src/aggresive_behavior.d -MP -MT ../build/obj/src/aggresive_behavior.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0 aggresive_behavior.cc
g++ -MM -MF ../build/obj/src/love_behavior.d -MP -MT ../build/obj/src/love_behavior.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0 love_behavior.cc
g++ -MM -MF ../build/obj/src/light.d -MP -MT ../build/obj/src/light.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0 light.cc
==== Auto-Generating Dependencies for explore_behavior.cc. ====
g++ -MM -MF ../build/obj/src/explore_behavior.d -MP -MT ../build/obj/src/explore_behavior.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0 explore_behavior.cc
==== Auto-Generating Dependencies for graphics_arena_viewer.cc. ====
==== Auto-Generating Dependencies for motion_behavior.cc. ====
g++ -MM -MF ../build/obj/src/motion_behavior.d -MP -MT ../build/obj/src/motion_behavior.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0 motion_behavior.cc
==== Auto-Generating Dependencies for food_factory.cc. ====
g++ -MM -MF ../build/obj/src/food_factory.d -MP -MT ../build/obj/src/food_factory.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0 food_factory.cc
==== Auto-Generating Dependencies for braitenberg_vehicle_factory.cc. ====
==== Auto-Generating Dependencies for rgb_color.cc. ====
==== Auto-Generating Dependencies for motion_behavior_differential.cc. ====
==== Auto-Generating Dependencies for main.cc. ====
==== Auto-Generating Dependencies for predator.cc. ====
g++ -MM -MF ../build/obj/src/motion_behavior_differential.d -MP -MT ../build/obj/src/motion_behavior_differential.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0 motion_behavior_differential.cc
g++ -MM -MF ../build/obj/src/predator.d -MP -MT ../build/obj/src/predator.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0 predator.cc
g++ -MM -MF ../build/obj/src/braitenberg_vehicle_factory.d -MP -MT ../build/obj/src/braitenberg_vehicle_factory.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0 braitenberg_vehicle_factory.cc
g++ -MM -MF ../build/obj/src/graphics_arena_viewer.d -MP -MT ../build/obj/src/graphics_arena_viewer.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0 graphics_arena_viewer.cc
g++ -MM -MF ../build/obj/src/main.d -MP -MT ../build/obj/src/main.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0 main.cc
g++ -MM -MF ../build/obj/src/rgb_color.d -MP -MT ../build/obj/src/rgb_color.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0 rgb_color.cc
==== Auto-Generating Dependencies for controller.cc. ====
g++ -MM -MF ../build/obj/src/controller.d -MP -MT ../build/obj/src/controller.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0 controller.cc
==== Auto-Generating Dependencies for food.cc. ====
g++ -MM -MF ../build/obj/src/food.d -MP -MT ../build/obj/src/food.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0 food.cc
==== Auto-Generating Dependencies for arena.cc. ====
g++ -MM -MF ../build/obj/src/arena.d -MP -MT ../build/obj/src/arena.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0 arena.cc
==== Auto-Generating Dependencies for braitenberg_vehicle.cc. ====
g++ -MM -MF ../build/obj/src/braitenberg_vehicle.d -MP -MT ../build/obj/src/braitenberg_vehicle.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0 braitenberg_vehicle.cc
==== Auto-Generating Dependencies for coward_behavior.cc. ====
g++ -MM -MF ../build/obj/src/coward_behavior.d -MP -MT ../build/obj/src/coward_behavior.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0 coward_behavior.cc
==== Auto-Generating Dependencies for light_factory.cc. ====
g++ -MM -MF ../build/obj/src/light_factory.d -MP -MT ../build/obj/src/light_factory.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0 light_factory.cc
==== Compiling light.cc into ../build/obj/src/light.o. ====
==== Compiling explore_behavior.cc into ../build/obj/src/explore_behavior.o. ====
g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/light.o light.cc
g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/explore_behavior.o explore_behavior.cc
==== Compiling food.cc into ../build/obj/src/food.o. ====
g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/food.o food.cc
==== Compiling coward_behavior.cc into ../build/obj/src/coward_behavior.o. ====
g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/coward_behavior.o coward_behavior.cc
==== Compiling aggresive_behavior.cc into ../build/obj/src/aggresive_behavior.o. ====
g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/aggresive_behavior.o aggresive_behavior.cc
==== Compiling motion_behavior_differential.cc into ../build/obj/src/motion_behavior_differential.o. ====
g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/motion_behavior_differential.o motion_behavior_differential.cc
==== Compiling rgb_color.cc into ../build/obj/src/rgb_color.o. ====
==== Compiling food_factory.cc into ../build/obj/src/food_factory.o. ====
g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/rgb_color.o rgb_color.cc
g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/food_factory.o food_factory.cc
==== Compiling motion_behavior.cc into ../build/obj/src/motion_behavior.o. ====
g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/motion_behavior.o motion_behavior.cc
==== Compiling braitenberg_vehicle.cc into ../build/obj/src/braitenberg_vehicle.o. ====
g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/braitenberg_vehicle.o braitenberg_vehicle.cc
==== Compiling predator.cc into ../build/obj/src/predator.o. ====
g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/predator.o predator.cc
==== Compiling light_factory.cc into ../build/obj/src/light_factory.o. ====
==== Compiling arena.cc into ../build/obj/src/arena.o. ====
g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/light_factory.o light_factory.cc
g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/arena.o arena.cc
==== Compiling braitenberg_vehicle_factory.cc into ../build/obj/src/braitenberg_vehicle_factory.o. ====
g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/braitenberg_vehicle_factory.o braitenberg_vehicle_factory.cc
==== Compiling love_behavior.cc into ../build/obj/src/love_behavior.o. ====
g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/love_behavior.o love_behavior.cc
==== Compiling controller.cc into ../build/obj/src/controller.o. ====
g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/controller.o controller.cc
==== Compiling main.cc into ../build/obj/src/main.o. ====
g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/main.o main.cc
==== Compiling graphics_arena_viewer.cc into ../build/obj/src/graphics_arena_viewer.o. ====
g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/csel-s19c3081/include -isystem/classes/csel-s19c3081/include/nanovg -isystem/classes/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/graphics_arena_viewer.o graphics_arena_viewer.cc
In file included from arena.cc:14:0:
../src/braitenberg_vehicle.h:82:31: error: expected ; at end of member declaration
   void SubscribeTo(Observer* o) overri  de;
                               ^
../src/braitenberg_vehicle.h:82:33: error: overri does not name a type
   void SubscribeTo(Observer* o) overri  de;
                                 ^~~~~~
../src/braitenberg_vehicle.h:87:5: error: fully does not name a type
   */fully i
     ^~~~~
../src/braitenberg_vehicle.h:82:8: error: virtual void csci3081::BraitenbergVehicle::SubscribeTo(csci3081::Observer*) can be marked override [-Werror=suggest-override]
   void SubscribeTo(Observer* o) overri  de;
        ^~~~~~~~~~~
../src/braitenberg_vehicle.h:57:3: error: invalid abstract return type csci3081::BraitenbergVehicle
   BraitenbergVehicle operator=(const BraitenbergVehicle & rhs) = delete;
   ^~~~~~~~~~~~~~~~~~
../src/braitenberg_vehicle.h:44:7: note:   because the following virtual functions are pure within csci3081::BraitenbergVehicle:
 class BraitenbergVehicle : public ArenaMobileEntity, public Subject {
       ^~~~~~~~~~~~~~~~~~
In file included from ../src/braitenberg_vehicle.h:23:0,
                 from arena.cc:14:
../src/subject.h:27:16: note: 	virtual void csci3081::Subject::UnsubscribeTo()
   virtual void UnsubscribeTo() = 0;
                ^~~~~~~~~~~~~
arena.cc: In constructor csci3081::Arena::Arena():
arena.cc:36:38: error: invalid new-expression of abstract class type csci3081::BraitenbergVehicle
     AddEntity(new BraitenbergVehicle());
                                      ^
In file included from braitenberg_vehicle.cc:11:0:
../src/braitenberg_vehicle.h:82:31: error: expected ; at end of member declaration
   void SubscribeTo(Observer* o) overri  de;
                               ^
../src/braitenberg_vehicle.h:82:33: error: overri does not name a type
   void SubscribeTo(Observer* o) overri  de;
                                 ^~~~~~
../src/braitenberg_vehicle.h:87:5: error: fully does not name a type
   */fully i
     ^~~~~
../src/braitenberg_vehicle.h:82:8: error: virtual void csci3081::BraitenbergVehicle::SubscribeTo(csci3081::Observer*) can be marked override [-Werror=suggest-override]
   void SubscribeTo(Observer* o) overri  de;
        ^~~~~~~~~~~
../src/braitenberg_vehicle.h:57:3: error: invalid abstract return type csci3081::BraitenbergVehicle
   BraitenbergVehicle operator=(const BraitenbergVehicle & rhs) = delete;
   ^~~~~~~~~~~~~~~~~~
../src/braitenberg_vehicle.h:44:7: note:   because the following virtual functions are pure within csci3081::BraitenbergVehicle:
 class BraitenbergVehicle : public ArenaMobileEntity, public Subject {
       ^~~~~~~~~~~~~~~~~~
In file included from ../src/braitenberg_vehicle.h:23:0,
                 from braitenberg_vehicle.cc:11:
../src/subject.h:27:16: note: 	virtual void csci3081::Subject::UnsubscribeTo()
   virtual void UnsubscribeTo() = 0;
                ^~~~~~~~~~~~~
braitenberg_vehicle.cc: In member function virtual void csci3081::BraitenbergVehicle::Update():
braitenberg_vehicle.cc:137:9: error: get_sensor_rea was not declared in this scope
         get_sensor_rea  ding_left(closest_light_entity_),
         ^~~~~~~~~~~~~~
braitenberg_vehicle.cc:137:9: note: suggested alternative: light_sensors_
         get_sensor_rea  ding_left(closest_light_entity_),
         ^~~~~~~~~~~~~~
         light_sensors_
braitenberg_vehicle.cc: At global scope:
braitenberg_vehicle.cc:386:40: error: no void csci3081::BraitenbergVehicle::UnsubscribeTo() member function declared in class csci3081::BraitenbergVehicle
 void BraitenbergVehicle::UnsubscribeTo() {
                                        ^
In file included from ../src/braitenberg_vehicle_factory.h:15:0,
                 from braitenberg_vehicle_factory.cc:11:
../src/braitenberg_vehicle.h:82:31: error: expected ; at end of member declaration
   void SubscribeTo(Observer* o) overri  de;
                               ^
../src/braitenberg_vehicle.h:82:33: error: overri does not name a type
   void SubscribeTo(Observer* o) overri  de;
                                 ^~~~~~
../src/braitenberg_vehicle.h:87:5: error: fully does not name a type
   */fully i
     ^~~~~
../src/braitenberg_vehicle.h:82:8: error: virtual void csci3081::BraitenbergVehicle::SubscribeTo(csci3081::Observer*) can be marked override [-Werror=suggest-override]
   void SubscribeTo(Observer* o) overri  de;
        ^~~~~~~~~~~
../src/braitenberg_vehicle.h:57:3: error: invalid abstract return type csci3081::BraitenbergVehicle
   BraitenbergVehicle operator=(const BraitenbergVehicle & rhs) = delete;
   ^~~~~~~~~~~~~~~~~~
../src/braitenberg_vehicle.h:44:7: note:   because the following virtual functions are pure within csci3081::BraitenbergVehicle:
 class BraitenbergVehicle : public ArenaMobileEntity, public Subject {
       ^~~~~~~~~~~~~~~~~~
In file included from ../src/braitenberg_vehicle.h:23:0,
                 from ../src/braitenberg_vehicle_factory.h:15,
                 from braitenberg_vehicle_factory.cc:11:
../src/subject.h:27:16: note: 	virtual void csci3081::Subject::UnsubscribeTo()
   virtual void UnsubscribeTo() = 0;
                ^~~~~~~~~~~~~
braitenberg_vehicle_factory.cc: In member function virtual csci3081::ArenaEntity* csci3081::BraitenbergVehicleFactory::create(const json_object&):
braitenberg_vehicle_factory.cc:40:53: error: invalid new-expression of abstract class type csci3081::BraitenbergVehicle
     BraitenbergVehicle* bv = new BraitenbergVehicle();
                                                     ^
In file included from predator.cc:9:0:
../src/braitenberg_vehicle.h:82:31: error: expected ; at end of member declaration
   void SubscribeTo(Observer* o) overri  de;
                               ^
../src/braitenberg_vehicle.h:82:33: error: overri does not name a type
   void SubscribeTo(Observer* o) overri  de;
                                 ^~~~~~
../src/braitenberg_vehicle.h:87:5: error: fully does not name a type
   */fully i
     ^~~~~
../src/braitenberg_vehicle.h:82:8: error: virtual void csci3081::BraitenbergVehicle::SubscribeTo(csci3081::Observer*) can be marked override [-Werror=suggest-override]
   void SubscribeTo(Observer* o) overri  de;
        ^~~~~~~~~~~
../src/braitenberg_vehicle.h:57:3: error: invalid abstract return type csci3081::BraitenbergVehicle
   BraitenbergVehicle operator=(const BraitenbergVehicle & rhs) = delete;
   ^~~~~~~~~~~~~~~~~~
../src/braitenberg_vehicle.h:44:7: note:   because the following virtual functions are pure within csci3081::BraitenbergVehicle:
 class BraitenbergVehicle : public ArenaMobileEntity, public Subject {
       ^~~~~~~~~~~~~~~~~~
In file included from ../src/braitenberg_vehicle.h:23:0,
                 from predator.cc:9:
../src/subject.h:27:16: note: 	virtual void csci3081::Subject::UnsubscribeTo()
   virtual void UnsubscribeTo() = 0;
                ^~~~~~~~~~~~~
cc1plus: all warnings being treated as errors
Makefile:109: recipe for target '../build/obj/src/braitenberg_vehicle.o' failed
make[1]: *** [../build/obj/src/braitenberg_vehicle.o] Error 1
make[1]: *** Waiting for unfinished jobs....
cc1plus: all warnings being treated as errors
Makefile:109: recipe for target '../build/obj/src/arena.o' failed
make[1]: *** [../build/obj/src/arena.o] Error 1
cc1plus: all warnings being treated as errors
Makefile:109: recipe for target '../build/obj/src/braitenberg_vehicle_factory.o' failed
make[1]: *** [../build/obj/src/braitenberg_vehicle_factory.o] Error 1
cc1plus: all warnings being treated as errors
Makefile:109: recipe for target '../build/obj/src/predator.o' failed
make[1]: *** [../build/obj/src/predator.o] Error 1
In file included from ../src/graphics_arena_viewer.h:20:0,
                 from graphics_arena_viewer.cc:16:
../src/braitenberg_vehicle.h:82:31: error: expected ; at end of member declaration
   void SubscribeTo(Observer* o) overri  de;
                               ^
../src/braitenberg_vehicle.h:82:33: error: overri does not name a type
   void SubscribeTo(Observer* o) overri  de;
                                 ^~~~~~
../src/braitenberg_vehicle.h:87:5: error: fully does not name a type
   */fully i
     ^~~~~
../src/braitenberg_vehicle.h:82:8: error: virtual void csci3081::BraitenbergVehicle::SubscribeTo(csci3081::Observer*) can be marked override [-Werror=suggest-override]
   void SubscribeTo(Observer* o) overri  de;
        ^~~~~~~~~~~
../src/braitenberg_vehicle.h:57:3: error: invalid abstract return type csci3081::BraitenbergVehicle
   BraitenbergVehicle operator=(const BraitenbergVehicle & rhs) = delete;
   ^~~~~~~~~~~~~~~~~~
../src/braitenberg_vehicle.h:44:7: note:   because the following virtual functions are pure within csci3081::BraitenbergVehicle:
 class BraitenbergVehicle : public ArenaMobileEntity, public Subject {
       ^~~~~~~~~~~~~~~~~~
In file included from ../src/braitenberg_vehicle.h:23:0,
                 from ../src/graphics_arena_viewer.h:20,
                 from graphics_arena_viewer.cc:16:
../src/subject.h:27:16: note: 	virtual void csci3081::Subject::UnsubscribeTo()
   virtual void UnsubscribeTo() = 0;
                ^~~~~~~~~~~~~
In file included from ../src/graphics_arena_viewer.h:20:0,
                 from main.cc:13:
../src/braitenberg_vehicle.h:82:31: error: expected ; at end of member declaration
   void SubscribeTo(Observer* o) overri  de;
                               ^
In file included from ../src/graphics_arena_viewer.h:20:0,
                 from controller.cc:17:
../src/braitenberg_vehicle.h:82:31: error: expected ; at end of member declaration
   void SubscribeTo(Observer* o) overri  de;
                               ^
../src/braitenberg_vehicle.h:82:33: error: overri does not name a type
   void SubscribeTo(Observer* o) overri  de;
                                 ^~~~~~
../src/braitenberg_vehicle.h:87:5: error: fully does not name a type
   */fully i
     ^~~~~
../src/braitenberg_vehicle.h:82:33: error: overri does not name a type
   void SubscribeTo(Observer* o) overri  de;
                                 ^~~~~~
../src/braitenberg_vehicle.h:82:8: error: virtual void csci3081::BraitenbergVehicle::SubscribeTo(csci3081::Observer*) can be marked override [-Werror=suggest-override]
   void SubscribeTo(Observer* o) overri  de;
        ^~~~~~~~~~~
../src/braitenberg_vehicle.h:57:3: error: invalid abstract return type csci3081::BraitenbergVehicle
   BraitenbergVehicle operator=(const BraitenbergVehicle & rhs) = delete;
   ^~~~~~~~~~~~~~~~~~
../src/braitenberg_vehicle.h:44:7: note:   because the following virtual functions are pure within csci3081::BraitenbergVehicle:
 class BraitenbergVehicle : public ArenaMobileEntity, public Subject {
       ^~~~~~~~~~~~~~~~~~
../src/braitenberg_vehicle.h:87:5: error: fully does not name a type
   */fully i
     ^~~~~
In file included from ../src/braitenberg_vehicle.h:23:0,
                 from ../src/graphics_arena_viewer.h:20,
                 from main.cc:13:
../src/subject.h:27:16: note: 	virtual void csci3081::Subject::UnsubscribeTo()
   virtual void UnsubscribeTo() = 0;
                ^~~~~~~~~~~~~
../src/braitenberg_vehicle.h:82:8: error: virtual void csci3081::BraitenbergVehicle::SubscribeTo(csci3081::Observer*) can be marked override [-Werror=suggest-override]
   void SubscribeTo(Observer* o) overri  de;
        ^~~~~~~~~~~
../src/braitenberg_vehicle.h:57:3: error: invalid abstract return type csci3081::BraitenbergVehicle
   BraitenbergVehicle operator=(const BraitenbergVehicle & rhs) = delete;
   ^~~~~~~~~~~~~~~~~~
../src/braitenberg_vehicle.h:44:7: note:   because the following virtual functions are pure within csci3081::BraitenbergVehicle:
 class BraitenbergVehicle : public ArenaMobileEntity, public Subject {
       ^~~~~~~~~~~~~~~~~~
In file included from ../src/braitenberg_vehicle.h:23:0,
                 from ../src/graphics_arena_viewer.h:20,
                 from controller.cc:17:
../src/subject.h:27:16: note: 	virtual void csci3081::Subject::UnsubscribeTo()
   virtual void UnsubscribeTo() = 0;
                ^~~~~~~~~~~~~
cc1plus: all warnings being treated as errors
Makefile:109: recipe for target '../build/obj/src/graphics_arena_viewer.o' failed
make[1]: *** [../build/obj/src/graphics_arena_viewer.o] Error 1
cc1plus: all warnings being treated as errors
Makefile:109: recipe for target '../build/obj/src/main.o' failed
make[1]: *** [../build/obj/src/main.o] Error 1
cc1plus: all warnings being treated as errors
Makefile:109: recipe for target '../build/obj/src/controller.o' failed
make[1]: *** [../build/obj/src/controller.o] Error 1
make[1]: Leaving directory '/home/dan/TA/csci3081/3081_S19/csci3081-grading-env/grading-scripts/grading/Proj_02_Final-Code_Assessment/repo-scher528/project/src'
Makefile:4: recipe for target 'all' failed
make: *** [all] Error 2
</pre>



+ Skip: Check that file "build/bin/arenaviewer" exists.

  This test was not run because of an earlier failing test.

+ Skip: Change into directory "tests-i".

  This test was not run because of an earlier failing test.

+ Skip: Check that make compiles.

  This test was not run because of an earlier failing test.

+ Skip: Change into directory "..".

  This test was not run because of an earlier failing test.

+ Skip: Check that file "./build/bin/tests-i" exists.

  This test was not run because of an earlier failing test.

+  _0_ / _3_ : Skip: Ability to select and change behaviors? (light, food, robot)

  This test was not run because of an earlier failing test.

+  _0_ / _4_ : Skip: Does the Predator kill the Robot? Is the Robot now a ghost?

  This test was not run because of an earlier failing test.

+  _0_ / _4_ : Skip: Does the Robot starve to death? Is the Robot now a ghost?

  This test was not run because of an earlier failing test.


#### Code Inspection

+  _5.0_ / _5_ : Pass: Robot WheelVelocities are being calculated dynamically.

    

#### Total score: _5.0_ / _16_

