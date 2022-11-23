/*
Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
ax^2 + bx + c = 0 where in we need to find the value of x is called quadratic equation; ax^2 + bx + c = 0 = formula

X ki value ko roots kehete hai
real = positive
imaginary = negative

if discriminant > 0
  roots = real
  discriminant == 0
  roots = equal
  discriminant < 0
  roots = imaginary

  discriminant = b^2 - 4*a*c = it is just an equation
*/
#include <stdio.h>
int main()
{
  double a, b, c, discriminant;
  printf("A program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots.....\n");
  printf("Enter the coefficients a,b and c: ");
  scanf("%lf %lf %lf", &a, &b, &c);

  discriminant = b * b - 4 * a * c;
  if (discriminant > 0)
    printf("Real and Distinct\n");
  else if (discriminant < 0)
    printf("Imaginary Roots\n");
  else if (discriminant == 0)
    printf("Real and Equal\n");
  return 0;
}
