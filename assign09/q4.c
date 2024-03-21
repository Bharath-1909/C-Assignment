#include<stdio.h>
int main(int argc ,char *argv[])
{
char ch[10];
FILE *s_fp=fopen(argv[1],"r");
FILE *d_fp=fopen(argv[2],"w");
while(fgets(ch,sizeof(ch),s_fp)!=NULL)
fputs(ch,d_fp);
fclose(s_fp);
fclose(d_fp);

}
