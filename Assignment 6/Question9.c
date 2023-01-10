/*Write a program to calculate LCM of two numbers*
LCM = Least Common Multiple = Number which can be divided by 2 numbers
ex: 2 and 4 = LCM = 4
2 and 5 = LCM= 10
*/

#include <stdio.h>
int main()
{
  int x, y, i, flag = 0;
  printf("A program to print LCM of 2 numbers.....\n");
  printf("Enter 2 numbers \n");
  scanf("%d %d", &x, &y);

  for (i = 1; i <= x * y; i++)
  {
    if ((i % x == 0) && (i % y == 0))
    {
      printf("LCM of %d and %d is %d", x, y, i);
      break;
    }
  }

  return 0;
}