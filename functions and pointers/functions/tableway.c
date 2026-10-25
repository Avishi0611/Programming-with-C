#include<stdio.h>
void printTable(int n);

int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d" ,&n);
     
    printTable(n);//actual parameter or argument
    
    return 0;
    }
    void printTable(int n){// formal parameter / just parameter , just bta dia ,baki actual value to calling function se aayegi
        for(int i=1;i<=10;i++){
            printf("%d \n" ,n*i);
        }
    }