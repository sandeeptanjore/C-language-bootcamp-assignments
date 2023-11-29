/*
Write a program to take a three digit number from the user and rotate its digits by
one position towards the right.
*/
#include <stdio.h>
int main()
{
  int first_number, temp_number, initial_number;

  printf("Enter a 3 digit number\n");
  scanf("%d", &first_number);
  initial_number = first_number;
  temp_number = first_number % 10;
  // printf("%d", temp_number);
  first_number = first_number / 10;

  printf("The number entered was: %d and its final result is: %d%d", initial_number, temp_number, first_number);

  return 0;
}
