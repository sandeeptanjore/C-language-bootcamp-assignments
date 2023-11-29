/*
Write a program to print the first N odd natural numbers
*/
#include <stdio.h>
int main()
{
  int number, count;
  printf("A program to print first N odd natural numbers....\n");
  printf("Enter the number of your choice\n");
  scanf("%d", &count);

  for (number = 1; number <= count; number++)
  {
    printf("%d ===>%d \n", 2 * number - 1, number);
  }
  return 0;
}
