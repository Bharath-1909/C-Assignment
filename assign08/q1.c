#include<stdio.h>

typedef struct student 
{
 int rollno;
 char name[20];
 float marks;
 }std_t;

int main()
{
std_t s1;
printf("enter the roll number,name and marks of the students :");
scanf("%d %s %f",&s1.rollno,s1.name,&s1.marks);
printf("roll no:%d\n name: %s\n marks: %f\n",s1.rollno,s1.name,s1.marks);
}
