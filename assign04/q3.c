#include<stdio.h>
int flag=0;
int cal(int,char,int);
int main()
{
int n1,n2,res;
char opr;
printf("enter the operator1 and operator2:");
scanf("%d%d",&n1,&n2);
printf("enter the operator");
scanf("%c",&opr);
res=cal(int n1,char opr,int n2);
if(flag==0)
printf("%d %c %d : %d\n",n1,opr,n2,res);
else
flag=0
return 0;
}
int cal(int n,char c,int m)
{
char choice;
int res
{
do
{
//printf("enter which operation you want to perform add,sub,mul or add:");
//scanf("%c",&choice);
switch(c)
{
case '+':res=n+m;
		printf("addition :%d\n",res);
		break;

case '-':res=n-m;
		printf("subscration :%d\n",res);
		break;

case '*':res=n*m;
		printf("multiplication :%d\n",res);
		break;

case '/':res=n/m;
		printf("division :%d\n",res);
		flag=1
		break;
printf("do you want to continue?n/y\n");
scanf("%c",&choice);
}
while(choice!='n');











}
