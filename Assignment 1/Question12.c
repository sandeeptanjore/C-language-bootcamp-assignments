/*
Find output of below code:
int main()
{
int x = printf(“ineuron”);
printf(“%d”,x);
return 0;
}

--THIS PROGRAM RETURNS AN ERROR as the header file is missing
*/

int main()
{
  int x = printf("ineuron");
  printf("% d", x);
  return 0;
}