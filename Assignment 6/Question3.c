/*Write a program to calculate sum of first N odd natural numbers*/
#include <stdio.h>
int main()
{
  int number, i, sum = 0;
  printf("A program to calculate sum of first N odd natural numbers.....\n");
  printf("Enter a number of your choice\n");
  scanf("%d", &number);
  for (i = 1; i <= 2 * number - 1; i += 2)
  {
    sum = sum + i;
    printf("value of i is: %d and its sum is: %d\n", i, sum);
  }
  printf("Sum of first %d odd natural numbers are: %d \n", number, sum);
  return 0;
}