#include<stdio.h>
int main()
{

int a,b,ch;
printf("Enter the operation you want to preform 1)adition 2)substraction 3)multiplication 4)division");
scanf("%d",&ch);
printf("enter the first number");
scanf("%d",&a);
printf("enter the second number");
scanf("%d",&b);
switch(ch)
{
case 1:printf("%d",a+b);
	break;
case 2:printf("%d",a-b);
	break;
case 3:printf("%d",a*b);
	break;
case 4:printf("%d",a/b);
	break;
defalut:printf("enter valid number");
}
return 0;
}


