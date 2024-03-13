#include<stdio.h>
int main()
{
printf("sizeof(int *) =%ld\n",sizeof(int *));
printf("sizeof(char *) =%ld\n",sizeof(char *));
printf("sizeof(float *) =%ld\n",sizeof(float *));
printf("sizeof(double *) =%ld\n",sizeof(double *));
printf("sizeof(unsigned int *) =%ld\n",sizeof(unsigned int *));
printf("sizeof(short *) =%ld\n",sizeof(short *));
printf("sizeof(long *) =%ld\n",sizeof(long *));
//printf("sizeof(*) =%ld\n",sizeof(int *));


printf("scale factor(int *) =%ld\n",sizeof(int));
printf("scale factor(char *) =%ld\n",sizeof(char));
printf("scale factor(float*) =%ld\n",sizeof(float));
printf("scale factor(short *) =%ld\n",sizeof(short));
}
