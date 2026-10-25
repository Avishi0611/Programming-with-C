#include<stdio.h>
int main(){
    char inputstr[255];
    int index=0;

    printf("enter the string:");
    fgets(inputstr,255,stdin);
    while(inputstr[index]!='\0'){

    if(inputstr[index]=='a'|| inputstr[index]=='e' || inputstr[index]=='i' || inputstr[index]=='o'|| inputstr[index]=='u'){
    inputstr[index]=inputstr[index]-32;
    }
     index++;
    }
     
    printf("\noutput: \n");
    puts(inputstr);
    return 0;
}