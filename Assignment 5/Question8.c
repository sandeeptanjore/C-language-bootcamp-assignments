/*Write a program to print squares of the first N natural numbers*/

#include <stdio.h>
int main()
{
  int square_number, count;
  printf("A program to print squares of the first N natural numbers...\n");
  printf("Enter a number of your choice\n");
  scanf("%d", &count);

  for (square_number = 1; square_number <= count; square_number++)
  {
    printf("Square of %d is: %d \n", square_number, square_number * square_number);
  }

  return 0;
}
