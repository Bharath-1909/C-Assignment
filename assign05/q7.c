#include<stdio.h>
#include"header.h"

void selection_sort(int arr[],int len);
int main()
{
int arr[6];
accept_array(arr,6);
print_array(arr,6);

selection_sort(arr,6);
print_array(arr,6);


}

void selection_sort(int arr[],int len)
{
	int i,j;
	for(i=0;i<len-1;i++)
	{
	for(j=i+1;j<len;j++)
	{
	if(arr[i]>arr[j])
	{
	int temp=arr[j];
		arr[j]=arr[i];
		arr[i]=temp;
	}
	}
	}
}
