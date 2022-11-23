/*
Write a program to print greater between two numbers. Print one number if both are
the same
*/

#include <stdio.h>
int main()
{
  int givenNumber1, givenNumber2;

  printf("A program to print greater of two numbers.Also printing the number if they are the same.....\n");
  printf("Enter the first number of your choice\n");
  scanf("%d", &givenNumber1);
  printf("Enter the second number of your choice\n");
  scanf("%d", &givenNumber2);

  if ((givenNumber1 > givenNumber2))
    printf("The first number %d is greater than the second one", givenNumber1);
  else if ((givenNumber1 == givenNumber2))
    printf("Both the numbers (%d and %d) are equal", givenNumber1, givenNumber2);
  // else if ((givenNumber2 > givenNumber1))
  else
    printf("The second number %d is greater than the first one", givenNumber2);

  return 0;
}