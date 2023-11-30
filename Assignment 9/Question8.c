/*Program to convert a positive number into a negative number and negative number
into a positive number using a switch statement.*/

#include <stdio.h>
int main()
{
  int number, pnumber, nnumber, choice;
  printf("Program to convert a positive into a negative number and negative into a positive number...\n");

  while (1)
  {
    printf("Select an option from the below choices \n");
    printf("1. Positive into Negative\n");
    printf("2. Negative into Positive\n");
    printf("3. Exit \n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      printf("Enter a number of your choice\n");
      scanf("%d", &number);
      nnumber = number * -1;
      printf("Entered number was: %d. Your final answer is: %d\n", number, nnumber);
      break;
    case 2:
      printf("Enter a number of your choice\n");
      scanf("%d", &number);
      pnumber = number * -1;
      printf("Entered number was: %d. Your final answer is: %d\n", number, pnumber);
      break;
    case 3:
      printf("Tata...bye bye!\n");
      return 0;
    }
  }
}