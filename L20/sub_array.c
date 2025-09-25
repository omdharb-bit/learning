// formula for sub array = n(n+1)/2
// Q. find max sum of sub array

#include<stdio.h>

int main(){
int arr[5] = {1, 2, 3, 4, 5};
// max sum of sub array
int max_sum = 0;
for(int i=0; i<5; i++){
    for(int j=i; j<5; j++){
        int sum = 0;
        for(int k=i; k<=j; k++){
            sum += arr[k];
        }
        if(sum > max_sum){
            max_sum = sum;
        }
    }
}
}