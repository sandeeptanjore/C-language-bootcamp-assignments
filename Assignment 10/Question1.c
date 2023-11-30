/*Write a function to calculate the area of a circle. (TSRS)*/
#include <stdio.h>
float get_area_circle(float radius)
{
  return 3.14 * radius * radius;
}

int main()
{
  float radius, area;
  printf("A program that calculates area of a circle....\n");
  printf("Enter the radius \n");
  scanf("%f", &radius);
  if (radius <= 0.0)
  {
    printf("Error: Radius cannot be Zero. Try again....\n");
    return 0;
  }

  area = get_area_circle(radius);

  printf("Area of the circle is: %f", area);
  return 0;
}