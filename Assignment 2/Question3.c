/*
Write a program to swap values of two int variables
*/
#include <stdio.h>
int main()
{
  int firstNumber, secondNumber, tempArea;
  printf("A program to swap values of 2 variables\n");
  printf("Enter 2 numbers");
  scanf("%d%d", &firstNumber, &secondNumber);

  tempArea = firstNumber;
  firstNumber = secondNumber;
  secondNumber = tempArea;

  printf("Swapped numbers are: %d and %d", firstNumber, secondNumber);
  return 0;
}