// WAP to calculate the length of String using printf function
#include <stdio.h>
int main()
{
  char str[100] = "Geek For Geeks";
  int len = 0;
  printf("%s%n", str, &len);
  printf("= %d", len);

  return 0;
}