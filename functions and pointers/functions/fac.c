//WAP to find factorial of a number using recursive function.
#include<stdio.h>
int fact(int n);
int main(){

    
    printf("the factorial is %d" ,fact(5) );

    return 0;
}
int fact(int n){
    if(n==1){
        return 1;
    }

    int factNm1=fact(n-1);// factorial of n-1
    int factN=factNm1 * n;//factorial of n
    return factN;

}