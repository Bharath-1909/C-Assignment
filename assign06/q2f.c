#include<stdio.h>
char *strrev(char *s);

int main()
{
char str[20];
printf("enter the string :");
scanf("%s",str);
strrev(str);
printf("the reversed string : %s",str);
}

char *strrev(char *s)
{   
	int i=0,j=0;
	for(;s[j]!='\0';j++);
	j--;
	for(;i<j;i++,j--)
	{
	char temp=s[i];
	s[i]=s[j];
	s[j]=temp;
	}
	return s;
}









