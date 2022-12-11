/*Write a program to print the first N natural numbers in reverse order*/
#include <stdio.h>
int main()
{
  int number, count;
  printf("A program to print the first N natural numbers in reverse order....\n");
  printf("Enter the number of times you want to print the natural numbers\n");
  scanf("%d", &count);
  printf("\n");
  for (number = count; number >= 0; number--)
  {
    printf("%d\n", number);
  }
  return 0;
}