#include<stdio.h>
#include<string.h>

int main()
{
char str1[20],str2[40];
int a;
printf("entre the str1 :");
scanf("%s",str1);
printf("entre the number :");
scanf("%d",&a);
strncpy(str2,str1,a);
printf("the copied string :%s\n",str2);
}
