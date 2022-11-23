/*
Write a program to check whether a given number is positive, negative or zero.
*/

#include <stdio.h>
int main()
{
  int number;
  printf("A program to display if the given number is positive, negative or zero....\n");
  printf("Enter a number of your choice\n");
  scanf("%d", &number);

  if ((number == 0))
    printf("You entered %d, and it is a zero\n", number);
  else if ((number > 0))
    printf("You entered %d, and it is a positive number\n", number);
  else
    printf("You entered %d, and it is a negative number\n", number);
  return 0;
}