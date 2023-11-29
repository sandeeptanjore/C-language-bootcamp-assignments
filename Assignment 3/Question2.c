/*
Write a program to check whether a given number is divisible by 5 or not
*/
#include <stdio.h>
int main()
{
  int givenNumber;

  printf("A program to depict whether a given number is divisble by 5 or not....\n");
  printf("Enter the desired number: \n");
  scanf("%d", &givenNumber);

  if ((givenNumber % 5) == 0)
    printf("The given number : %d is divisible by 5", givenNumber);
  else
    printf("The given number : %d is not divisible by 5", givenNumber);
  return 0;
}