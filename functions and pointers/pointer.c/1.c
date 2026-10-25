#include<stdio.h>
int main(){
    int age=22;
    int *ptr=&age;
    
    // simple code

    int _age=*ptr;
    printf("%d" ,_age); 

  //address printing
    
    printf("%p\n" ,&age);
    printf("%u\n" ,ptr);
    printf("%p" ,&ptr);

//value printing

 printf("%d \n" ,age);
 printf("%d \n" ,*ptr);
 printf("%d" ,*(&age));



    return 0;
}