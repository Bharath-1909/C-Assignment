#include<stdio.h>

int main()
{
char s[20]="i am the student of desd";
char ch;
char *ptr;
printf("enter the char ch");
scanf("%c",&ch);
for(int i=0;s[i]!='\0';i++)
{
if(s[i]==ch)
{
 for(int j=i;s[j]!='\0';j++)
{
s[j]=s[j+1];
 }
 }
 }
printf("%s\n",s);
 return 0;
 }
