#include<stdio.h>
int main()
{
	long int fact=1,i;
	printf("enter the number that you want to find factorial! :");
	scanf("%ld",&i);
	if(i==0||i==1)
		printf("%d\n",fact);
	else
	{
		for(int j=2;j<=i;j++)
		{
			fact=fact*j;
		//	printf("%d\n",j);
		//	printf("%ld\n",fact);
		}
	//return fact;
	}
	printf("%ld\n",fact);
return 0;
}
