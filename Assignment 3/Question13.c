/*
Write a program to check whether a given number is divisible by 3 and divisible by 2
*/

#include <stdio.h>
int main()
{
  int number;

  printf("A program to check if a given number is divisible by 3 and 2...\n");
  printf("Enter a number of your choice \n");
  scanf("%d", &number);

  if ((number % 3 == 0) && (number % 2 == 0))
    printf("Your given number: %d, is divisible by 3 and 2", number);
  else
    printf("Your given number: %d, is unforunately not divisible by 3 and 2", number);

  return 0;
}