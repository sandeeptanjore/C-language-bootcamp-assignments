#include <stdio.h>

int main()
{
  // Prompt the user to enter the value of N
  int N;
  printf("Enter the value of N: ");
  scanf("%d", &N);

  // Initialize the sum to 0
  int sum = 0;

  // Use a loop to calculate the sum of the first N even natural numbers
  for (int i = 2; i <= 2 * N; i += 2)
  {
    sum += i;
  }

  // Print the result
  printf("The sum of the first %d even natural numbers is %d.\n", N, sum);

  return 0;
}
