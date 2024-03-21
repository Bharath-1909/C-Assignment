#include<stdio.h>
#include<string.h>

typedef enum colour {black ,blue ,red,yellow,} clr_t;

typedef struct cars
{
char brand[50];
char model[50];
double price;
clr_t clr;
}car_t;

void *get_color(clr_t c)
{
	switch(c)
	{
	case black:return "Black";
	case blue:return "Blue";
	case red:return "red";
	case yellow:return "yellow";
	}

return NULL;
}


const char *file="cars.txt";

void accept_cars(car_t *c);
void print_cars(car_t *c);
void add_cars(car_t *c);
void display_cars(void);
void search_cars(char *m);
void edit_cars(char *m,double p);
void delete_cars(char *m);


int main(void)
{
	int choice;
    car_t c1;
	char model[50];
	double p;
	do
	{
    printf("________________________\n");
	printf("Enter 0.EXIT\n");
	printf("Enter 1.Add cars\n");
	printf("Enter 2.Display cars\n");
	printf("Enter 3.Search cars\n");
	printf("Enter 4.Edit cars\n");
	printf("Enter 5.Delete Cars\n");
	printf("Select the choice\n");
	scanf("%d",&choice);
	printf("_________________________\n");
	
	switch(choice)
	{
	case 1:accept_cars(&c1);
			add_cars(&c1);
			break;
	case 2:display_cars();
			break;
	case 3:printf("enter the model to be searched");
			scanf("%s",model);
			search_cars(model);
			break;	
	case 4:printf("enter the new price of the car");
			scanf("%lf",&p);
			printf("enter the model of the car");
			scanf("%s",model);
			edit_cars(model,p);
			break;
	case 5:printf("enter the model of the car to be deleted :");
			scanf("%s",model);
			delete_cars(model);
			break;
	
	}
	}while(choice!=0);
	return 0;
}

void accept_cars(car_t *c)
{
printf("Enter the details of the car 1.brand 2.model 3.colour 4.price :");
scanf("%s %s %d %lf",c->brand,c->model,(int *)&c->clr,&c->price);
}

void print_cars(car_t *c)
{
printf("%s %s %s %lf\n",c->brand,c->model,get_color(c->clr),c->price);
}

void add_cars(car_t *c)
{
FILE *fp=fopen(file,"ab");
fwrite(c,sizeof(car_t),1,fp);
fclose(fp);
}


void display_cars(void)
{
FILE *fp=fopen(file,"rb");
car_t c;
printf("cars list : \n");
while(fread(&c,sizeof(car_t),1,fp)!=0)
	print_cars(&c);
fclose(fp);
}

void search_cars(char *m)
{
FILE *fp=fopen(file,"rb");
car_t c;
while(fread(&c,sizeof(car_t),1,fp)!=0)
	if(!strcmp(m,c.model))
	{
		print_cars(&c);
		break;
	}
fclose(fp);
}


void edit_cars(char *m,double p)
{
FILE *fp=fopen(file,"rb+");
car_t c;
while(fread(&c,sizeof(c),1,fp)!=0)
	if(!strcmp(m,c.model))
	{
	c.price=p;
	fseek(fp,-sizeof(car_t),SEEK_CUR);
	fwrite(&c,sizeof(c),1,fp);
	break;
	}
fclose(fp);
}


void delete_cars(char *m)
{
FILE *fp=fopen(file,"rb+");
car_t c;
FILE *tfp=fopen("temp.txt","wb");
while(fread(&c,sizeof(c),1,fp)!=0)
{	
	if(strcmp(m,c.model))
	fwrite(&c,sizeof(c),1,tfp);
}
fclose(fp);
fclose(tfp);
rename("temp.txt",file);

}






