#include<stdio.h>



typedef struct student
{
	char name[20];
	int rollno;
	int std;
	char grade;
	float percentage;

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
{
	printf("enter the name roll no std of the student: ");
	scanf("%s %d %d",s->name,&s->rollno,&s->std);

	if(s->std<=4)
	{
		printf("enter the student grade :");
		scanf("%*c%c",&s->grade);
	}
	else
	{
		printf("enter the percentage :");
		scanf("%f",&s->percentage);
	}
}


void print_struc(std_t *s)
{
	printf("%-20s%-5d%-5d\t",s->name,s->rollno,s->std);
	if(s->std<=4)
	{
		printf("%-4c\n",s->grade);
	}
	else
	{
		printf("%-4f\n",s->percentage);
	}
}
