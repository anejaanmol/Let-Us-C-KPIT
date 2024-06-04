// According to Gregorian calendar, it was Monday on the date
// 01/01/01. If any year is input through the keyboard write a program
// to find out what is the day on 1st January of this year.
#include <stdio.h>

int main() {
  int year, days, leap_years;

  printf("Enter the year (after year 0): ");
  scanf("%d", &year);

  if (year == 0) {
    printf("The day is Monday.\n");
    return 0;
  }

  leap_years = year / 4 - year / 100 + year / 400;


  days = (year - 1) * 365 + leap_years;

 
  days %= 7;

  char *day_names[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
  printf("The day is %s.\n", day_names[days]);

  return 0;
}
