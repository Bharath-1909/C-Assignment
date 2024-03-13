#include<stdio.h>
int power1(int index,int base)
{   int res=1;
	while(index!=0)
	{
		res*=base;
		index--;
	}
	return res;


}


int fact(int i)
{int res=1;
 if(i==1||i==0)
 {
 return 1;
 }
 else
 {
 res=i*fact(i-1);
 return res;
 
}






}



