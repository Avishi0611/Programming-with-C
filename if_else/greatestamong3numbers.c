#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the values  of a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(a>c)){
    printf("a is largest");
    }
    if((b>a)&&(b>c)){
    printf("b is largest");
    }
    else{
    printf("c is largest");
    }
    
    return 0;

}