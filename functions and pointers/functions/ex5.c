#include<stdio.h>
 float squarearea(float side);
 float rectanglearea(float a, float b);
 float circlearea(float rad);

 int main(){
    float a=10;
    float b=8;
    printf(" area of recatngle is %f \n" ,rectanglearea(a,b));
    float side=8;
    printf(" area of  square is %f\n" ,squarearea(side));
    float rad=2;
    printf(" area of circle is %f" ,circlearea(rad));
       return 0;
 }
  float squarearea(float side){
    return side*side;

  }
   float rectanglearea(float a, float b){
    return a*b;

   }
   float circlearea(float rad){
      return 3.14*rad*rad;
   }



    


 