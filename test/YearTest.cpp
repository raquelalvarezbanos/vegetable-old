#include "Year.h"
#include <gtest/gtest.h>

TEST(YearTest, DaysInYear) {
  Year year;

  EXPECT_EQ(year.totalDays(), 365);
}

TEST(YearTest, DaysInMonth) {
  Year year;

  EXPECT_EQ(year.daysInMonth(1), 31);
  EXPECT_EQ(year.daysInMonth(2), 28);
  EXPECT_EQ(year.daysInMonth(3), 31);
  EXPECT_EQ(year.daysInMonth(4), 30);
  EXPECT_EQ(year.daysInMonth(5), 31);
  EXPECT_EQ(year.daysInMonth(6), 30);
  EXPECT_EQ(year.daysInMonth(7), 31);
  EXPECT_EQ(year.daysInMonth(8), 31);
  EXPECT_EQ(year.daysInMonth(9), 30);
  EXPECT_EQ(year.daysInMonth(10), 31);
  EXPECT_EQ(year.daysInMonth(11), 30);
  EXPECT_EQ(year.daysInMonth(12), 31);
}

TEST(YearTest, DayNumber) {
  Year year;

  EXPECT_EQ(year.dayNumber(1, 2), 32);
  EXPECT_EQ(year.dayNumber(6, 3), 65);
  EXPECT_EQ(year.dayNumber(6, 5), 126);
}
