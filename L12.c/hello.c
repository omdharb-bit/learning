#include<stdio.h>
int main(){
  int arr[5] = {1, 2, 3, 4, 5};
  int sum = 0;
  /*printf("%d", arr[3]);
  for (int i = 4; i >= 0;i--){
    printf("%d", arr[i]);
}*/

  for(int i = 0; i < 5;i++){
    sum = sum + arr[i];
}
printf("%d", sum);
}