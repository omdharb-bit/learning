/*#include <iostream>
int main()
{
  Point p1, p2;
  count << "enter the x and y for first point\n";
  cin >> p1.x >> p1.y
                         count
                     << "enter the x and y for second point\n";
  cin >> p2.x >> p2.y float d;
  d = p1.distance(p2.x, p2.y);
  count << "distance btw points:" << d;
}
retur*/

#include <stdio.h>
int main()
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      printf("*");
    }
    for (int k = 3; k > i; k--)
    {
      printf(" ");
    }
    for (int p = 3; p > i; p--)
    {
      printf(" ");
    }
    for (int z = 0; z <= i; z++)
    {
      printf("*");
    }
    printf("\n");
  }
  for (int i = 0; i < 3; i++)
  {

    for (int j = 3; j > i; j--)
    {
      printf("*");
    }
    for (int k = 0; k <= i; k++)
    {
      printf(" ");
    }
    for (int k = 0; k <= i; k++)
    {
      printf(" ");
    }
    for (int j = 3; j > i; j--)
    {
      printf("*");
    }
    printf("\n");
  }
}