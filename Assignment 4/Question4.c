/*Write a program to print the first 10 odd natural numbers*/

#include <stdio.h>
int main()
{
  int natural_numbers, count;

  printf("A program to print the first 10 odd natural numbers....\n");
  count = 1;
  for (natural_numbers = 1; natural_numbers <= 10; natural_numbers++)
  {

    printf("%d\n", 2 * natural_numbers - 1);
  }

  return 0;
}