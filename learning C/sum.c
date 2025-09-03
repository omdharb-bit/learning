#include<stdio.h>


int main(){
  /*int sum = 0;
  for (int i = 1; i <10 ; i++){
sum= sum+i;
    printf(" %d\n", sum);
}
}*/

int num = 133;
int sum = 0;
while (num>0)
{
  int lastDigit = num % 10;
  sum = sum + lastDigit;
  num = num / 10;
}
printf("%d", sum);
}