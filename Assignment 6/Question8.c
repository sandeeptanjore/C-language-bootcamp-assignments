/* WAP to check whether a given number is prime number or not*/
#include <stdio.h>
int main()
{
  int i, n, flag = 1;

  printf("A program to check whether a given number is Prime number or not...\n");
  printf("Enter a number of your choice\n");
  scanf("%d", &n);

  for (i = 2; i < n / 2; i++)
  {
    if (n % i == 0)
    {
      flag = 2;
      break;
    }
  }

  if (flag == 1)
  {

    printf("Given number  %d , is a Prime Number", n);
  }
  else
  {

    printf("Given number %d , is a not Prime Number", n);
  }
  return 0;
}