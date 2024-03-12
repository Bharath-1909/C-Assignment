#include<stdio.h>
char fun(char);
int main()
{
int a,res;
char ch;
printf("enter the char");
scanf("%c",&ch);
printf("how many times you want to call the function");
scanf("%d",&a);
while(a!=0)
{
res=fun(ch);
printf("the given char is :%c \n",res);
a--;
}
return 0;
}
char fun(char ch)
{
	return ch;
}
