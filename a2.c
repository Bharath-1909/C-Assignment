#include<stdio.h>
int main()
{
int n1=0,n2=1,temp,n,i;
printf("enter the no of terms in the series u need : ");
scanf("%d",&n);
for(i=1;i<=n;i++){
temp=n1+n2;
n1=n2;
n2=temp;
printf("series : %d \n",n2);}
}
