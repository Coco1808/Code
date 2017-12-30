#include "stdio.h"

int*find_largest(int a[],int n);

int main()
{
	int num[10]={11,45,78,46,90,71,30,51,13,91};
	int len;
	int *max;
	len=10;
	max=find_largest(num,len);
	printf("result is %d\n",*max);

	return 0;
}

int *find_largest(int a[],int n)
{
	int *largest;
	int i;
	largest=&a[0];
	for(i=1;i<10;i++)
	{
		if(*largest<a[i])
	
			largest=&a[i];
	
	}
return largest;
}
