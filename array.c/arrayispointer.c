#include<stdio.h>
int main(){
     
     int aadhar[5];
     //input
       int *ptr=&aadhar[0];
       for(int i=0;i<5;i++){
        printf("%d index is :" ,i);
        scanf("%d" ,(ptr+i));  //or the other way scanf("%d" ,&aadhar[i]);

       }

       //output
       for(int i=0;i<5;i++){
        printf("%d index is: %d \n" ,i,*(ptr+i));  //the other way is printf("%d index is :%d \n",i,aadhar[i]);
       }

    return 0;

}