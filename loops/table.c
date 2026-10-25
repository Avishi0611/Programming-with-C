#include<stdio.h>//table of any number given by user
int main()
{
    int n;
    printf("enter n:");
    scanf("%d" ,&n);

    for(int i=1;i<=10;i++){
        printf("%d \n ", n*i);
    }

    
    
    return 0;
}