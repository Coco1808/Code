#include "stdio.h"
int main()
{
	int a[10],j,i,k;
	
	printf("Input the size of array : ",j);
	
	scanf("%d\n",&j);
	printf("Input %d elements in the array :\n",j);
	
	for(i=0;i<10;i++)
	{
		printf("element - %d:\n",i);
	}
	
	scanf("%d",&a[i]);
	
	j=a[0];
	for(i=1;i<i;i++)
	{
		
		if (a[i]>j)
		{j=a[i];
		 k=i;
		}
	}
	printf("element-%d\n",i);
	return 0;
}
