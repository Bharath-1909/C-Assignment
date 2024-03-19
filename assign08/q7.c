#include<stdio.h>



typedef struct student
{
	char name[20];
	int rollno;
	int std:4;
	char gender:1;
	int age:5;

}std_t;


void accept_struc(std_t *s);
void print_struc(std_t *s);

int main()

{
	std_t s1[3];
	for(int i=0;i<3;i++)
		accept_struc(&s1[i]);
	for(int i=0;i<3;i++)
		print_struc(&s1[i]);
}



void accept_struc(std_t *s)
{    int class;
	char gen;
	int ag;
	printf("enter the name, roll no, std ,gender ,age of the student: ");
	scanf("%s %d %d %*c%c %d",s->name,&s->rollno,&class,&gen,&ag);
	s->rollno=class;
	s->gender=gen;
	s->age=ag;
}



void print_struc(std_t *s)
{
	printf("%-20s%-5d%-5d%-5c%-5d\n",s->name,s->rollno,s->std,s->gender,s->age);
}

