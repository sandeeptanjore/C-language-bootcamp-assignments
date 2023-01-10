/*Write a program to reverse a given number*/

#include <stdio.h>
int main()
{
  int n, rem = 0, rev = 0;
  printf("A program to print a revese of a given number.....\n");
  printf("Enter a number of your choice\n");
  scanf("%d", &n);

  while (n != 0)
  {
    rem = n % 10;
    rev = rev * 10 + rem;
    n = n / 10;
  }
  printf("Reverse number is: %d", rev);
  return 0;
}