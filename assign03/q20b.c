#include<stdio.h>
int main()
{
int i,temp,rem,sum=0;
printf("the armstrong numbers are");
for(i=1;i<=500;i++)
{	
	temp=i;
	sum=0;
	while(temp!=0)
	{
	rem=temp%10;
	sum+=rem*rem*rem;
	temp=temp/10;
	}
	if(sum==i)
	printf("%-4d",i);
	}

}
	
