/*
Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR
and convert it into USD.
*/
#include <stdio.h>
int main()
{
  float usd = 76.23;
  float inr, oinr;
  printf("Enter the amount that you wish to convert\n");
  scanf("%f", &inr);
  oinr = inr;
  inr = inr / usd;
  printf("Your original amount of %f Indian Rupees will give you : %.2f USD", oinr, inr);
  return 0;
}