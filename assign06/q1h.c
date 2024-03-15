#include<stdio.h>
#include<string.h>
int main(void)
{
char str[64]="i am studying pgdesd";
char substr[4]="am";
char *ptr=strstr(str,substr);
printf("ptr=%s\n",ptr);
printf("ptr=%u\n",ptr);
return 0;
}
