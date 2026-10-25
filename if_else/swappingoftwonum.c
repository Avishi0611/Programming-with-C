//WAP a program to  swap two numbers without using 3rd variable 
#include<stdio.h>
int main()
{
   int a,b;
   printf("enter the values of a and b:");
   scanf("%d %d" ,&a,&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("the swapped values are : %d %d" ,a,b );
   return 0;
}