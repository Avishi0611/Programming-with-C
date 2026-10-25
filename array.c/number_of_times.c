//wap to count no. of time a number x occurs in an array
#include<stdio.h>
int main(){

    int arr[10],i, n,c=0;
    printf(" \n enter the 10 elements:");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);

    }
    printf("enter the number you want to find the count : ");
    scanf("%d" ,&n);

    for(i=0;i<10;i++){

        if(arr[i]==n){
            c++;
        }
    }
    printf("the number of times a number n occurs in an array is :%d" ,c);
    

    return 0;

}