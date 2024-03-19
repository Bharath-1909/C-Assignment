#include<stdio.h>
#include"header3.h"
#include<string.h>

void sorting_s(struct student *s1);

int main()
{
std_t s1[3];
for(int i=0;i<3;i++)
accept_student(&s1[i]);
printf("Strucutre before sorting:\n ");
for(int i=0;i<3;i++)
print_student(&s1[i]);
sorting_s(s1);

return 0;
}


void sorting_s(struct student *s1)
{
	for(int i=0;i<2;i++)
	{ 
		for(int j=i;j<3;j++)
		{
		if(s1[i].rollno>s1[j].rollno)
		{
			    		int temp=s1[i].rollno;
				   s1[i].rollno= s1[j].rollno;
				   s1[j].rollno=temp;
				   char name[20];
				   strcpy(name,s1[i].name);
				   strcpy(s1[i].name,s1[j].name);
				   strcpy(s1[j].name,name);
					float tempv=s1[i].marks;
				   s1[i].marks= s1[j].marks;
				   s1[j].marks=tempv;
					

		}		
		}
	}

printf("structure after sorting\n");
for(int i=0;i<3;i++)
print_student(&s1[i]);
}


























