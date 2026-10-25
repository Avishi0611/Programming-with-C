//WAP a program to find area and circumference of circle
#include<stdio.h>
int main()
{
    float r,c,a;//declaration of variables
    printf("enter radius:");
    scanf("%f" ,&r);
    float pi=3.14;
    c=2*pi*r;
    a=pi*r*r;
    printf("the circumference of circle is : %f",c);
    printf("\n5.64the area of circle is : %f", a);
     return 0;
}
