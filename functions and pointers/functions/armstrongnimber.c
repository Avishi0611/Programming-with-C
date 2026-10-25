#include<stdio.h>
int main(){
    int n,c,arm=0,r;
    
    printf("enter n:");
    scanf("%d" ,&n);
    n=c;

    while(n>0){
        r=n%10;
        arm=arm +(r*r);
        n=n/10;
    } if(n==c)
{
    
        printf("Armstrong number");
}
    else{
        printf("not an armstrong number");
    }
    return 0;
}