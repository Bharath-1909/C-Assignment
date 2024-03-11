#include<stdio.h>
int main()
{
	int i ,num,a,b;
	printf("enter the num");
	scanf("%d",&num);
	i=2;
	while(i<=num)
	{
	if(num%i==0)
	{
	num=num/i;
	printf("%d%c",i,'*');
	}
	else
	i++;
	}
	printf("\b");    
}

