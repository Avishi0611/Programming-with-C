//WAP to count number of capital and small letter also count total number of words in given string.
#include<stdio.h>
int main(){
     char A[10];
     printf("enter any string:");
     scanf("%c" ,&A);
     int countC=0 ,countS=0  , i;

     for(i=0;A[i]!= NULL;i++){

        if(A[i]>='A' && A[i]<='Z'){
            countC++;

        }if(A[i]>='a' && A[i]<='z'){
            countS++;

        }
       
     } printf("Capital letters are %d \n , SMall letters are %d " ,countC,countS );
    return 0;
}