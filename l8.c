/*#include<stdio.h>
int main(){
  int i, j;

  for (i = 0; i < 4;i++){
    for (j = 0; j < 4;j--){
      printf("*");
}
printf("\n");
}
}*/
/*#include<stdio.h>
int main()
{
  int num = 65;
for (int i = 0; i < 3; i++)
{
  for (int j = 0; j <= i;j++){
    printf("%c", num++);
}
printf("\n");
}

}*/

/*#include <stdio.h>
int main()

{
  int i, j, k;
  int num = 65;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 3; j > i; j--)
    {
      printf(" ");
    }
    for (int k = 0; k <= i; k++)
    {

      printf("1");
    }
    {
      for (int p = 1; p <= i; p++)
      {

        printf("1", num++);
      }
    }
    printf("\n");
  }
}*/

#include <stdio.h>
int main()

{

  int num = 65;
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      printf(" ");
    }
    for (int k = 3; k > i; k--)
    {

      printf("*");
    }

    {
      for (int p = 3; p >= i; p--)
      {

        printf("*");
      }
    }
    printf("\n");
  }
}