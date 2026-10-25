#include<stdio.h>
int main(){
    int rows ,i,j,space;

    printf("enter the number of rows for pyramid:");
    scanf("%d" , &rows);
    
    for(i=rows ;i>=1 ; i--){
        //printing space
        for (space =1; space<=rows -i;space++){
            printf(" ");

    
        }// printing stars
        for(j=1 ;j<= (2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
    
    }