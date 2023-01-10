/* Write a program to print all Prime numbers under 100*/

#include <stdio.h>
int main()
{
  int i, N, flag;
  printf("A program to print all Prime numbers under 100...\n");
  // printf("Enter a number\n");
  // scanf("%d", &N);

  for (N = 1; N <= 100; N++)
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
      // break;
    }
  }
  // N++;
  return 0;
}