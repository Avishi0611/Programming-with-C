//WAP to find sum of a range using function.
#include<stdio.h>
int sum(int n);

int main(){
    printf("the sum is %d" ,sum(25));
    return 0;

}
//recursive function
int sum(int n){

    if(n==1){
        return 1;
    }
    int sumNm1=sum(n-1);//sum from 1 to n-1
    int sumN= sumNm1 +n;//sum from 1 to range
    return sumN;
}