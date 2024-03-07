#include<stdio.h>
int main()
{
int a;
char  c;
float f;
double d;

printf("size of int: %lu \n",sizeof(a));
printf("size of char: %lu \n",sizeof(c));
printf("size of float: %lu \n",sizeof(f));
printf("size of double: %lu \n",sizeof(d));


printf("size of int: %lu \n",sizeof(int));
printf("size of char: %lu \n",sizeof(char));
printf("size of float: %lu \n",sizeof(float));
printf("size of double: %lu \n",sizeof(double));

printf("size of int: %lu \n",sizeof(1));
printf("size of char: %lu \n",sizeof('a'));
printf("size of float: %lu \n",sizeof(3.559076890f));
printf("size of double: %lu \n",sizeof(7.345678900098765));
}

