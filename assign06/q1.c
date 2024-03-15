#include<stdio.h>
#include<string.h>

int main()
{
char str[40],str2[20],str3[20];
size_t len;
printf("Enter the string: ");
scanf("%[^\n]s",str);
printf("Enter the second string: ");
scanf("%s",str3);

printf("str:%-4s\n",str);
len=strlen(str);
printf("the len :%d\n",len);
strcpy(str2,str);
printf("the copied str to str2 is : %-4s\n",str2);

strcat(str,str3);
printf("the concat of str and str3  is : %-4s\n",str);

int res=strcmp(str,str3);
printf("the copmarision of str and str3:%d\n",res);

int i,res1;
printf("enter the number you want to compare");
scanf("%d",&i);

res1=strncmp(str,str2,i);
printf("the copmarision of str and str3:%d\n",res1);

//strrev(str2);
//printf("the copmarision of strrev of str 2:%s\n",strrev(str2));

char a;
char *ptr;
printf("enter the char to locate: ");
scanf("%c",&a);
ptr=strchr(str3,a);
printf("the copmarision of strrev of str 2:%s\n",ptr);





}

