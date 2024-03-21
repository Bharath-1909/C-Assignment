#include<stdio.h>
#include<string.h>
typedef struct std 
{
int rollno;
char name[50];
int class;
int age;
double marks;
}std_t;

const char *file="student.txt";//decleration doubt

void create_record(std_t *s);
void print_record(std_t *s);
void add_record(std_t *s);
void display_record(void);
void search_rollno(int r_n,std_t *s);
void search_name(char name[],std_t *s);
void modify_record(int r_n,std_t *s);
void delete_record(char name[],std_t *s);
void delete_record_rollno(int r,std_t *s);


int main()
{
std_t s1;
int choice;
int r_n;
char name[20];
	do
	{
	printf("________________________________\n");
	printf("0.Exit\n");
	printf("1.add_student_record\n");
	printf("2.display_student_record\n");
	printf("3.search_student_record_by_rollno\n");
	printf("4.search_student_record_name\n");
	printf("5.modify_student_record\n");
	printf("6.delete_student_record\n");
	printf("7.delete_student_record_rollno\n");
    printf("Enter your choice");
	scanf("%d",&choice);
	printf("__________________________________\n");
		switch(choice)
		{
		case 1:create_record(&s1);
				add_record(&s1);
				print_record(&s1);
				break;
		case 2: display_record( );
				break;
		case 3:printf("enter the rollno of the student :");
				scanf("%d",&r_n);
				search_rollno(r_n,&s1);
				break;
		case 4:printf("enter the name of the student :");
				scanf("%s",name);
				search_name(name,&s1);
				break;
		case 5:printf("enter the rollno of the student :");
				scanf("%d",&r_n);
				modify_record(r_n,&s1);
				break;
		case 6:printf("enter the name of the student to be deleted");
				scanf("%s",name);
				delete_record(name,&s1);
			 	break;
		case 7:printf("enter the rollno of the student to be deleted");
				scanf("%d",&r_n);
				delete_record_rollno(r_n,&s1);
			 	break;
     	}
	}while(choice!=0);

 return 0;
 }

void create_record(std_t *s)
{
printf("Enter the details rollno ,name , class , age , marks : \n");
scanf("%d %s %d %d %lf",&s->rollno,s->name,&s->class,&s->age,&s->marks);
}

void print_record(std_t *s)
{
printf("%d %s %d %d %lf \n",s->rollno,s->name,s->class,s->age,s->marks);
}

void add_record(std_t *s)
{
FILE *fp=fopen(file,"ab");
fwrite(s,sizeof(std_t),1,fp);
fclose(fp);
}

void display_record(void)
{
std_t s;
FILE *fp=fopen(file,"rb");
while((fread(&s,sizeof(std_t),1,fp))!=0)
print_record(&s);
fclose(fp);
}


void search_rollno(int r_n,std_t *s)
{
FILE *fp=fopen(file,"rb");
while((fread(s,sizeof(std_t),1,fp))!=0)
	{
	if(r_n==s->rollno)
	print_record(s);
	}

fclose(fp);
}

void search_name(char name[],std_t *s)
{
FILE *fp=fopen(file,"rb");
while((fread(s,sizeof(std_t),1,fp))!=0)
	if(!strcmp(name,s->name))
	print_record(s);
fclose(fp);
}


void modify_record(int r_n,std_t *s)
{  
	int class;
	printf("enter the present class :");
	scanf("%d",&class);
	FILE *fp=fopen(file,"rb+");
	while((fread(s,sizeof(std_t),1,fp))!=0)
			if(r_n==s->rollno)
			{
			s->class=class;
			fseek(fp,-sizeof(std_t),SEEK_CUR);
			fwrite(s,sizeof(std_t),1,fp);
			}
    
fclose(fp);
}


void delete_record(char name[],std_t *s)
{
FILE *fp=fopen(file,"rb");
FILE *tfp=fopen("temp.txt","ab");
while((fread(s,sizeof(std_t),1,fp))!=0)
{
	if(strcmp(name,s->name))
	{
	fwrite(s,sizeof(std_t),1,tfp);
	break;
	}

}
fclose(fp);
fclose(tfp);
rename("temp.txt",file);

}


void delete_record_rollno(int r,std_t *s)
{
FILE *fp=fopen(file,"rb");
FILE *tfp=fopen("temp.txt","ab");
while((fread(s,sizeof(std_t),1,fp))!=0)
{
	if(r!=s->rollno)
	{
	fwrite(s,sizeof(std_t),1,tfp);
	break;
	}

}
fclose(fp);
fclose(tfp);
rename("temp.txt",file);

}







