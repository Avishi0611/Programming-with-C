#include <stdio.h>

int main() {
  int num, reverse = 0;

  printf("Enter an integer: ");
  scanf("%d", &num);
  //reverse the number using for loop
  for(;num!= 0;num /=10 ){
    reverse=reverse *10 +(num%10);
    //add the last digit to reverse
  }
// output the reversed number
printf("Reversed number :%d \n ", reverse);
return 0;
}

  