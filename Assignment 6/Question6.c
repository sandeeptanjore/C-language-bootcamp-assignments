/*Write a program to calculate factorial of a number*/
#include <stdio.h>
int main()
{
  int fact = 1, number, i, result, temp;
  printf("A program to calculate factorial of a number....\n");
  printf("Enter a number of your choice\n");
  scanf("%d", &number);
  for (i = 1; i <= number; i++)
  {
    fact = fact * i;
    result = fact;
    printf("When i=%d, factorial is = %d and result is = %d\n", i, fact, result);
    // printf("%d\n", result);
  }
  printf("So your final answer - factorial of %d is: %d ", number, result);
  return 0;
}