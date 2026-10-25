//WAP a program to to swap two numbers using 3rd variable
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a:");
    scanf("%d" ,&a);
    printf("enter the value of b:");
    scanf("%d" ,&b);  
    printf("enter the value of c:");
    scanf("%d" ,&c);
    c=b;
    b=a;
    a=c;
    printf("the swapped value are:%d %d" ,a,b);



    return 0;
}