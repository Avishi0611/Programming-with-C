//WAP to perform temperature conversion among degree celsius to fahrenheit
#include<stdio.h>
int main()
{
    float C;
    printf("enter the temperature in degree celsuis:");
    scanf("%f", &C);
    float F=1.8*C+32;
    printf("the temperature in degree fahrenheit is :%f" ,F);
    return 0;

}