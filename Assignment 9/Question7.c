/*
Program to take the value from the user as input electricity unit charges and calculate
total electricity bill according to the given condition . Using the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.
*/

#include <stdio.h>
int main()
{
  int units;
  float price, final_price, surcharge;
  printf("Program to take a value from user as an input electricity unit and calculate their total bill.....\n");
  printf("Enter the number of units consumed\n");
  scanf("%d", &units);

  switch (units <= 50)
  {
  case 1:
    price = units * 0.50;
    // printf("You consumed %d units and your final bill is: Rs. %.2f", units, final_price);
    break;
  case 0:
    switch (units <= 150)
    {
    case 1:
      price = units * 0.75;
      // printf("You consumed %d units and your final bill is: Rs. %.2f", units, final_price);
      break;

    case 0:
      switch (units <= 250)
      {
      case 1:
        price = units * 1.20;
        // printf("You consumed %d units and your final bill is: Rs. %.2f...\n", units, price);
        break;
      }

    case 3:
      switch (units > 250)
      {
      case 0:
        price = units * 1.50;
        // printf("You consumed %d units and your final bill is: Rs. %.2f...\n", units, price);
        break;
      }
    }

    break;
  }
  surcharge = price * 0.20;
  printf("Surcharge = %.2f\n", surcharge);
  final_price = price + surcharge;
  printf("You consumed %d units and your final bill is: Rs. %.2f \n", units, final_price);
  return 0;
}