#include<string.h>
#include<stdio.h>
char *strstr(const char *str,const char *substr);

int main()
{
char str[64]="I am student of Desd";
char substr[4]="am";
char *ptr=strstr(str,substr);
printf("ptr=%u \n",ptr);
printf("ptr=%s \n",ptr);
return 0;
}

char *strstr(const char *haystack,const char *needle)
{
	size_t n_len=strlen(needle);
	 
	 for(int i=0;haystack[i]!='\0';i++)
	 {
	 if( haystack[i]==needle[0])
	 {
	  if(!strncmp(haystack+i,needle,n_len))
	  return haystack+i;
	  }
	  }
	  return NULL;
	  }





