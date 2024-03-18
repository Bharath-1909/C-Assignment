#include<stdio.h>
#include"header3.h"

void student_info(std_t *s);
int main()
{
std_t s1[3];
for(int i=0;i<3;i++)
accept_student(&s1[i]);
for(int i=0;i<3;i++)
print_student(&s1[i]);
student_info(s1);
return 0;
}


void student_info(std_t *s1)
{
	int s_r=0;
	int flag=0;
	printf("enter the student roll number");
	scanf("%d",&s_r);
	for(int i=0;i<3;i++)
	{
		if(s1[i].rollno==s_r)
		{
		printf("the student details are : ");
		printf(" %-4d %-20s %.2f\n ",s1[i].rollno,s1[i].name,s1[i].marks);
		flag=1;
		break;
		}
	}
	if(flag==0)
      printf("the student does not exist");
}



























