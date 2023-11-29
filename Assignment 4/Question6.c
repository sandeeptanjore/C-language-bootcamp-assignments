/*Write a program to print the first 10 even natural numbers*/
#include <stdio.h>
int main()
{
  int first_ten_natural_numbers;
  printf("A program to print the first 10 even natural numbers....\n");
  for (first_ten_natural_numbers = 1; first_ten_natural_numbers <= 10; first_ten_natural_numbers++)
  {

    printf("%d\n", 2 * first_ten_natural_numbers - 2);
  }

  return 0;
}