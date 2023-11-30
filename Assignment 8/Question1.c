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
  int number, row, column;

  printf("A program to print Stars - * in the desired pattern\n");
  printf("Enter a number to print *\n");
  scanf("%d", &number);
  for (row = 1; row <= number; row++)
  {
    {
      for (column = 1; column <= row; column++)
        // printf("%d", row + 1);
        printf("*");
    }
    printf("\n");
  }
  return 0;
}