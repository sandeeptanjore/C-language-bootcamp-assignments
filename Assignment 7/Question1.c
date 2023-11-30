/* WAP to find the nth term of the Fibonnaci series*/
#include <stdio.h>
int main()
{
  int num, a = 0, b = 1, c = 0;
  printf("A program to find the nth term of Fibonnaci series......\n");
  printf("Enter a number of your choice: ");
  scanf("%d", &num);
  for (int i = 2; i <= num; i++)
  {
    c = a + b;
    a = b; // assigning value of b to a
    b = c; // assigning value of c to b
  }
  printf("The %dth term of Fibonnaci series is %d", num, b);
  return 0;
}