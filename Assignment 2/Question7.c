/*
Write a program to check whether the given number is even or odd using a bitwise operator.
*/

#include <stdio.h>
int main()
{
  int given_number;

  printf("A program to print a given number either EVEN or ODD\n");
  printf("Enter a number\n");
  scanf("%d", &given_number);

  if (given_number & 1 == 1)
    printf("The given number is an ODD number\n");
  else
    printf("Number is an EVEN number");

  return 0;
}
