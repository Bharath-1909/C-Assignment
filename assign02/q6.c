#include<stdio.h>
int main()
{
int n1,n2=0,n3;
printf("enter the number:");
scanf("%d",&n1);
n3=n1;
n2+=n1%10;//n2=n2+12321%10...n2=n2+1...n2=1
n1=n1/10;//n1/10=1232.....
n2=n2*10;//n2=10

n2+=n1%10;//n2=10+2=12
n1=n1/10;//n1=2
n2=n2*10;//n2=120

n2+=n1%10;
n1=n1/10;
n2=n2*10;

n2+=n1%10;
n1=n1/10;
n2=n2*10;

n2+=n1%10;

if(n2==n3)
printf("The given number is polindrome");
else
printf("the given number is not a polindrome");
return 0;
}

