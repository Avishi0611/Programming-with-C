//WAP to perform temperature conversion among degree fahrenheit to celsius
#include <stdio.h>
int main()
{
    float F;
    printf("enter the temperature in fahrenheit:");
    scanf("%f", &F);
    float C;
    C=(F-32)/1.8;
    printf("the temperature in degree celsius is :%f" ,C);
    return 0;

}