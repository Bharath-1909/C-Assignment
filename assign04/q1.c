#include<stdio.h>
int fact(long int);

int main()
{
long int n,res;
printf("enter the number:");
scanf("%ld",&n);
res=fact(n);
printf("factorial of %ld is : %ld",n,fact(n));
return 0;
}

int fact(long int n)
{
long int res;
if(n==0||n==1)
return 1;
else
{
 res=n*fact(n-1);
return res;
}
}

