/*Write a program to calculate sum of first N even natural numbers*/

#include <stdio.h>
int main()
{
  int i, number, sum = 0;
  printf("A program to calculate sum of first N even natural numbers....\n");
  printf("Please enter a desired number\n");
  scanf("%d", &number);
  for (i = 2; i <= 2 * number; i = i + 2)
  {
    sum = sum + i;
  }
  printf("Sum of first %d even natural numbers are: %d \n", number, sum);
  return 0;
}