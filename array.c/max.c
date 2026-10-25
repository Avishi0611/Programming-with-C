#include<stdio.h>
int main(){

    int arr[10],max;
    printf(" \n enter the 10 elements:");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);

    }
    max=arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
            
        }
        
    }
    printf("the largest element in an array is :" ,max);
    

    return 0;
}