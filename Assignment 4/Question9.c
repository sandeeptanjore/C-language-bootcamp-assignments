/*Write a program to print cubes of the first 10 natural numbers*/

#include <stdio.h>
int main()
{
  int number;
  printf("A program to print cubes of the first 10 natural numbers...\n");
  for (number = 1; number <= 10; number++)
  {
    printf("%d\n", number * number * number);
  }
  return 0;
}