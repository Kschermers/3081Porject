### Partial Assessment for Project Iteration 01 - DesignDoc (Graded By: Manjiri)

#### Total score: _0_ / _16_

Run on March 29, 22:27:24 PM.


#### Release Branch

+ Pass: Checkout release branch.




#### System Files and Lab Directory Structure

+ Pass: Copy directory "Files for Dependencies".



+ Pass: Check that directory "project" exists.

+ Pass: Check that directory "project/src" exists.

+ Pass: Copy directory "Files for Testing".



+ Pass: Change into directory "project".


#### Design

+ Pass: Check that file "docs/iteration1_design.pdf" exists.


#### Design

+ Pass: Check that file "docs/iteration1_design.pdf" exists.

+ Pass: Graded on Canvas.




#### UML

+ Pass: Check that file "docs/iteration1_UML.pdf" exists.

+ Pass: Graded on Canvas.




#### Doxygen

+ Pass: Documentation builds.



+ Pass: Check that file "docs/html/index.html" exists.

+ Pass: Check that file "docs/html/index.html" exists.

+ Pass: Graded on Canvas.




#### Compile Tests

+ Pass: Clean project.



+ Fail: Check that make compiles.

    Make compile fails with errors:.
<pre>cd src; make -j
make[1]: Entering directory '/classes/grades/Spring-2019/csci3081/gawan007/csci3081-grading-env/grading-scripts/grading/Proj_01_DesignDoc_Assessment/repo-scher528/project/src'
==== Auto-Generating Dependencies for light.cc. ====
==== Auto-Generating Dependencies for rgb_color.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/src/light.d -MP -MT ../build/obj/src/light.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0 light.cc
==== Auto-Generating Dependencies for motion_behavior.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/src/rgb_color.d -MP -MT ../build/obj/src/rgb_color.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0 rgb_color.cc
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/src/motion_behavior.d -MP -MT ../build/obj/src/motion_behavior.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0 motion_behavior.cc
==== Auto-Generating Dependencies for graphics_arena_viewer.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/src/graphics_arena_viewer.d -MP -MT ../build/obj/src/graphics_arena_viewer.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0 graphics_arena_viewer.cc
==== Auto-Generating Dependencies for food_factory.cc. ====
==== Auto-Generating Dependencies for braitenberg_vehicle_factory.cc. ====
==== Auto-Generating Dependencies for motion_behavior_differential.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/src/food_factory.d -MP -MT ../build/obj/src/food_factory.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0 food_factory.cc
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/src/braitenberg_vehicle_factory.d -MP -MT ../build/obj/src/braitenberg_vehicle_factory.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0 braitenberg_vehicle_factory.cc
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/src/motion_behavior_differential.d -MP -MT ../build/obj/src/motion_behavior_differential.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0 motion_behavior_differential.cc
==== Auto-Generating Dependencies for light_factory.cc. ====
==== Auto-Generating Dependencies for controller.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/src/light_factory.d -MP -MT ../build/obj/src/light_factory.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0 light_factory.cc
==== Auto-Generating Dependencies for food.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/src/food.d -MP -MT ../build/obj/src/food.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0 food.cc
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/src/controller.d -MP -MT ../build/obj/src/controller.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0 controller.cc
==== Auto-Generating Dependencies for braitenberg_vehicle.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/src/braitenberg_vehicle.d -MP -MT ../build/obj/src/braitenberg_vehicle.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0 braitenberg_vehicle.cc
==== Auto-Generating Dependencies for main.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/src/main.d -MP -MT ../build/obj/src/main.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0 main.cc
==== Auto-Generating Dependencies for arena.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/src/arena.d -MP -MT ../build/obj/src/arena.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0 arena.cc
==== Compiling rgb_color.cc into ../build/obj/src/rgb_color.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/rgb_color.o rgb_color.cc
==== Compiling motion_behavior_differential.cc into ../build/obj/src/motion_behavior_differential.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/motion_behavior_differential.o motion_behavior_differential.cc
==== Compiling light.cc into ../build/obj/src/light.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/light.o light.cc
==== Compiling food.cc into ../build/obj/src/food.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/food.o food.cc
==== Compiling food_factory.cc into ../build/obj/src/food_factory.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/food_factory.o food_factory.cc
==== Compiling light_factory.cc into ../build/obj/src/light_factory.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/light_factory.o light_factory.cc
==== Compiling braitenberg_vehicle_factory.cc into ../build/obj/src/braitenberg_vehicle_factory.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/braitenberg_vehicle_factory.o braitenberg_vehicle_factory.cc
==== Compiling arena.cc into ../build/obj/src/arena.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/arena.o arena.cc
==== Compiling braitenberg_vehicle.cc into ../build/obj/src/braitenberg_vehicle.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/braitenberg_vehicle.o braitenberg_vehicle.cc
==== Compiling motion_behavior.cc into ../build/obj/src/motion_behavior.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/motion_behavior.o motion_behavior.cc
==== Compiling main.cc into ../build/obj/src/main.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/main.o main.cc
==== Compiling graphics_arena_viewer.cc into ../build/obj/src/graphics_arena_viewer.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/graphics_arena_viewer.o graphics_arena_viewer.cc
==== Compiling controller.cc into ../build/obj/src/controller.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wno-missing-field-initializers -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Weffc++ -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -g -std=c++14 -c -I.. -I. -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/nanovg -isystem/classes/grades/Spring-2019/csci3081/csel-s19c3081/include/MinGfx-1.0  -c -o  ../build/obj/src/controller.o controller.cc
arena.cc: In constructor csci3081::Arena::Arena(json_object*):
arena.cc:43:7: error: class csci3081::Arena does not have any field named light_sensors_
       light_sensors_() {
       ^~~~~~~~~~~~~~
Makefile:109: recipe for target '../build/obj/src/arena.o' failed
make[1]: *** [../build/obj/src/arena.o] Error 1
make[1]: *** Waiting for unfinished jobs....
make[1]: Leaving directory '/classes/grades/Spring-2019/csci3081/gawan007/csci3081-grading-env/grading-scripts/grading/Proj_01_DesignDoc_Assessment/repo-scher528/project/src'
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


#### Behavior Tests

+  _0_ / _2_ : Skip: Explore Light Behavior?

  This test was not run because of an earlier failing test.

+  _0_ / _2_ : Skip: Aggressive Light Behavior?

  This test was not run because of an earlier failing test.

+  _0_ / _2_ : Skip: Love Light Behavior?

  This test was not run because of an earlier failing test.

+  _0_ / _2_ : Skip: Coward Light Behavior?

  This test was not run because of an earlier failing test.

+  _0_ / _2_ : Skip: Explore Food Behavior?

  This test was not run because of an earlier failing test.

+  _0_ / _2_ : Skip: Aggressive Food Behavior?

  This test was not run because of an earlier failing test.

+  _0_ / _2_ : Skip: Love Food Behavior?

  This test was not run because of an earlier failing test.

+  _0_ / _2_ : Skip: Coward Food Behavior?

  This test was not run because of an earlier failing test.

#### Total score: _0_ / _16_

