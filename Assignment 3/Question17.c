/*
Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not.
Formula = Sum of two sides should be greater than the third side
if any of the three conditions below are satisfied then the triangle is a valid triangle.
1. a + b > c
2. a + c > b
3. b + c > a
*/
#include <stdio.h>
int main()
{
  float first_side, second_side, third_side;

  printf("A program that displays if a triangle is valid or not.....\n");
  printf("Enter all the three sides\n");
  scanf("%f%f%f", &first_side, &second_side, &third_side);
  if ((first_side + second_side > third_side) ||
      (second_side + third_side > first_side) ||
      (third_side + first_side > second_side))
    printf("As the sum of the two sides is greater than the third side, it is a valid triange");
  else
    printf("It is not a valid triangle");
  return 0;
}