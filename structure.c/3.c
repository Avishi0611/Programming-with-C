#include<stdio.h>
typedef struct ComputerScienceStudent{
    int roll;
    float cgpa;

}cse;

int main(){
    
    

    cse student1;
    student1.roll=156;
    student1.cgpa=7.2;
    printf("student roll no. is %d" ,student1.roll);


    return 0;
}