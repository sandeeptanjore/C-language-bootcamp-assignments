/*Write a program to print the first 10 odd natural numbers in reverse order.*/

#include <stdio.h>
int main()
{
  int natural_numbers;
  printf("A program to print the first 10 odd natural numbers in reverse order....\n");
  for (natural_numbers = 10; natural_numbers > 0; natural_numbers--)
  {

    printf("%d\n", 2 * natural_numbers - 1);
  }

  return 0;
}