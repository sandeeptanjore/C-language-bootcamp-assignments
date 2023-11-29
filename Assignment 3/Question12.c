/*
Write a program to check whether a given alphabet is in uppercase or lowercase
*/
#include <stdio.h>
int main()
{
  char lowerupper;
  printf("A program to check if a given alphabet is in Uppercase or Lowercase...\n");
  printf("Enter an alphabet of your choice that you wish to check \n ");
  scanf("%c", &lowerupper);

  if ((lowerupper >= 97) && (lowerupper <= 122))
  {
    printf("The entered alphabet: %c, is a lowercase alphabet", lowerupper);
  }
  else if ((lowerupper >= 65) && (lowerupper <= 90))
  {
    printf("The entered alphabet: %c, is an uppercase alphabet", lowerupper);
  }
  return 0;
}