#include<stdio.h>
int main()
{
int q;
printf("enter the Quantity :");
scanf("%d",&q);
if(q<=30)
printf("the price for quantity is :%d\n",q*5);
else if (q>=30&& q<=50)
printf("the price for quantity is :%.1f\n",q*4.5);
else
printf("the price for quantity is :%.1f\n",q*3.5);
return 0;
}
