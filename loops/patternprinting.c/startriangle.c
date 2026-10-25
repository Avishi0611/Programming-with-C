#include<stdio.h>
int main(){
    int n;//n=no of rows
    printf(" enter no of rows :");
    scanf("%d" ,&n);

     for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            
            printf("*");
            
        }
        printf("\n");
        
    }
      return 0;
}