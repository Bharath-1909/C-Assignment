#include<stdio.h>

int main()
{
char str[30]="123456";
int i=0;
for(int j=0;str[j]!='\0';j++)
{
	//printf("%c\n",str[j]);
  	i=i*10;
	//printf("%d\n",i);
	i+=str[j]-'0';
	//printf("%d\n",i);
 }
 printf("%d\n",i);
 }




