/*Write a program to print the first N odd natural numbers in reverse order.*/

#include <stdio.h>
int main()
{
  int natural_number, count;

  printf("A program to print first N natural numbers in reverse order....\n");
  printf("Enter a number of your choice\n");
  scanf("%d", &count);
  for (natural_number = count; natural_number > 0; natural_number--)
  {

    printf("%d Counter ==>%d\n", 2 * natural_number - 1, natural_number);
  }

  return 0;
}