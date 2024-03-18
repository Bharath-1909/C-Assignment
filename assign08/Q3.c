#include<stdio.h>
 struct student
{
 int rollno;
 char name[50];
 float  marks;
 };


void accept_student(struct student  *s1)
{

printf("enter the details of :(rollno,name,marks) ");
scanf("%d %s %f",&s1->rollno,s1->name,&s1->marks);
}
void print_student(struct student  *s1)
{
printf(" %-4d %-20s %.2f\n ",s1->rollno,s1->name,s1->marks);
}
