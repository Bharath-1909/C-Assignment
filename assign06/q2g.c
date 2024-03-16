#include<stdio.h>
char *strchr(const char *str,int ch);

int main()
{
char str[20]="i am student of desd";
char ch;
char *ptr;
printf("enter the char");
scanf("%c",&ch);
printf("%s\n",str);
ptr=strchr(str,ch);
if(ptr==NULL)
printf("the char does not found in string\n");
else
printf("the char found in the string\n");
return 0;
}


char *strchr(const char *str,int ch)

{
for(int i=0;str[i]!='\0';i++)
{
if(str[i]==ch)
return i;
}

return NULL;
}











