/*
Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an isosceles
triangle or not
b. Check whether a given set of three numbers are lengths of sides of a right
angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle or not
d. Exit
*/

#include <stdio.h>
int main()
{
  int choice, a, b, c;
  printf("A menu driven program to check if given 3 numbers are lengths of an : Isoceles, Right angled or Equilateral triangle...\n");
  while (1)
  {
    printf("Select an option from the below choices \n");
    printf("1. Isosceles Triangle \n");
    printf("2. Right Angle Triangle \n");
    printf("3. Equilteral Triange \n");
    printf("4. Exit\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      printf("Enter 3 numbers\n");
      scanf("%d %d %d", &a, &b, &c);
      if (a == b || b == c || c == a)
      {
        printf("It is an Isoceles Triangle\n");
      }
      else
      {
        printf("It is not an Isoceles Triangle\n");
      }
      break;
    case 2:
      printf("Enter 3 numbers\n");
      scanf("%d %d %d", &a, &b, &c);
      if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b)
      {
        printf("It is a Right Angle Triangle\n");
      }
      else
      {
        printf("It is not a Right Angle Triangle\n");
      }

      break;
    case 3:
      printf("Enter 3 numbers\n");
      scanf("%d %d %d", &a, &b, &c);
      if (a == b && b == c)
      {
        printf("It is an Equilateral Triangle\n");
      }
      else
      {
        printf("It is not an Equilateral Triangle\n");
      }
      break;

    case 4:
      printf("Tata...bye bye!\n");
      return 0;
    }

    return 0;
  }
}