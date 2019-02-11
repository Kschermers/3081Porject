#include "gtest/gtest.h"

#include <iostream>
#include <math.h>
#include <ctime>

#include "date.h"


class DateTest : public ::testing::Test {
 public:
  void SetUp( ) { 
    // code here will execute just before the test ensues 
	first_day = Date(2018, 9, 4);
	last_day = Date(2018, 12, 11);
  }
 protected:
  Date first_day;          // first day of classes
  Date last_day;           // last day of classes
};



TEST_F(DateTest, PrintDateTests) {
  Date y2k(1999, 12, 31);              // y2k
  Date ind_day(1776, 7, 4);            // US Independence
  Date best_holiday(2018, 10, 31);     // Halloween
  
  std::string expected_out_1 = "1999-12-31\n";
  std::string expected_out_2 = "1776-07-04\n";
  std::string expected_out_3 = "2018-10-31\n";
  
  testing::internal::CaptureStdout();
  y2k.PrintDate(true);
  std::string output1 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout(); // You must do this EVERY TIME, or else it will segfault
  ind_day.PrintDate(true);
  std::string output2 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  best_holiday.PrintDate(true);
  std::string output3 = testing::internal::GetCapturedStdout();
  
  EXPECT_EQ(output1, expected_out_1);
  EXPECT_EQ(output2, expected_out_2);
  EXPECT_EQ(output3, expected_out_3);
}

TEST_F(DateTest, PrintDateTestsWithoutNewline) {
  Date y2k(1999, 12, 31);              // y2k
  Date ind_day(1776, 7, 4);            // US Independence
  Date best_holiday(2018, 10, 31);     // Halloween
  
  std::string expected_out_1 = "1999-12-31";
  std::string expected_out_2 = "1776-07-04";
  std::string expected_out_3 = "2018-10-31";
  
  testing::internal::CaptureStdout();
  y2k.PrintDate(false);
  std::string output1 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  ind_day.PrintDate(false);
  std::string output2 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  best_holiday.PrintDate(false);
  std::string output3 = testing::internal::GetCapturedStdout();
  
  EXPECT_EQ(output1, expected_out_1);
  EXPECT_EQ(output2, expected_out_2);
  EXPECT_EQ(output3, expected_out_3);
}

/**
  *
  * Note, this is the only provided test case which actually uses our test fixture
  * 
  * However, it is illegal to mix TEST() and TEST_F() in the same test case (file).
  *
  */
  
TEST_F(DateTest, DaysBetweenTests) {
  EXPECT_EQ(first_day.GetUsDate(), "09-04-2018") << "First day of class not setup properly";
  EXPECT_EQ(last_day.GetUsDate(), "12-11-2018") << "Last day of class not setup properly";
  EXPECT_EQ(first_day.DaysBetween(last_day), 98) << "Days between is not calculated properly";
}

/**
  *
  * NOPE!  Can't test PRIVATE methods
  *
  */
/*
TEST(DateTest, ConvertFromDays) {
	Date convert_first_day = ConvertToDays(2458365);
	EXPECT_STREQ(convert_first_day.GetUsDate(), "09-04-2018");
}
*/

TEST_F(DateTest, GetDateTest) {
    
    std::string expected_out_1 = "2018-09-04";
    
    EXPECT_EQ(first_day.GetDate(), expected_out_1) << "Get Date Not Formatted Correctly";
}
    
TEST_F(DateTest, SubstractionTest) {
    
    std::string expected_out_1 = "2018-09-03";
    std::string expected_out_2 = "2018-09-04";
    
    Date expectDayBeforeFirst = first_day - 1;
    Date expectFirstDay = last_day - 98;
    
    EXPECT_EQ(expectDayBeforeFirst.GetDate(), expected_out_1) << "Subtraction for days not calculated properly";
    EXPECT_EQ(expectFirstDay.GetDate(), expected_out_2) << "Subtraction for months not calculated properly";
}

TEST_F(DateTest, AdditionTest) {
    
    std::string expected_out_1 = "2018-09-05";
    std::string expected_out_2 = "2018-12-11";
    std::string expected_out_3 = "2019-09-04";
    
    Date expectDayAfterFirst = first_day + 1;
    Date expectLastDay = first_day + 98;
    Date expectOneYearFromFirst = first_day + 365;
    
    EXPECT_EQ(expectDayAfterFirst.GetDate(), expected_out_1) << "Addition of days not calculated properly";
    EXPECT_EQ(expectLastDay.GetDate(), expected_out_2) << "Addition of months not calculated properly";
    EXPECT_EQ(expectOneYearFromFirst.GetDate(), expected_out_3) << "Addition of years not calculated properly";
}

TEST_F(DateTest, Jan1stToMarch1st2016Test) {
    
    Date jan1st(2016, 01, 01);
    Date march1st(2016, 03, 01);
    
    EXPECT_EQ(march1st.DaysBetween(jan1st), 60) << "DaysBetween not calculated properly for these two dates";
}

TEST_F(DateTest, EpochTest) {
    
    Date epoch(1);
    Date epochMatch(1970, 01, 01);
    
    EXPECT_EQ(epoch.GetDate(), epochMatch.GetDate()) << "Epoch not calculated properly";
}

TEST_F(DateTest, TodayTest) {
 
    Date today;
    std::string todayMatch = "2019-02-11";
    
    EXPECT_EQ(today.GetDate(),todayMatch) << "Today's Date not calculated properly";
    
}

TEST_F(DateTest, GetUsDateTest) {
    
    Date myBday(1998, 02, 06);
    std::string myUSBday = "02-06-1998";
    
    EXPECT_EQ(myBday.GetUsDate(),myUSBday) << "US Date not formatted properly";
}

TEST_F(DateTest, PrintDateTest) {
    
    //Date date1(1867, 09 , 02);
    Date date1(2001, 04, 02);
    Date date2(2001, 4 ,2);
    std::string dateWithZeroes = "2001-04-02";
    
    testing::internal::CaptureStdout();
    date1.PrintDate(false);
    std::string output1 = testing::internal::GetCapturedStdout();
    
    testing::internal::CaptureStdout();
    date2.PrintDate(false);
    std::string output2 = testing::internal::GetCapturedStdout();
    
    EXPECT_EQ(output1, dateWithZeroes) << "PrintDate not formatted correctly; removes leading zeroes";
    EXPECT_EQ(output2, dateWithZeroes) << "Dates w/o do not recieve leading zeroes on PrintDate";
}

TEST_F(DateTest, PrintUsDateTest) {
    
    Date date3(2000, 06, 01);
    Date date4(2000, 6, 1);
    std::string dateWithZeroes = "06-01-2000";
    
    testing::internal::CaptureStdout();
    date3.PrintUsDate(false);
    std::string output1 = testing::internal::GetCapturedStdout();
    
    testing::internal::CaptureStdout();
    date4.PrintUsDate(false);
    std::string output2 = testing::internal::GetCapturedStdout();
    
    EXPECT_EQ(output1, dateWithZeroes) << "PrintUSDate not formatted correctly; removes leading zeroes";
    EXPECT_EQ(output2, dateWithZeroes) << "Dates do not recieve leading zeroes on PrintUsDate";
}


    
    
