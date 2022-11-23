/*
Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage
*/

#include <stdio.h>
#include <math.h>
int main()
{
  float cost_price, selling_price, profit_percent, loss_percent, profit_loss_amount;

  printf("A program to calculate the cost price and selling price of a product and displaying profit or less percentage.....\n");
  printf("Enter the cost price of the product\n");
  scanf("%f", &cost_price);
  printf("Enter the selling price of the product\n");
  scanf("%f", &selling_price);

  profit_loss_amount = fabs(selling_price - cost_price);
  profit_percent = fabs((profit_loss_amount / cost_price) * 100);

  if ((selling_price - cost_price) > 0)
  {
    printf("You have made a profit of %f\n", profit_loss_amount);
    printf("...and your profit percentage was:%f \n", profit_percent);
  }
  // else if ((selling_price - cost_price) < 0)
  else
  {
    printf("You have made a loss of %f \n", profit_loss_amount);
    printf("...and your loss percentage was:%f \n", profit_percent);
  }

  return 0;
}