//use of xor

#include<stdio.h>
int main(){

//finding unique element

//   int arr[5] = {4,5,3,4,5};
//   int xor = 0;
//   for (int i = 0; i < 5;i++){
//     xor = xor ^ arr[i];
// }
// printf(" The unique elements belongs here is %d", xor);


//swaping two no. using xor
int a = 5;
int b = 3;

a = a ^ b;
b = a ^ b;
a = a ^ b;

printf("a=%d , b=%d", a, b);
}