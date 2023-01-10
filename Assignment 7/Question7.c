/* Write a program to print all Prime numbers between two given numbers*/

#include <stdio.h>
int main()
{

  int i, N, flag, first_number, second_number;
  printf("A program to print all Prime numbers between two given numbers...\n");
  printf("Enter any 2 numbers\n");
  scanf("%d %d", &first_number, &second_number);

  for (N = first_number; N <= second_number; N++)
  {
    flag = 0;
    for (i = 2; i <= N / 2; i++)
    {
      if (N % i == 0)

      {
        flag++;
        break;
      }
    }

    if (flag == 0 && N != 1)
    {
      printf(" %d ", N);
    }
  }

  return 0;
}