#include<stdio.h>
#include<string.h>

int main()
{
char str1[20],str2[40];
int a;
printf("enter the str1 :");
scanf("%s",str1);
printf("enter the str2 :");
scanf("%s",str2);
printf("enter the number :");
scanf("%d",&a);
strncat(str2,str1,a);
printf("the concatinated string :%s\n",str2);
}
