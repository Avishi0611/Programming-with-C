#include <stdio.h>
#include<string.h>


int main() {
    /*char str[100];
    fgets(str,100,stdin); 
    puts(str);

    char name[100];
    fgets(name,100,stdin);
    int length =strlen(name);
    printf("the length is :%d" ,length);*/

    char firStr[100]="hello";
    char secStr[]="world";
    strcat(firStr,secStr);
    puts(firStr);


   

    return 0;
}