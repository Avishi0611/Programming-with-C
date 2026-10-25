#include<stdio.h>
int main(){
  int start , end , count;
  printf("Enter the starting number :");
  scanf("%d" , &start);
   printf("Enter the ending number :");
  scanf("%d" , &end);
  for(int i=start ; i<=end;i++){
    if(i<2){
      continue;
    }
    count=0;
    for(int j=2;j<=i/2;j++){
      
      if(i%j==0){
        count++;
        break;
      }
    }
    if(count==0){
      printf("%d " ,i);
    }
  }
  return 0;
}