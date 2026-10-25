//WAP a program to find Simple interest and Compound interest
#include <stdio.h>
#include <math.h>
int main()
{
    float r,t,n,p;
    printf("enter principal:");
    scanf("%f", &p);
    printf("enter annual interest rate:");
    scanf("%f", &r);
    printf("enter Time:");
    scanf("%f", &t);
    printf("enter n (number of times interest is compounded per year):");
    scanf("%f", &n);
    
    float si=p*r*t/100;
    float ci=p*pow((1+r/n),(n*t));
    
    printf("the value of SI is :%f \n" ,si);
    printf("the value of CI is :%f" ,ci);

    return 0;
}
