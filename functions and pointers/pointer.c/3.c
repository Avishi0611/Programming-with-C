#include<stdio.h>
int main(){

    int age=22;
    int *ptr=&age;
    int **pptr=&ptr;

    printf("%d" ,&pptr);

    /*char ch='i';
    char *ptr=&ch;
    char **pptr=&ptr;

    printf("%c" ,**pptr);*/



    return 0;
}