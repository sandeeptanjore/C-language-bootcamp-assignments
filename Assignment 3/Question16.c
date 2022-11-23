/* Write a program to check whether a given character is an alphabet (uppercase), an
 alphabet (lower case), a digit or a special character.
 */
#include <stdio.h>
int main()
{
  char given_char;
  printf("A program which displays if a given character is a lower case or upper case alphabet or a digit or a special character....\n");
  printf("Enter a given character\n");
  scanf("%c", &given_char);

  if ((given_char >= 97) && (given_char <= 122))
  {
    printf("You have entered %c and it is in Lower case", given_char);
  }
  else if ((given_char >= 65) && (given_char <= 90))
  {
    printf("You have entered %c and it is in Upper case", given_char);
  }
  else if ((given_char >= 32) && (given_char <= 47) ||
           (given_char >= 58) && (given_char <= 64) ||
           (given_char >= 91) && (given_char <= 96) ||
           (given_char >= 123) && (given_char <= 127))
  {
    printf("You have entered %c and it is a special character", given_char);
  }
  else if ((given_char >= 48) && (given_char <= 57))
  {
    printf("You have entered %c and it is a digit", given_char);
  }

  return 0;
}