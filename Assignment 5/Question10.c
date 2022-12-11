/*Write a program to print a table of N*/

#include <stdio.h>
int main()
{
  int table_name, count, i, result;

  printf("A program to print a table of N....\n");
  printf("Enter the name (number) the table that you want to print\n");
  scanf("%d", &table_name);
  printf("Now enter the maximum multiple or number that you wish to print for the above table\n");
  scanf("%d", &count);
  for (i = 1; i <= count; i++)
  {
    result = table_name * i;
    printf("%d X %d = %d\n", table_name, i, result);
  }
  return 0;
}