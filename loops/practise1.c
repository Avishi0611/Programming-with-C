#include<stdio.h>//sum of first n natural number 
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d" ,&n);

    int sum=0;
    for(int i=1; i<=n ; i++){
        sum=sum +i;
        printf("%d \n" , i);
        

    }
    printf("sum is %d " ,sum);

    return 0;
}