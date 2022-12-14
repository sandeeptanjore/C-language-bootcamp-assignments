/*Write a program to calculate sum of first N natural numbers*/
#include <stdio.h>
int main()
{

  int i, number, sum = 0;

  printf("A program to calculate sum of first N natural numbers...\n");
  printf("Please enter a number of your choice\n");
  scanf("%d", &number);
  printf("First way of doing this using a LOOP.....\n");
  for (i = 0; i <= number; i++)
  {
    sum = sum + i;
  }
  printf("Sum of first %d numbers is: %d\n", number, sum);

  printf("Second way of doing this is using a formula:  S=n(n+1)2\n ");
  sum = number * (number + 1) / 2;
  printf("The answer using the formula is: %d", sum);
  return 0;
}