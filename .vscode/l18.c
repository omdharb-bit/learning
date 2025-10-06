 #include<stdio.h>
// int main(){
//   int x = 10;
//   int y = 20;
//    (&x, &y);

//   x = x + y;
//   y = x - y;
//   x = x - y;

//   printf("%d %d", x, y);
//   }
   
 
// Pointer on array

// #include<stdio.h>
// int main(){
//   int arr[5] = {1, 2, 3, 4, 5};
//   int *p = arr;

//   for(int i = 4; i >=0; i--){
//     printf("%d ", *(p + i));
//   }
// }



// Sum of 2D array


int main(){
int arr[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
int sum = 0;
for(int i=0; i<3; i++){
  for(int j=0; j<3; j++){
    // printf("%d ",  arr[i][j]);
sum=sum+arr[i][j];
  }
  printf("%d\n", sum);
  sum=0;  
}

  // printf("\n");
}