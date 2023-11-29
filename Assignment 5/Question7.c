/*Write a program to print the first N even natural numbers in reverse order*/
#include <stdio.h>
int main()
{
  int natural_numbers, count;
  printf("A program to print the first N even natural numbers in reverse order...\n");
  printf("Enter a number of your choice\n");
  scanf("%d", &count);
  for (natural_numbers = count; natural_numbers > 0; natural_numbers--)
  {
    printf("%d counter===>%d\n", 2 * natural_numbers - 2, natural_numbers);
  }

  return 0;
}