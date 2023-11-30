/*
Convert the following if-else-if construct into switch case:
if(var == 1)
printf("good");
else if(var == 2)
printf("better");
else if(var == 3)
printf("best");
else
printf("invalid");

*/

#include <stdio.h>
int main()
{
  int choice;
  printf("A program to convert IF ELSE IF conditions to SWITCH CASE...\n");
  while (1)
  {
    printf("Select an option from the below choices \n");
    printf("1. \n");
    printf("2. \n");
    printf("3. \n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      printf("Good!\n");
      break;

    case 2:
      printf("Better!\n");
      break;

    case 3:
      printf("Best!\n");
      break;

    default:
      printf("Invalid!");
      break;
      return 0;
    }

    return 0;
  }
}