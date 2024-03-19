#include<stdio.h>
int main()
{
int num,flag=0;
printf("enter  the number :");
scanf("%d",&num);
for(int i=2;i<=num/2;i++)
{
if(num%i==0)
flag=1;
}
if(flag==1)
printf("the number is a composite number");
else
printf("the number is a prime number");
return 0;
}
