/*
Write a program to check whether a given number is divisible by 7 or divisible by 3.
*/

#include <stdio.h>
int main()
{
  int number;

  printf("A program that demonstrates if a number is divisible by 7 or 3...\n");
  printf("Enter a number of your choice\n");
  scanf("%d", &number);
  if ((number % 7 == 0))
  {
    if ((number % 3 == 0))
      printf("Your number %d, is divisible by 7 and also 3");
    else
      printf("Your number %d, is divisible by only by 7 and not by 3");
  }
  else if ((number % 3 == 0))
  {
    if ((number % 7 == 0))
      printf("Your number %d, is divisible by 3 and also by 7");
    else
      printf("Your number %d, is divisible by only by 3 and not by 7");
  }
  return 0;
}