#include <stdio.h>
#include <string.h>
int main()
 {
    char str[100] ,reversed[100];
   int i, length;
   //input the string
   printf("Enter a string:");
   scanf("%s", &str);

   //get the length of string
   length =strlen(str);
   //reverse the string using a loop 
   for(i=0;i<length ; i++){
    reversed[i]= str[length -i-1];

   }
   reversed [length ]= '\0'; //null-terminate the reversed string
   // output the reversed string
   printf("reversed string: %s\n" ,reversed);

   return 0;
 }
