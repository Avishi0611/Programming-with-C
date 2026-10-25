//wap to print price rate of an item purchased with GST 
#include<stdio.h>
void calculatePrice(float value);

int main(){
    float value= 100.0;
 calculatePrice(value);
 printf("actual value is :%f" ,value);
 return 0;

    
}
void calculatePrice(float value){
    value=value+(0.18*value);
    printf("the final value is :%f \n" ,value);

}
