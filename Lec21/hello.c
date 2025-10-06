#include <stdio.h>
#include<string.h>// for length of string
  // int i = 0;

   

//length of string

  // int ln = strlen(name);
  // printf("%d", ln);

  // while (name[i] != '\0')
  // {
  //   printf("%c\n", name[i]);
  //   i++;
  // }

// using for loop

  // for (int i = 0; name[i] != '\0';i++){

  //   printf(" %c", name[i]);
  // }

// store two different string in one
int main(){
  // char name[] = "Om Dhar";
//   char data[10];
//   for (int i = 0; name[i] != 0; i++){
//     data[i] = name[i];
// }
// printf("%s", data);

//palidrom or not

  char name[] = "wow";
  int ln = strlen(name);
  int isTrue = 1;
  for (int i = 0; i < ln / 2;i++){
if(name[i]!=name[ln-i-1]){
  isTrue = 0;
break;
}
}
 
printf("%c", name[1]);
return 0;
}