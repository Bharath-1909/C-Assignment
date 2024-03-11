#include<stdio.h>
int main()
{
int i,num,fact=1;
printf("enter the num: ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
fact=fact*i;
}
printf("the factorial of given number :%d\n", fact);
}

