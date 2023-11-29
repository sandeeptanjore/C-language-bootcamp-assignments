/*
Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)
*/

#include <stdio.h>
int main()
{
  int x; // y;
  printf("Enter a number\n");
  scanf("%d", &x);
  printf("Entered number is %d\n", x);
  // y = x % 10;
  // printf("Y=%d\n", y);
  // x = x - y;
  // printf("Value of the entered number is: %d", x);
  x = x / 10;
  x = x * 10;
  printf("Value of the entered number now is: %d", x);
  return 0;
}