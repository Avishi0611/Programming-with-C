#include<stdio.h>
int main()// continue statement
{
    for(int i=5;i<=50;i++){
    if(i%2!=0){
            printf("%d \n" ,i);
        }

   }

  int n ;//factorial of n
  printf("enter n:");
  scanf("%d" ,&n);

  int fact=1;
  for(int i=1;i<=n;i++){
    fact=fact*i;
     }
     printf("final factorial is %d" ,fact);



  int n ;// reverse table of any n
  printf("enter n:");
  scanf("%d" ,&n);
 
   for(int i=10;i>=1;i--){
    printf("%d \n" ,n*i);
   }


  
    int sum=0;//sum of all numbers from 5 to 50
    for(int i=5;i<=50;i++){
        sum+=i;
        
    }
        printf("%d\n", sum);
    

        
    return 0;
}


