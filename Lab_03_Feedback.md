### Feedback for Lab 03

Run on January 29, 14:05:17 PM.


#### Necessary Files and Structure

+ Pass: Check that directory "labs" exists.

+ Pass: Check that directory "labs/lab03_class_basics" exists.

+ Pass: Change into directory "labs/lab03_class_basics".


#### Essential Files Exist

+ Pass: Check that file "Makefile" exists.

+ Pass: Check that file ".gitignore" exists.

+ Pass: Check that file "point2.cc" exists.

+ Pass: Check that file "point2.h" exists.


#### .gitignore set up properly

+ Pass: Check that file/directory "cluster" does not exist.

+ Pass: Check that file/directory "point2_unittest" does not exist.

+ Pass: Check that no files with extension ".o" exist in directory "."

+ Pass: Check that no files with extension ".out" exist in directory "."


#### Test that code compiles and creates the exectuable

+ Pass: Check that make compiles.



+ Pass: Check that file "cluster" exists.

+ Pass: Check that make compiles for Makefile:Makefile.test.

    make successful.
    Check point2_unittest exists...OK: result point2_unittest found

+ Fail: Check that a GoogleTest test passes.
    fails the test: Point2Test.DistBtwnBothPositive.
<pre>
[ RUN      ] Point2Test.DistBtwnBothPositive
./point2_unittest.cc:50: Failure
      Expected: p00.DistanceBetween(pPI45)
      Which is: 0
To be equal to: 1.0
      Which is: 1</pre>



+ Pass: Check that a GoogleTest test passes.
    passes the test: Point2Test.DistBtwnInverses.


