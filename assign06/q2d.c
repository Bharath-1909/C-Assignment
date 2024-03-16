#include<stdio.h>
int strcmp(const char *str1,const char *str2);

int main()
{
char str1[20],str2[20];
int res;
printf("enter the string1: ");
scanf("%s",str1);
printf("enter the string2: ");
scanf("%s",str2);
res=strcmp(str1,str2);
if(res==0)
printf("both the strings are equal\n");
else if(res>0)
printf("string1 is greater\n");
else
printf("string2 is greater\n");
}

int strcmp(const char *str1,const char *str2)
{
	int i,res=0;
	for(i=0;str1[i]!='\0'&&str2[i]!='\0';i++)
	{
	if(!(str1[i]==str2[i]))
	 res=str1[i]-str2[i];
	}
	
	 printf("%d",res);
return res;
}








