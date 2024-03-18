/*#include<stdio.h>
typedef struct student
{
 int rollno;
 char name[50];
 float  marks;
 }std_t;

void accept_student(std_t *s1);
void print_student(std_t s1);

int main()
{
std_t s1;
accept_student(&s1);
print_student(s1);
return 0;
}

*/
void accept_student(std_t *s1)
{
printf("enter the details of :(rollno,name,marks) ");
scanf("%d %s %f",&s1->rollno,s1->name,&s1->marks);
}
void print_student(std_t s1)
{
printf("%-4d %-20s %.2f ",s1.rollno,s1.name,s1.marks);
}
