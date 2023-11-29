/*
Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)
*/

#include <stdio.h>
int main()
{
  int first_number, second_digit;
  printf("Enter your first number\n");
  scanf("%d", &first_number);
  printf("Enter your second number\n");
  scanf("%d", &second_digit);

  first_number = first_number * 10;
  first_number = first_number + second_digit;
  printf("Final answer=%d", first_number);
  return 0;
}