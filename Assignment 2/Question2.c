/*
Write a program to print a given number without its last digit.
*/
#include <stdio.h>
int main()
{
  int given_number, result_number;

  printf("A program to print a given number without its last digit\n");
  printf("Enter a number\n");
  scanf("%d", &given_number);
  result_number = given_number / 10;
  printf("Given number was %d and removing its last digit results in: %d", given_number, result_number);
  return 0;
}