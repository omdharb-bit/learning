#include <stdio.h>

/*int main()
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
}*/

/*int main()
{
  int num = 1234;
  int res = 0;
while (num!=0)
{
  int lastDigit = num % 10;
  res = res * 10 + lastDigit;
  num = num / 10;
}
printf("The reversed number is: %d\n", res);
return 0;
}*/

int main()
{

  int num = 33;
  int i, prime = 1;
  if (num <= 1)
  {
    prime = 0;
  }
  else
  {
    for (i = 2; i <= num / 2; i++)
    {
      if (num % i == 0)
      {
        prime = 0;
        break;
      }
    }
  }

  if (prime)
    printf("%d is a Prime Number.\n", num);
  else
    printf("%d is NOT a Prime Number.\n", num);

  return 0;
}