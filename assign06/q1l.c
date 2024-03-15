#include<stdio.h>
#include<string.h>

int main()
{
char str[20]="I am studying pgdesd";
char *ptr=strtok(str," ");
printf("token = %s\n",ptr);
while(ptr!=NULL)
{
ptr=strtok(NULL," ");
printf("token: %s\n",ptr);
}
return 0;
}
