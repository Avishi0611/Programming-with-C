#include<stdio.h>
int main(){
    char inputstr[255];
    int index;

    printf("enter the string:");
    fgets(inputstr,255,stdin);

    for(index=0;inputstr[index]!='\0' ;index++){
        if(inputstr[index]>='A' && inputstr[index]<='Z'){
            inputstr[index]=inputstr[index]+32;
        }
        else if(inputstr[index]>='a' && inputstr[index]<='z'){
            inputstr[index]=inputstr[index]-32;
        }

        
    }printf("\n output\n");
    puts(inputstr);
    return 0;
}