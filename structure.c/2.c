#include<stdio.h>
#include<string.h>
struct student{

    char name[100];
    int roll;
    float cgpa;

    };
    void printInfo(struct student s1);
    int main(){
         struct student s1={"sunita" ,124 , 2.5};
         printInfo(s1);

        

        //initialisation of structure

   /*
   struct student s1={"sunita" ,124 , 2.5};
    printf("student name=%s \n " ,s1.name);*/ 

    // pointer to structure
    
   /*struct student s1={"sunita" ,124 , 2.5};
   struct student *ptr=&s1;
   printf("student name =%s\n" ,ptr->name);
      printf("student roll =%d\n" ,ptr->roll);
         printf("student cgpa =%f\n" ,ptr->cgpa);

         
   */

  // call by value 





    return 0;
    }

    void printInfo(struct student s1){

        printf("student name=%s" ,s1.name);
        
    }
    
