#include<stdio.h>

//function declaration
//void printNumbers(int arr[], int n);
 void printNumbers(int *arr, int n);


// function call
int main(){
    int arr[6]={1 ,2, 3, 4, 5, 6};
    printNumbers(arr,6);
    return 0;
}

// function defination
void printNumbers(int *arr, int n){

    for(int i=0;i<n;i++){
        printf("%d \t" , arr[i] );// \t is used for giving tab space
         
    }
}