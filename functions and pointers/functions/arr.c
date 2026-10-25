//WAP to reading array using pointer and print it using pointer
#include<stdio.h>
void printNum(int arr[], int n);
int main(){

    int arr[5]={1,2,3,4,5};
    printNum(arr, 5);
    int *ptr=&arr[0];
    for(int 0;i<5;i++){
        printf("%d index is " , i);
        scanf("%d " ,(ptr+i));
    }

    


    return 0;
}
void printNum(int arr[], int n){

    for(int i=0;i<n;i++){
        printf("%d \t" ,*(ptr+i));
    }
}
