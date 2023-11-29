/*
Write a program which takes a character as an input and displays its ASCII code
*/
#include <stdio.h>
int main()
{
  char ch;
  printf("A program which takes a character as an input and displays its ASCII code\n");
  printf("Enter a character\n");
  scanf("%c", &ch);
  // printf("You entered: %c \n", ch);
  printf("The ASCII code of %c is: %d", ch, ch);
  return 0;
}