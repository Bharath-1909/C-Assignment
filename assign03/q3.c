#include<stdio.h>
#include<math.h>
int main()
{
int i,c,a,b=0,ch,num,sum=0;
printf("enter the num  :");
scanf("%d",&num);
printf("enter what you want to perform ,1.sum 2.revers 3.palindrome 4.armstrong   ");

scanf("%d",&ch);
switch(ch)
{
case 1: printf("you have opted for cal sum of digits\n");
		i=0;
		while(i<num)
		{
		sum+=num % 10;
		//sum += num;
		num /=10;
		//i++;
		}
		printf("sum of digits: %d\n",sum);
		break;

case 2:printf("you have opted for num rev : \n");
		//int a,b;
		i=0;
		while(i<num)
		{
		a=num%10;
		b=b*10+a;
		num=num/10;
		}
		printf("reverse of the number is : %d\n", b);
		break;

case 3:printf("you have opted for num polindrome :\n");
		//int a,b;
		i=0;
		//int c;
		c=num;
		while(i<num)
		{
		a=num%10;
		b=b*10+a;
		num=num/10;
		}
		if(c==b)
		printf("the given number is a polindrome :");
		else
		printf("the given number is not a polindrome");
		break;

case 4:printf("you have opted to check about armstrong\n");
		//int a,b;
		i=0;
		//int c;
		c=num;
		while(i<num)
		{
		a=num%10;
		b+=pow(a,3);
		num=num/10;
		}
		if(c==b)
		printf("the given num is armstrong");
		else
		printf("the given num is not  armstrong");
		break;
}}
