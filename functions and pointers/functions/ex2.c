#include<stdio.h>
void printHello();
void printgoodbye();//function declaration

int main(){
   printHello();
    printgoodbye();
     printHello();
      //function call
    return 0;
}
void printHello(){
    printf("Hello!\n"); // function definition
}
void printgoodbye(){
    printf("Goodbye:)\n");
    
}
