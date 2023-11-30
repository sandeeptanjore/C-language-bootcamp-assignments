/*Write a program which takes the month number as an input and display number of
days in that month*/

#include <stdio.h>
int main()
{
  int month_number;

  printf("A program which takes a month number from the user and displays number of days in that month......\n");
  printf("Enter a number between 1 and 12 \n");
  scanf("%d", &month_number);

  if (month_number > 12)
  {
    printf("Invalid month number. Please try again....\n");
  }
  else if (month_number >= 1 && month_number <= 12)
  {
    switch (month_number)
    {
    case 1:
      printf("You have entered %d and it is January.\n", month_number);
      printf("There are 31 days in %d-January.\n", month_number);
      break;

    case 2:
      printf("You have entered %d and it is February.\n", month_number);
      printf("There are 28 days in %d-February.\n", month_number);
      break;

    case 3:
      printf("You have entered %d and it is March.\n", month_number);
      printf("There are 31 days in %d-March.\n", month_number);
      break;

    case 4:
      printf("You have entered %d and it is April.\n", month_number);
      printf("There are 30 days in %d-April.\n", month_number);
      break;

    case 5:
      printf("You have entered %d and it is May.\n", month_number);
      printf("There are 31 days in %d-May.\n", month_number);
      break;

    case 6:
      printf("You have entered %d and it is June.\n", month_number);
      printf("There are 30 days in %d-June.\n", month_number);
      break;

    case 7:
      printf("You have entered %d and it is July.\n", month_number);
      printf("There are 31 days in %d-July.\n", month_number);
      break;

    case 8:
      printf("You have entered %d and it is August.\n", month_number);
      printf("There are 30 days in %d-August.\n", month_number);
      break;

    case 9:
      printf("You have entered %d and it is September.\n", month_number);
      printf("There are 30 days in %d-September.\n", month_number);
      break;

    case 10:
      printf("You have entered %d and it is October.\n", month_number);
      printf("There are 31 days in %d-October.\n", month_number);
      break;

    case 11:
      printf("You have entered %d and it is November.\n", month_number);
      printf("There are 30 days in %d-November.\n", month_number);
      break;

      // case 12:
      //   printf("You have entered %d and it is December.\n", month_number);
      //   printf("There are 31 days in %d-December.\n", month_number);
      //   break;

    default:
      printf("You have probably entered %d and it is December.\n", month_number);
      printf("There are 31 days in %d-December.\n", month_number);
      // break;
    }
  }
  return 0;
}