//wap to find square  root of a number
#include<stdio.h>
#include<math.h>
float squareRoot(float n);
int main(){

    int n;
    printf("enter the number:");
    scanf("%d" ,&n);
    
    squareRoot(n);
    
    return 0;

}
float squareRoot(float n){
   
   
    printf("the square root is %f" , pow(n,1.0/2.0));
    
}
