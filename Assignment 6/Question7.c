/*Write a program to count digits in a given number*/
#include <stdio.h>
int main()
{
  int number_entered, number, i, count = 0;
  printf("A program that counts number of digits against a given number....\n");
  printf("Enter a number of your choice\n");
  scanf("%d", &number);
  number_entered = number;
  while (number != 0)
  {
    number = number / 10;
    count = count + 1;
  }
  printf("Number of digits against the entered number %d is: %d\n", number_entered, count);
  return 0;
}