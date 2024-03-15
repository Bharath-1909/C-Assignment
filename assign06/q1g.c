#include<stdio.h>
#include<string.h>
int main()
{
char str[20]="i am studying pgdesd";
char ch;
char *ptr;
printf("enter the char : ");
scanf("%c",&ch);
printf("str: %s\n",str);
ptr=strchr(str,ch);
if(ptr==NULL)
printf("the char doesn't found\n");
else
printf("the char is found\n");

printf("%s",ptr);
return 0;
}
