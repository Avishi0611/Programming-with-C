#include<stdio.h>
int main()
{
    /*for(int i=1;i<=5;i++){
        if (i==3){
            break;
        }
        printf("%d \n" ,i);   
    }
    printf("end");*/

    int n;
    do{
    printf("enter n:");
    scanf("%d" ,&n);
    printf("%d\n " ,n);
    if(n%7==0){//multiple of 7
        break;
    }

    }while(1);
   printf("it is divisible by 7");
    
    
    return 0;
}