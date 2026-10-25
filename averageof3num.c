#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a ,b and c :");
    scanf("%d %d %d" ,&a,&b,&c);
    int avg;
    avg=(a+b+c)/3;
    printf("the average is :%d" ,avg);    
    return 0;
}