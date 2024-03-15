#include<stdio.h>
char *my_strcpy(char *dest,const char *src);

int main()
{
char str3[20],str2[20];
printf("enter the string: ");
scanf("%s",str3);

my_strcpy(str2,str3);
printf("the copied string : %s",str2);
}


char* my_strcpy(char *dest,const char *src)
{
	int i;
	for(i=0;src[i]!='\0';i++)
	{
	dest[i]=src[i];
	}
	dest[i]='\0';

return dest;
}

