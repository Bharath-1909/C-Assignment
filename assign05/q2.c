#include<stdio.h>
//void print_array(int arr[ ],int len);
//void accept_array(int arr[],int len);
/*int main()
{
int arr[5];
accept_array(arr,5);
print_array(arr,5);
}*/
void accept_array(int arr[],int len)
{
printf("enter the elements in the array");
for(int i=0;i<len;i++)
{
scanf("%d",&arr[i]);

}
}
void print_array(int arr[],int length)
{
	printf("Array :");
	for( int i=0;i<length ;i++)
	{
		printf("%-4d",arr[i]);
	
	}
	printf("\n");
}




