/*
Program to check whether a year is a leap year or not. Using switch statement
 */

#include <stdio.h>
int main()
{
  int year;
  printf("A program to check whether a year is leap year or not using Switch statement....\n");
  printf("Enter a year\n");
  scanf("%d", &year);

  switch (year % 100 == 0)
  {
  case 0:
    switch (year % 4 == 0)
    {
    case 0:

      printf("Non Leap Year\n\n");
      break;

    case 1:
      printf("Leap Year\n\n");
      break;
    }
    break;
  case 1:
    switch (year % 400 == 0)
    {
    case 0:
      printf("Non Leap Year\n\n");
      break;
    case 1:
      printf("Leap Year\n\n");
      break;
    }

    // break;
  }

  return 0;
}