#include<stdio.h>
int my_stricmp(const char *str1,const char *str2);

char *strupr(char *s);

char *strlwr(char *s);

int main()
{
	char str1[20],str2[20];
	int res;
	printf("enter the string1: ");
	scanf("%s",str1);
	printf("enter the string2: ");
	scanf("%s",str2);
	res=my_stricmp(str1,str2);
	
	if(res==0)
		printf("both the strings are equal\n");
	else if(res>0)
		printf("string1 is greater\n");
	else
		printf("string1 is lesser\n");
}

int my_stricmp(const char *str1,const char *str2)
{   
	int i=0,n,res=0;
	//char *s1,*s2;
	printf("how do you want convert the string 1.uppercase 2.lowercase\n");
    scanf("%d",&n);
   
	switch(n)
	{
	case 1:
			str1=strupr(str1);
			printf("%s\n",str1);
			str2=strupr(str2);
			printf("%s\n",str2);
			break;
	case 2:
			str1=strlwr(str1);
			str2=strlwr(str2);
			break;
	defualt:
			printf("enter the valid option");
	} 
	
  printf("%s\n",str1);
  printf("%s\n",str2);
   	for( i=0;str1[i]!='\0';i++)
	{ 
		//printf("%s\n",str1);
	 	//printf("%s\n",str2);
	if(str1[i]!=str2[i])
	{		
		printf("%c\n",str1[i]);
		printf("%c\n",str2[i]);
	 return res=str1[i]-str2[i];
	}
	}
return res;
}

char *strupr(char *s)
{
 	for(int i=0;s[i]!='\0';i++)
 	{	
 		if(s[i]>=97 && s[i]<=122)
			s[i]-=32;
 	}
	return s;
}


char *strlwr(char *s)
{
 	for(int i=0;s[i]!='\0';i++)
 	{	
 		if(s[i]>=65 && s[i]<=90)
			s[i]+=32;
 	}
	return s;
}
