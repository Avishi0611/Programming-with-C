#include<stdio.h>
int main(){
    char str[100],str_no_space[100];
    int i=0,j=0;

    printf("enter the string:");
    fgets(str,100,stdin);

    while(str[i]!='\0'){
        if(str[i]!=' '){
            str_no_space[j++]=str[i];

        } 
        i++;


    }str_no_space[j]='\0';
    printf("the string with no spaces is:");
    puts(str_no_space);

    return 0;
}