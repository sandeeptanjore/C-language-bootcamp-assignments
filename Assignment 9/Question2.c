/*
Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/

#include <stdio.h>

int main()
{
  int choice, x, y, z;
  // float d;
  printf("A menu driven program to: Add, Subtract, Multiply, Divide or Exit....\n");
  while (1)
  {
    printf("Select an option from the below choices \n");
    printf("1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");
    printf("5. Exit\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      printf("Enter 2 numbers\n");
      scanf("%d %d", &x, &y);
      z = x + y;
      printf("Addition of %d and %d is: %d\n", x, y, z);
      break;

    case 2:
      printf("Enter 2 numbers\n");
      scanf("%d %d", &x, &y);
      z = x - y;
      printf("Subtraction of %d and %d is: %d\n", x, y, z);
      break;

    case 3:
      printf("Enter 2 numbers\n");
      scanf("%d %d", &x, &y);
      z = x * y;
      printf("Multiplication of %d and %d is: %d\n", x, y, z);
      break;

    case 4:
      printf("Enter 2 numbers\n");
      scanf("%d %d", &x, &y);
      z = x / y;
      printf("Division of %d and %d is: %d\n", x, y, z);
      break;

    case 5:
      printf("Tata...bye bye!\n");
      return 0;
    }
  }

  return 0;
}