#include<stdio.h>
int main()
{
float f,c;
printf("enter the temp in fahrenheit ");
scanf("%f",&f);
c=(float)((f-32)*(5/9));
printf("the temp in c :%f \n",c);

printf("___________________________________________\n");
float f1,c1;
printf("enthe the temp in celsius ");
scanf("%f",&c1);
f1=(float)(9/5)*c1+32;

printf("the temp in F :%f \n",f1);
return 0;
}
