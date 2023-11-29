/*Write a program to print iNeuron N times on the screen*/
#include <stdio.h>
int main()
{
  int i, n;
  printf("A program that will print iNeuron depending on how many times you want it to print.....\n");
  printf("Enter number of times you wish to print\n");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    printf("iNeuron ==> %d\n", i);
  }
  return 0;
}
