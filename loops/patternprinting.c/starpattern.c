#include<stdio.h>
int main(){
    int n;//n=no of rows
    printf(" enter no of rows :");
    scanf("%d" ,&n);


/*for(int i=1;i<=4;i++){
    for(int j=1;j<=6;j++){
        if(i==1|| i==4 || j==1||j==6){
            printf("*");
        
        }
        
        
    }printf("\n");
  }
  return 0;
}*/


    for(int i=1;i<=n;i++){
        
        for(int i=1;i<=n;i++){
            
            printf("*");
            
        }
        printf("\n");
        
    }
    return 0;
}


   
   
  /*for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        if(j==3 || i==3){
            printf("*");
        }else{printf("#");
        }
    }printf("\n");
   }
   return 0;
}*/
