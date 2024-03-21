#include<stdio.h>

int main(int argc,char *argv[])
{
	char ch;
  FILE *s_fp=fopen(argv[1],"r");
  FILE *d_fp=fopen(argv[2],"w");

  while((ch=fgetc(s_fp))!=EOF)
      fputc(ch,d_fp);
	fclose(s_fp);
	fclose(d_fp);
	
}
