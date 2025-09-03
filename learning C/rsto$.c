#include <stdio.h>

int main()
{
  int choice;
  float rupees, dollars, rate;

  printf("Enter current exchange rate (1 USD = ? INR): ");
  scanf("%f", &rate);

  printf("\n--- Currency Converter ---\n");
  printf("1. Rupees to Dollars\n");
  printf("2. Dollars to Rupees\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);

  switch (choice)
  {
  case 1:
    printf("Enter amount in Rupees (INR): ");
    scanf("%f", &rupees);
    dollars = rupees / rate;
    printf("%.2f INR = %.2f USD\n", rupees, dollars);
    break;

  case 2:
    printf("Enter amount in Dollars (USD): ");
    scanf("%f", &dollars);
    rupees = dollars * rate;
    printf("%.2f USD = %.2f INR\n", dollars, rupees);
    break;

  default:
    printf("Invalid choice! Please select 1 or 2.\n");
  }

  return 0;
}