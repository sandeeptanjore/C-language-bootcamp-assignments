// 4. WAP to find the area of the circle. Take radius of circle from user as input and print the result in
// below given format.
// Expected output format – “Area of circle is A having the radius R”. Replace A with area
// & R with radius.

#include <stdio.h>
int main()
{
  float area, radius;

  printf("Enter the radius of the circle \n");
  scanf("%f", &radius);
  area = 3.14 * radius * radius;
  printf("Area of circle is %f and Radius is %f", area, radius);
  // char c = getch();
  return 0;
}