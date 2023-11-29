/*
Write a program to print the first 10 natural numbers.
*/

#include <stdio.h>
int main()
{
  int number;
  printf("A program to print first 10 natural numbers...\n");
  for (number = 0; number <= 10; number++)
  {
    printf("%d\n", number);
  }

  return 0;
}