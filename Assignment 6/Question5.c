/*Write a program to calculate sum of cubes of first N natural numbers*/
#include <stdio.h>
int main()
{
  int number, sum = 0, i, result;
  printf("A program to calculate sum of cubes of first N natural numbers...\n");
  printf("Enter a number of your choice\n");
  scanf("%d", &number);
  for (i = 1; i <= number; i++)
  {
    sum = (i * i * i) + sum;
    printf("When i=%d, sum is = %d\n", i, sum);
  }
  printf("Final result - Sum of cubes of first %d natural numbers are: ", sum);
  return 0;
}