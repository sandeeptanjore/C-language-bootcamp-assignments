/*Write a program to print cubes of the first N natural numbers*/
#include <stdio.h>
int main()
{
  int cube_number, count;
  printf("A program to print cubes of the first N natural numbers...\n");
  printf("Enter a number of your choice\n");
  scanf("%d", &count);

  for (cube_number = 1; cube_number <= count; cube_number++)
  {
    printf("Square of %d is: %d \n", cube_number, cube_number * cube_number * cube_number);
  }

  return 0;
}
