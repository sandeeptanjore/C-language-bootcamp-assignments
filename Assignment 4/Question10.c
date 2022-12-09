/*Write a program to print a table of 5.*/

#include <stdio.h>
int main()
{
  int i, n = 5, result, upper_limit;
  printf("Enter the Upper Limit of 5\n");
  scanf("%d", &upper_limit);
  for (i = 1; i <= upper_limit; i++)
  {
    result = i * n;
    printf("%d x %d = %d\n", n, i, result);
  }
  return 0;
}