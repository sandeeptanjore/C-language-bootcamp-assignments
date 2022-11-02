/*
Write a program to input a three digit number and display the sum of the digits.
*/
#include <stdio.h>
int main()
{
  int threeDigitNbr, sum = 0;
  printf("A program to input a three digit number and display the sum of the digits\n");
  printf("Enter a 3 digit number");
  scanf("%d", &threeDigitNbr);

  sum = threeDigitNbr % 10;
  threeDigitNbr = threeDigitNbr / 10;
  sum = threeDigitNbr % 10 + sum;
  threeDigitNbr = threeDigitNbr / 10;
  sum = threeDigitNbr + sum;

  printf("Sum = %d", sum);

  return 0;
}