/*
Write a program to print the first 10 natural numbers in reverse order
*/

#include <stdio.h>
int main()
{
  int number;
  printf("A program to print first 10 natural numbers in reverse order...\n");
  for (number = 10; number >= 0; number--)
  {
    printf("%d\n", number);
  }

  return 0;
}