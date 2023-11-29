/*
Write a program to check whether a given number is positive or non positive.
*/
#include <stdio.h>
int main()
{
  int givenNumber;

  printf("A program to depict whether a given number is positive or negative...\n");
  printf("Enter the desired number: \n");
  scanf("%d", &givenNumber);

  if (givenNumber > 0)
    printf("The given number : %d is Positive", givenNumber);
  else
    printf("The given number : %d is Negative", givenNumber);
  return 0;
}