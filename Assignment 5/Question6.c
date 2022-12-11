/*Write a program to print the first N even natural numbers*/
#include <stdio.h>
int main()
{
  int natural_numbers, count;

  printf("A program to print first N even natural numbers......\n");
  printf("Enter a number of your choice\n");
  scanf("%d", &count);
  for (natural_numbers = 1; natural_numbers <= count; natural_numbers++)
  {
    printf("%d\n", 2 * natural_numbers - 2);
  }
  return 0;
}