#include<stdio.h>
#include<string.h>
size_t my_strlen(const char *s);
int main()
{
char str2[20];
printf("enter the string");
scanf("%s",str2);
printf("the length of the string is : %d\n",my_strlen(str2));

}
size_t my_strlen(const char *s)
{
size_t len=0;
for(int i=0;s[i]!='\0';i++)
{len++;
}
//printf("length : %u:\n",len);
return len;
}
