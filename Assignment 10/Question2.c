/*Write a function to calculate simple interest.*/
#include <stdio.h>

float get_simple_interest(float amount, float time, float rate)
{
  return (amount * time * rate) / 100;
}

int main()
{
  float amount, time, rate, interest;
  printf("A program that calculates simple interest....\n");
  printf("Enter the amount you wish to borrow\n");
  scanf("%f", &amount);
  printf("Enter the number of years you want to pay\n");
  scanf("%f", &time);
  printf("Enter the interest you would like to pay\n");
  scanf("%f", &rate);

  if ((amount <= 0 || time <= 0 || rate <= 0))
  {
    printf("Zero is not an accepted value. Try again....\n");
    return 0;
  }

  interest = get_simple_interest(amount, time, rate);
  printf("Your interest amount is = %f", interest);

  return 0;
}