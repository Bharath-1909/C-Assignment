#include<stdio.h>
int main()
{
long int a;
char c;
float f1;
double d1;
printf("enter num");
scanf("%ld",&a);
printf("enter char");
scanf("%*c %c",&c);
printf("enter float");
scanf("%f",&f1);
printf("enter double");
scanf("%lg",&d1);
printf("num=%ld\n",a);
printf("char=%c\n",c);

printf("float=%f\n",f1);
printf("double=%lg\n",d1);

printf("size of double=%lu",sizeof(d1));
}
