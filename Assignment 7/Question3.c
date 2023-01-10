/*Write a program to check whether a given number is there in the Fibonacci series or
not.*/
#include <stdio.h>
int main()
{
  int fib1 = 1, fib2 = 1, fib3, num, count = 0;
  int flag = 0;
  printf("A program to check whether a given number is in Fibonacci series or not...\n");
  printf("Enter a number of your choice\n");
  scanf("%d", &num);
  count = 2;
  while (count < num)
  {
    fib3 = fib1 + fib2;
    count++;
    if (num == fib3)
    {
      flag = 1;
    }
    fib1 = fib2;
    fib2 = fib3;
  }
  if (flag == 1)
  {
    printf("Good news,the number entered - %d, is in Fibonacci series\n", num);
  }
  else
  {
    printf("Unfortunately the given number %d is not present in Fibonacci series. Try again....\n", num);
  }

  return 0;
}
