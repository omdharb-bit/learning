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

int main(){
  char name[] = "Om Dhar";
  char data[10];
  for (int i = 0; name[i] != 0; i++){
    data[i] = name[i];
}
printf("%s", data);
return 0;
}