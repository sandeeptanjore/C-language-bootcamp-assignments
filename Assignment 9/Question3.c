/*
Write a program which takes the day number of a week and displays a unique
greeting message for the day.
*/

#include <stdio.h>
int main()
{
  int day_number;
  printf("A program which takes the day number of a week and displays an unique greeting message....\n");
  printf("Enter a number between 1 and 7 \n");
  scanf("%d", &day_number);

  if (day_number > 7)
  {
    printf("Invalid day number. Please try again....\n");
  }
  else if (day_number >= 1 && day_number <= 7)
  {
    switch (day_number)
    {
    case 1:
      printf("You have entered %d and it is Sunday. \n", day_number);
      printf("Sunday- It is a holiday....Enjoy! \n");
      break;

    case 2:
      printf("You have entered %d and it is a Monday. \n", day_number);
      printf("Monday and it is back to work. Welcome back....\n");
      break;

    case 3:
      printf("You have entered %d and it is Tuesday. \n", day_number);
      printf("After Monday is Tuesday. Continue to work and have fun....\n");
      break;

    case 4:
      printf("You have entered %d and it is a Wedneday. \n", day_number);
      printf("Enjoy your Wednesday....\n");
      break;

    case 5:
      printf("You have entered %d and it is Thursday. \n", day_number);
      printf("Thursday and we are 2 days away from a weekend YaY....\n");
      break;

    case 6:
      printf("You have entered %d and it is a Friday. \n", day_number);
      printf("Friday and it is a Pay Day... wow!!!\n");
      break;

    case 7:
      printf("You have entered %d and it is Saturday. \n", day_number);
      printf("Happy Weekend....! \n");
      break;

      // default:
      //   printf("As you have not entered I will declare tomorrow is a holiday.Go enjoy!!!\n");
      //   break;
    }
  }

  return 0;
}