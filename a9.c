#include<stdio.h>
int main()
{
int a;
printf("enter the digit: ");
scanf("%d",&a);
printf("entered digit : %d \n",a);
printf("entered digit in octal : %o \n",a);
printf("entered digit in hexadecimal : %x \n",a);

int b[100],i;
for(i=0;a>0;i++)
{
b[i]=a%2;
a=a/2;
}
printf("entered digitin binary  :");
for(i=i-1;i>=0;i--)
{
printf("%d",b[i]);
}printf("\n");
return 0;
}

