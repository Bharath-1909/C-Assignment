#include<stdio.h>
int main()
{
int n1;
printf("enter the number ");
scanf("%d",&n1);
if(n1>0)
printf("the given number is positive number");
else if(n1<0)
printf("the given number is negative number");
else
printf("the given number is zero");
return 0;
}
