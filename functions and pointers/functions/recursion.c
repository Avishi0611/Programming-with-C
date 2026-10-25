#include<stdio.h>
void Temp(int T);


int main(){

    int T;
    printf("enter temperature:");
    scanf("%d" ,&T);
     Temp(T);
    
     return 0;
     
} 
void Temp(int T){
    if(T >=27){
        printf("hot");
    }else{
        printf("cold");
    }
}

      