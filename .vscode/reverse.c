#include <stdio.h>

int main()
{
  int num, reversed = 0, remainder;

  // Input number from user
  printf("Enter a number: ");
  scanf("%d", &num);

  // Reverse the number
  while (num != 0)
  {
    remainder = num % 10;                 // get last digit
    reversed = reversed * 10 + remainder; // add digit to reversed
    num = num / 10;                       // remove last digit
  }

  // Output result
  printf("Reversed number = %d\n", reversed);

  return 0;
}