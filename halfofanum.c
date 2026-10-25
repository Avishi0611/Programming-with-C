#include <stdio.h>
int main()
{
    float x;
    printf("enter the number:");
    scanf("%f" ,&x);
    int y;
    y=x;
    printf("%d" ,y);
    float z=x-y;
    printf("the fractional part of the number is :%f" ,z);


    return 0;

    
}