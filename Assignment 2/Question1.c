/*
1. Write a program to print unit digit of a given number.
Unit digit = last digit of a given number is a Unit digit
*/
#include <stdio.h>
int main()
{
  int digit;
  printf("A program to demonstrate unit digit of a given number\n");
  printf("Enter a number\n");
  scanf("%d", &digit);
  printf("Unit digit of %d is %d", digit, digit % 10);
  return 0;
}