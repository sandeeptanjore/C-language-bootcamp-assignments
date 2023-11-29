/*
Write a program to find the greatest among three given numbers. Print number once
if the greatest number appears two or three times.
*/

#include <stdio.h>
int main()
{
  int a, b, c;
  printf("A program to print greatest among 3 given numbers...\n");

  printf("Enter the first number of your choice\n");
  scanf("%d", &a);

  printf("Enter the second number of your choice\n");
  scanf("%d", &b);

  printf("Enter the third number of your choice\n");
  scanf("%d", &c);

  if ((a > b) && (a > c))
    printf("%d is the greatest....", a);
  else if ((b > a) && (b > c))
    printf("%d is the greatest....", b);
  else if ((c > a) && (c > b))
    printf("%d is the greatest...", c);
  else if ((a == b) || (b == c) || (a == c))
    printf("Greatest number is repeated...\n");

  return 0;
}