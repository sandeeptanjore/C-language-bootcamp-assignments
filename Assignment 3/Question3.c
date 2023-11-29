/*
Write a program to check whether a given number is an even number or an odd
number
*/
#include <stdio.h>
int main()
{
  int givenNumber;

  printf("A program to check whether a given number is an even or odd...\n");
  printf("Enter the desired number: \n");
  scanf("%d", &givenNumber);

  if ((givenNumber % 2) == 0)
    printf("The given number : %d is an Even number", givenNumber);
  else
    printf("The given number : %d is an Odd number", givenNumber);
  return 0;
}