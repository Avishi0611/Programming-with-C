#include<stdio.h>
void namaste();
void bonjour();

int main(){
    printf("enter'i' for indian and 'f' for french:");
    char ch;
    scanf("%c" ,&ch);
    namaste();

         return 0;
    }
    void namaste(){
     printf("Namaste\n");
     bonjour();

}
void bonjour(){
      printf("Bonjour\n");
}
