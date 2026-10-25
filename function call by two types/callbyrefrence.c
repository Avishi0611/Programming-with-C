#include<stdio.h>
void _square(int *n);
int main(){
    int number=4;
    int *n=&number;
    _square(*n);
    printf("the number is %d \n" ,number);
    return 0;

}
void _square (int *n){
    *n=(*n) * (*n);
    printf("the square is :%d \n", *n);
}