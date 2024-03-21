#include<stdio.h>
int main()
{int num;
char ch[50];
FILE *w_fp=fopen("file2.txt","r");
FILE *r_fp=fopen("file2.txt","a");

//printf("enter the string you want enter in file  :");
fscanf(w_fp,"%d %s",&num ,ch);

fprintf(r_fp,"%d %s",num ,ch);

fclose(w_fp);
fclose(r_fp);


}
