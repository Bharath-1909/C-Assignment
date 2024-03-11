#include<stdio.h>
int main()
{
	int i ,num,a,b;
	printf("enter the num");
	scanf("%d",&num);
	i=1;
	b=num;
	while(i<=num/2)
	{if(num%i==0)
		{		a=num/i;
			if(a>i)
				printf("%d * %d =%d\n ",i,a,b);
		}	i++;}
	return 0;
}

