/*
Write a program to check whether a given year is a leap year or not.
Leap year = (divisible by 4 and not divisible by 100 ) or (divisible by 400)
    all the above conditions should be satisfied
*/
#include <stdio.h>
int main()
{
  int year;
  printf("A program to check whether a given year is a leap year or not....\n");
  printf("Enter the year you wish to check: \n");
  scanf("%d", &year);

  if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    printf("%d is a leap year \n", year);
  else
    printf("%d is not a leap year\n", year);

  return 0;
}