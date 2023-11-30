#include <stdio.h>
int main()
{
  int row, column, number;
  printf("A program to print start - * pattern in reverse order....\n");
  ;
  printf("Enter a number\n");
  scanf("%d", &number);

  for (row = 0; row <= number; row++)
  {
    for (column = 0; column <= number - row; column++)
    {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}