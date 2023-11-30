/*Write a program to draw the following patterns:
 *
 **
 ***
 ****
 *****
 */

#include <stdio.h>
int main()
{
  int row, column, number;
  printf("Enter a number\n");
  scanf("%d", &number);
  for (row = 0; row <= number; row++)
  {
    for (column = 0; column <= number; column++)
    {
      if (column >= number - row)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }

  return 0;
}
