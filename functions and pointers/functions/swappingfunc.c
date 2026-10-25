#include <stdio.h>
void swapbyvalue(int a , int b );
void swapbyreference(int *a , int *b);

int main(){
    int a = 2;
    int b = 7;
    printf("With call by value: \n");
  swapbyvalue(a,b);
  printf("With call by reference: \n");
  swapbyreference(&a,&b);
      printf("a=%d\t",a);
      printf("b=%d\t",b);
return 0;
}
//Call by value
    void swapbyvalue(int a,int b){
        a = a+b;
        b = a-b;
        a = a-b;
        printf("a=%d\t",a);
        printf("b=%d\n",b);
    } 
    //Call by reference 
    void swapbyreference(int *a,int *b){
        int temp = *a;
        *a = *b;
        *b=temp;
        }