#include<stdio.h>
int main()
{
int num;
printf("enter the number :");
scanf("%d",&num);
int j=num;
int count=0,i,c;
while(count>5)
{

num++;
c=0;

for(i=1;i<num/2;i++)
  { 
  	if(num%i==0)
	{
	c++;
	}
  }
if(c==1)
{
printf("%-4d",i);	
count++;
}
}
}
