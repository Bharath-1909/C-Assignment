#include<stdio.h>
int main()
{
int n1,n2,a,b,c,d;
printf("enter the number");
scanf("%d",&n1);
n2=n1;
a=n1%10;
n1=n1/10;
b=n1%10;
n1=n1/10;
c=n1%10;
n1=n1/10;
d=n1%10;
printf("%d  %d  %d  %d\n ",d,c,b,a);
printf("%d=%d +%d +%d +%d\n ",n2,d*1000,c*100,b*10,a);
printf("%d%d%d%d\n",a,b,c,d);
return  0;
}


