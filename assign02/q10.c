#include<stdio.h>
int main()
{
char c;
printf("enter the char");
scanf("%c",&c);
if(65<=c&&c<=90 || 97<=c&&c<=122)
{
printf("ALPHABET");
if(65<=c&&c<=90)
{
printf("UPPERCASE\n");
}
else
{
printf("LowerCase \n");
}
}
else if(48<=c&&c<=57)
{
printf("Digit");
}
else if(c==" "||c==32||c==9)
printf("Space");
else 
printf("Not Listed");
return 0;
}
