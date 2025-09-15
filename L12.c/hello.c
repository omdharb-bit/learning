#include<stdio.h>
int main(){
  int arr[5] = {1, 2, 3, 4, 5};
  int max = arr[4];
  /*printf("%d", arr[3]);
  for (int i = 4; i >= 0;i--){
    printf("%d", arr[i]);
}*/

  for (int i = 0; i<5;i++){
if(arr[i]<max){
  max = arr[i];
}
}
printf("minimum value is %d", max);
}