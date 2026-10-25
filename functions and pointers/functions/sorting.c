#include<stdio.h>
int main(){
     int arr[20],n,i,temp;

     printf(" enter the no. of elements in an array:");
     scanf("%d" ,&n);

    printf("enter the %d elements of an array:" ,n);
     for(i=0 ;i<n;i++){
        scanf("%d" ,&arr[i]);

     }
     for(i=0; i<n;i++){
        for(int j=i+1;j<n;j++){
             if(arr[i]>arr[j]){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        }
        }


 }
 printf("the elements in ascending order are:");
     for(i=0;i<n;i++){
        printf(" %d" ,arr[i]);
    

     }
     return 0;


}