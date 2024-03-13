#include<stdio.h>
#include"header.h"
void rev(int arr[],int len);
int main()
{
int arr[6];

accept_array(arr,6);
print_array(arr, 6);

rev(arr,6);
print_array(arr, 6);
}
void rev(int arr[],int len)
{ int i,j;
	for(i =0,j =len-1;i<j;i++,j--)
	{
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
	}



}
