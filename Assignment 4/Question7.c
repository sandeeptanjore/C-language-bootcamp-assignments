/*
Write a program to print the first 10 even natural numbers in reverse order
*/

#include <stdio.h>
int main()
{

  int numbers;
  printf("A program to print the first 10 even natural numbers in reverse order....\n");

  for (numbers = 11; numbers > 1; numbers--)
  {
    printf("%d\n", 2 * numbers - 2);
  }

  return 0;
}