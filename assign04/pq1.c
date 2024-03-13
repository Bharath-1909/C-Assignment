#include<stdio.h>
int main()
{
int i=12;
char a='A';
float b=2.000;

int *pi=&i;
char *pa=&a;
float *pb=&b;

printf("the int ,char,float: %d,%c,%f\n",i,a,b);
printf("the int,char,float :%d %c %f\n",pi,*pa,*pb);

return 0;
}

