/*
Write a program to check whether a given number is a three digit number or not
*/

#include <stdio.h>
int main()
{
  int givenNumber;

  printf("A program to demonstrate the given number is a three digit or not.....\n");
  printf("Enter a number of your choice\n");
  scanf("%d", &givenNumber);

  if ((givenNumber > 99) && (givenNumber < 1000))
    printf("The given number %d is a three digit number", givenNumber);
  else
    printf("The given number %d is not three digit number", givenNumber);

  return 0;
}