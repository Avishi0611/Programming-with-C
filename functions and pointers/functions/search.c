#include<stdio.h>
int main(){

    int search,n,i,arr[250];
    printf("enter the number of elements in an array:");
    scanf("%d",&n);

    printf("\n enter %d  elements of the array one by one" ,n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    printf("enter the element you want to search");
    scanf("%d" ,&search);

    for(i=0;i<n;i++){
        if(arr[i]==search){
            printf("%d is the element located at %d" ,search,i+1);
            break;
        }
        if (i==n){
            printf("\n %d is not available in the gievn array" ,search);
            
        }
}
return 0;
}