#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks(0-100):");
    scanf("%d", &marks);
    
    if(marks>=0 && marks<30){
        printf("GRADE-C");


    }else if(marks>=30&&marks<70){
        printf("GRADE-B");
    }
    else if(marks>=70&&marks<90){
        printf("GRADE-A");
    }
    else{
        printf("GRADE-A+");
    }
    
    
        
    
     return 0;
}