#include<stdio.h>
long int fac(int n){
	
	if(n>=1)
	{
	return n*fac(n-1);
	}
	else
	{
		return 1;
	}}
int main()
{
	int n1;
	printf("enter the  number for factorial:");
	scanf("%d",&n1);
	printf("factorical of %d=%ld",n1,fac(n1));
	return 0;
}

	
