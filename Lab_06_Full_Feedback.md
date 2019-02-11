### Feedback for Lab 06

Run on February 11, 03:35:41 AM.


#### System Files and Lab Directory Structure

+ Pass: Check that directory "googletest" exists.

+ Pass: Check that directory "labs" exists.

+ Pass: Check that directory "labs/lab06_google_tests" exists.

+ Pass: Make directory "Lab06_Testing".

+ Pass: Change into directory "Lab06_Testing".


#### Essential Files Exist

+ Pass: Check that file "../labs/lab06_google_tests/date_unittest.cc" exists.


### Testing correct implementation

+ Pass: Copy directory "Lab06 files.".



+ Pass: Copy directory "Files for correct version".



+ Pass: Change into directory "correct".

+ Pass: Check that make compiles.



+ Pass: Check that file "date_unittest" exists.

+ Pass: Get all google tests.
    12 tests found.




#### Results

+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.PrintDateTests.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.PrintDateTestsWithoutNewline.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.DaysBetweenTests.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.GetDateTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.SubstractionTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.AdditionTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.Jan1stToMarch1st2016Test.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.EpochTest.



+ Fail: Check that a GoogleTest test passes.
    fails the test: DateTest.TodayTest.
<pre>
[ RUN      ] DateTest.TodayTest
./date_unittest.cc:157: Failure
      Expected: today.GetDate()
      Which is: "2019-02-11"
To be equal to: todayMatch
      Which is: "2019-02-10"
Today's Date not calculated properly</pre>



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.GetUsDateTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.PrintDateTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.PrintUsDateTest.



+ Fail: 91.67% of the tests passed, but the target is 100%.


### Testing Mutants


#### Testing Mutant 1 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 2 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 3 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 4 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 5 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 6 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 7 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 8 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 9 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.

