#include<stdio.h>
int main()
{
    
    int n;//n=no of rows
    printf(" enter no of rows :");
    scanf("%d" ,&n);

    int m;//n=no of columns
    printf(" enter no of columns :");
    scanf("%d" ,&m);



    for(int i=1;i<=n;i++){// outer loops - no of lines-no of rows
        for(int i=1;i<=m;i++){//innner loop-  no of stars in each line-no of columns
            printf("*");
            
        }printf("\n");



    }return 0;

}