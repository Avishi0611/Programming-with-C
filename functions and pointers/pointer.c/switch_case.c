//WAP to perform basic arithmetic operation using switch case
#include<stdio.h>
int main(){

   int a,b,n;
   printf("enter n:");
   scanf("%d" ,&n);
   printf("enter the numbers:");
   scanf("%d %d",&a ,&b);

   switch(n){
     case 1:printf("sum=%d" ,a+b);
     break;
     case 2:printf("difference=%d" ,a-b);
     break;
     case 3:printf("product=%d" ,a*b);
     break;
     case 4:printf("division=%d" ,a/b);
     break;
     case 5:printf("mod=%d" ,a%b);
     break;
     default: printf("not an arithematic operation");
     break;
   }
 return 0;
 }
  

