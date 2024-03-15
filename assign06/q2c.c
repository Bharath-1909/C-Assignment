#include<stdio.h>
char *my_strcat(char *dest, const char *scr);

int main()
{
char str1[40],str2[20];
printf("Enter the string1: ");
scanf("%s",str1);
printf("Enter the string2: ");
scanf("%s",str2);
my_strcat(str1,str2);
printf("the concat string :%s\n",str1);
}

char *my_strcat(char *dest, const char *scr)
{
	int i,j;
	for(i=0;dest[i]!='\0';i++);
	for(j=0;scr[j]!='\0';j++)
	{
		dest[i]=scr[j];
		i++;

	}
	dest[i]='\0';
return dest;
}





	
