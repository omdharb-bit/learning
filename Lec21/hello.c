#include <stdio.h>
#include<string.h>// for length of string
   int main(){
    //  char str[] = "hii";
//      int ln = strlen(str);
//      for (int i = '\0'; str[i] != 0;i++){
//        printf("%c\n", str[i]);
// }
 

//EXCHANGE OF DATA B/W TwO STRING

    //  {
      //  char name[] = "Om Dhar";
    //      char data[10];
    //      for (int i = 0; name[i] != 0; i++){
    //        data[i] = name[i];
    //    }
    //    printf("NAME: %s", data);
    //  }
   
//palidrome

//     char name[] = "wow";
//     int ln = strlen(name);
//     int isTrue = 1;
//     for (int i = 0; i < ln / 2;i++)
//     {
//       if (name[i] != name[ln - i - 1])
//       {
//         isTrue = 0;
//         break;
//       } 
//   }if (isTrue==1)
//   {
//     printf("It is palindrome");
//   }else{
//     printf("It is not palindrome");
// }
  


// remove duplicate

    char name[] = "dihh";
    int ln = strlen(name);
    char data[20];
    int index = 0;
    for (int i = 0; i < ln; i++)
    {
      int isTrue = 1;
      for (int j = 0; j < index; j++)
      {
        if (name[i] == data[j])
        {
          isTrue = 0;
          break;
        }
      }
      if (isTrue == 1)
      {
        data[index] = name[i];
        index++;
      }
    }
    data[index] = '\0';
    printf("NAME: %s", data);
   return 0;

}