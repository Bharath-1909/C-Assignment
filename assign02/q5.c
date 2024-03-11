#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the first number");
scanf("%d",&a);
printf("enter the second number");
scanf("%d",&b);
printf("enter the third number");
scanf("%d",&c);
if(a>b)
{
if(a>c)
printf("the first number is greater");
else
printf("the third number is greater");
}
else 
{
if(b>c)
printf("the second  number is greater");
else
printf("the third  number is greater");
}}

