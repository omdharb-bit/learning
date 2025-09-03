#include <stdio.h>
int main()
{
  int day;
  printf("enter 1-7:  ");
  scanf("%d", &day);

  switch (day)
  {
  case 1:
    printf("Monday");
    break;
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("wednesday");
    break;
  case 4:
    printf("thursday");
    break;
  case 5:
    printf("friday");
    break;
  case 6:
    printf("Saturday");
    break;
  case 7:
    printf("Sunday");
    break;
  default:
    printf("Invalid Input.....");

    break;
  }
}