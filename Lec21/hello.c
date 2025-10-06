#include <stdio.h>
#include<string.h>// for length of string
int main(){
  char name[] = "Om_dhar";
  int i = 0;

  // while (name[i] != '\0')
  // {
  //   printf("%c\n", name[i]);
  //   i++;
  // }

//length of string

  int ln = strlen(name);
  printf("%d", ln);

  // printf("Name: %s", name);
  return 0;
}