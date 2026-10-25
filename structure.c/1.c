#include<stdio.h>
#include<string.h>
// user defined , declaration of data type
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    
struct student s1;
s1.roll=132;
s1.cgpa=9.53;
strcpy(s1.name,"avishi");
printf("student name =%s" ,s1.name);
printf("\nstudent roll no. =%d" ,s1.roll);
printf("\nstudent cgpa =%f" ,s1.cgpa);

struct student s2;
s2.roll=133;
s2.cgpa=8.98;
strcpy(s2.name,"avika");
printf("\nstudent name =%s" ,s2.name);
printf("\nstudent roll no. =%d" ,s2.roll);
printf("\nstudent cgpa =%f" ,s2.cgpa);

struct student s3;
s3.roll=134;
s3.cgpa=9.89;
strcpy(s3.name,"avani");
printf("\n  student name =%s" ,s3.name);
printf("\nstudent roll no. =%d" ,s3.roll);
printf("\nstudent cgpa =%f" ,s3.cgpa);
return 0;
}
