#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the numbers to find gcd");
scanf("%d %d",&a,&b);
if(a>b)
while(b!=0)
{
c=a%b;
printf("%d %% %d = %d \n",a,b,c);
a=b;
b=c;
}
return 0;}
