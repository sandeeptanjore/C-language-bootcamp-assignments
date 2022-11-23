/*
Write a program which takes the month number as an input and display number of
days in that month
*/

#include <stdio.h>
int main()
{
  int month_number;

  printf("A program that displays number of days in a month against the number entered.....\n");
  printf("Enter a number for the month interested: \n");
  scanf("%d", &month_number);
  if ((month_number == 1) || (month_number == 3) || (month_number == 5) || (month_number == 7) || (month_number == 8) || (month_number == 10) || (month_number == 12))
    printf("Month has 31 days\n");
  else if (month_number == 2)
    printf("Month has 28/29 days\n");
  else
    printf("Month has 30 days \n");
  return 0;
}