#include<stdio.h>
int main()
{
int n1,c1;
printf("enter the month :");
scanf("%d",&c1);
printf("enter the year :");
scanf("%d",&n1);
if(c1==1||c1==3||c1==5||c1==7||c1==9||c1==11)
printf("The no of Days is : 31\n");

if(c1==2)
{
if((n1%100!=0&&n1%4==0) || n1%400==0)
{
printf("The no.days are :29\n");
}
else
printf("the no.of days are :28\n");
}

if(c1==4||c1==6||c1==8||c1==10||c1==12)
printf("the no.of days are : 30\n");
if((n1%100!=0&&n1%4==0) || n1%400==0)
printf("leap year \n");
else
printf("not a leap year \n");
 return 0;
 }

