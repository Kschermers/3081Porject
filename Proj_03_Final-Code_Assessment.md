### Partial Assessment for Project Iteration 03 - Final-Code (Graded By: Dan Orban)

#### Total score: _1_ / _10_

Run on May 14, 15:17:27 PM.


#### Release Branch

+ Pass: Checkout release branch.




#### System Files and Lab Directory Structure

+ Pass: Copy directory "Files for Dependencies".



+ Pass: Check that directory "project" exists.

+ Pass: Check that directory "project/src" exists.

+ Pass: Copy directory "Files for Testing".



+ Pass: Change into directory "project".


#### Feature Tests

+ Pass: Change into directory "tests-i".

+ Pass: Check that make compiles.



+ Pass: Change into directory "..".

+ Pass: Check that file "./build/bin/tests-i" exists.

+  _0_ / _2_ : Fail: CSV parsing functionality works and loads arena.
    fails the test: InteractiveTest.Iteration3TestExampleFile.
<pre>
[ RUN      ] InteractiveTest.Iteration3TestExampleFile
interactive_test.cc:168: Failure
Expected equality of these values:
  entities.size()
    Which is: 3
  10
Arena should have 10 entites.
Robot Simulation</pre>



+  _0_ / _2_ : Fail: JSON parsing functionality works and loads arena.
    fails the test: InteractiveTest.Iteration3TestExampleFile.
<pre>
[ RUN      ] InteractiveTest.Iteration3TestExampleFile
interactive_test.cc:168: Failure
Expected equality of these values:
  entities.size()
    Which is: 3
  10
Arena should have 10 entites.
Robot Simulation</pre>



+  _0_ / _2_ : Fail: Confirm that the x,y dimensions given as arguments are used.
    fails the test: InteractiveTest.Iteration3TestCmdLine.
<pre>
[ RUN      ] InteractiveTest.Iteration3TestCmdLine
interactive_test.cc:163: Failure
Expected equality of these values:
  arena->get_x_dim()
    Which is: 1024
  x_dim
    Which is: 742
Arena X dimension should match the value passed in through the command line.
interactive_test.cc:164: Failure
Expected equality of these values:
  arena->get_y_dim()
    Which is: 768
  y_dim
    Which is: 635
Arena Y dimension should match the value passed in through the command line.
Robot Simulation</pre>



+  _0_ / _1_ : Fail: Loads Predator through CSV.
    fails the test: InteractiveTest.Iteration3TestExampleFilePred.
<pre>
[ RUN      ] InteractiveTest.Iteration3TestExampleFilePred
interactive_test.cc:186: Failure
Expected equality of these values:
  entities[0]->get_pose().x
    Which is: 200
  220
Incorrect x position
interactive_test.cc:187: Failure
Expected equality of these values:
  entities[0]->get_pose().y
    Which is: 200
  350
Incorrect y position
interactive_test.cc:188: Failure
Expected equality of these values:
  entities[0]->get_radius()
    Which is: 30
  15
Incorrect radius
interactive_test.cc:189: Failure
Expected equality of these values:
  entities[0]->get_pose().theta
    Which is: 0
  270
Incorrect theta
Robot Simulation</pre>



+  _0_ / _1_ : Fail: Loads Predator through CSV.
    fails the test: InteractiveTest.Iteration3TestExampleFileLight.
<pre>
[ RUN      ] InteractiveTest.Iteration3TestExampleFileLight
interactive_test.cc:194: Failure
Expected equality of these values:
  entities[0]->get_pose().x
    Which is: 200
  100
Incorrect x position
interactive_test.cc:195: Failure
Expected equality of these values:
  entities[0]->get_pose().y
    Which is: 200
  250
Incorrect y position
interactive_test.cc:196: Failure
Expected equality of these values:
  entities[0]->get_radius()
    Which is: 30
  0
Incorrect radius
Robot Simulation</pre>



+  _0_ / _1_ : Fail: Loads BV through CSV.
    fails the test: InteractiveTest.Iteration3TestExampleFileBV.
<pre>
[ RUN      ] InteractiveTest.Iteration3TestExampleFileBV
interactive_test.cc:200: Failure
Expected equality of these values:
  entities[0]->get_type()
    Which is: 0
  kBraitenberg
    Which is: 3
Incorrect type
interactive_test.cc:201: Failure
Expected equality of these values:
  entities[0]->get_pose().x
    Which is: 200
  220
Incorrect x position
interactive_test.cc:202: Failure
Expected equality of these values:
  entities[0]->get_pose().y
    Which is: 200
  400
Incorrect y position
interactive_test.cc:203: Failure
Expected equality of these values:
  entities[0]->get_radius()
    Which is: 30
  15
Incorrect radius
interactive_test.cc:204: Failure
Expected equality of these values:
  entities[0]->get_pose().theta
    Which is: 0
  270
Incorrect theta
Robot Simulation</pre>



+  _1_ / _1_ : Pass: Erroneous input -- not enough arguments passed with executable.
    passes the test: InteractiveTest.Iteration3TestInput.



#### Total score: _1_ / _10_

