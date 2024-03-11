#include<stdio.h>
int main()
{
int n1;// without using logical operator
printf("enter the year");
scanf("%d",&n1);
if(n1%100 !=0)
{
if(n1%4==0)
{
printf("the given year is a leap year:\n ");
}
else
{
printf("The given year is not a leap year:\n");
}}
else 
{
if(n1%400==0)
printf("the given year is a leap year:\n");
else
printf("The given year is not a leap year:\n");
}

printf("with using logical operator......................\n");

if(n1%100 !=0 && n1%4==0 )
printf("The given year is a leap year\n");
else if (n1%400==0)
printf("The given Year is a leap year \n");
else
printf("the given year is not a leap year \n");

printf("using conditional operator.......................\n");

(n1%100!=0&&n1%4==0)?printf("the given year is leap year \n"):(n1%400==0)?printf("the given year is leap year\n"):printf("the given year is not a leap year\n");

return 0;
}
