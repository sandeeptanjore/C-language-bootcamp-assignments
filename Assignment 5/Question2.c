/*Write a program to print the first N natural numbers*/

#include <stdio.h>
int main()
{
  int number, count;
  printf("A program to print first N natural numbers...\n");
  printf("Enter the number of times you want to print\n");
  scanf("%d", &count);

  for (number = 0; number <= count; number++)
  {
    printf("%d\n", number);
  }

  return 0;
}
