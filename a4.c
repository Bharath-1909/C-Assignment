#include<stdio.h>
#include<ctype.h>
int main()
{int i;
char ch[100];
int up=0,lw=0,dt=0,ot=0;
printf("enter the string");
scanf("%s",ch);
for(i=0;ch[i] !='\0';i++)
{
if(isupper(ch[i])){
up++;
}
else if (islower(ch[i])){
lw++;
}
else if(isdigit(ch[i])){
dt++;
}
else
{
ot++;
}
}
printf("uppercase letters : %d\n",up);
printf("Lower case letters : %d\n",lw);
printf("no of digits : %d\n" ,dt);
printf("others: %d\n",ot);
return 0;
}
