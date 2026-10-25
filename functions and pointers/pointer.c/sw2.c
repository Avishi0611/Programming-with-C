//WAP to check whether given character is vowel or not using switch case.
#include<stdio.h>
int main(){

    char ch;
   printf("enter the character:");
   scanf("%c" ,&ch);

    switch(ch){
    case 'a':
    case 'A':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'e':
    case 'E':
    case 'u':
    case 'U':
    printf("%c is a vowel",ch);
    break;
    default: printf("it is not a vowel");
    break;
   }
 return 0;
 }
  

