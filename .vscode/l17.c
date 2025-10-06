/*#include <stdio.h>

void BubbleSort(int arr[5])
{
  int n = sizeof(arr) / sizeof(int);
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - 1 - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  for (int k = 0; k < n; k++)
  {
    printf("%d", arr[k]);
  }
}

int main()
{
  int arr[5] = {1,2,4,5, 3,}
 BubbleSort();
}*/



//Binary search


// #include<stdio.h>
// int Bsearch(int arr[5]){
//   int s = 0;
//   int t = 4;
//   int end = 4;
// while(s<=end){
//   int mid = (s + end) / 2;
// if(arr[mid]==t){
//   return mid;
// }else if(arr[mid]<t){
//   s = mid + 1;
// }else{
//   end = mid -1;
// }

// }
// return -1;
// }

// int main(){
//   int arr[5] = {1,2,3,4,5};
//   Bsearch(arr);
   
//   int data = Bsearch(arr);
//   printf("%d", data);
// }

// #include <stdio.h>

// int Bsearch(int arr[], int n, int t)
// {
//   int s = 0;
//   int end = n - 1;

//   while (s <= end)
//   {
//     int mid = (s + end) / 2;
//     if (arr[mid] == t)
//     {
//       return mid;
//     }
//     else if (arr[mid] < t)
//     {
//       s = mid + 1;
//     }
//     else
//     {
//       end = mid - 1;
//     }
//   }
//   return -1;
// }

// int main()
// {
//   int arr[5] = {1, 2, 3, 4, 5};
//   int target = 4;

//   int data = Bsearch(arr, 5, target);

//   if (data != -1)
//   {
//     printf("Element %d found at index %d\n", target, data);
//   }
//   else
//   {
//     printf("Element %d not found\n", target);
//   }

//   return 0;
// } 


// Pointer

// #include<stdio.h>
// int main(){
//   int x = 5;
//   int *a = &x;

//   printf("%d\n", x) ;
//   printf("%d ", &x);
//   printf("%d\n", a);
//   printf("%d\n", *a);
// }


#include<stdio.h>
int main(){
  int a = 5;
int b = 10;
int data =   sum(&a, &b);
printf("%d\n", data);
printf("%d", a + b);
}