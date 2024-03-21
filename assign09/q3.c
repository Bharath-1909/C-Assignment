#include<stdio.h>
int main()
{
char ch[10];
FILE *s_fp=fopen("file1.txt","r");
FILE *d_fp=fopen("q3.txt","w");
while(fgets(ch,sizeof(ch),s_fp)!=NULL)
fputs(ch,d_fp);
fclose(s_fp);
fclose(d_fp);

}
