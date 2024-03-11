#include<stdio.h>
int main()
{
char ch;
int n,i;
printf("enter the char to print: ");
scanf("%c",&ch);
printf("enter the number  to loop the char: ");
scanf("%d",&n);
i=0;
while(i<n)
{printf("%c",ch);
i++;
}return 0;
}


