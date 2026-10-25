#include<stdio.h>
int main(){

    int arr[5],n,i ,element;
    printf("enter the number of elements in an array:");
    scanf("%d" ,&n);

    for(i=0;i<n;i++){
        scanf("%d \n" ,&arr[i]);

    }//printing of all elements

    for(i=0;i<n;i++){
        printf("%d \t" ,arr[i]);

    }
    printf("enter the element:");
    scanf("%d " ,&element);
    arr[n]=element;

    for(i=0;i<n;i++){
        printf("%d\t " ,arr[i]);
    }
     return 0;



}