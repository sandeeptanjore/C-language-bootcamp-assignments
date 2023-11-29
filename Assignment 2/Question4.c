/*
Write a program to swap values of two int variables without using a third variable.
*/
#include <stdio.h>
int main()
{
  int firstNumber, secondNumber;
  printf("A program to swap values of 2 variables\n");
  printf("Enter 2 numbers");
  scanf("%d%d", &firstNumber, &secondNumber);
  firstNumber = firstNumber + secondNumber;
  // printf("1st Number is: %d\n", firstNumber);
  secondNumber = firstNumber - secondNumber;
  firstNumber = firstNumber - secondNumber;
  printf("1st Number now  is: %d\n", firstNumber);
  printf("2nd Number now  is: %d\n", secondNumber);
  return 0;
}

// store x = x+y
// then make y = x-y
// then make x = x-y
// this is how you swap two variables without using a 3rd variable