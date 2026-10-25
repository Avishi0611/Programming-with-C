//wap to reverse an array
#include<stdio.h>
void reverse(int arr[],int n);
void printArr(int arr[],int n);
int main(){
    int arr[5]={23,5,96,46,56};
  
    reverse(arr,5);
    printArr(arr,5);

    return 0;
 }

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d \t" ,arr[i]);

    }
    
        printf("\n");

}
void reverse(int arr[],int n){

    for(int i=0;i<n/2;i++){
        int firVal= arr[i];
        int secVal= arr[n-i-1];
        arr[i]=secVal;
        arr[n-i-1]=firVal;

    }
}