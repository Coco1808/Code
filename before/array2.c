#include "stdio.h"
int main()
{
	int a[10],j,i,k;
	for(i=0;i<10;i++)
	{
		printf("element - %d:", i);
		scanf("%d", &a[i] );
	}
	
	printf("Elements in array are: ");
	
	for(i=0;i<10;i++)
	{
		printf("%d ", a[i] );
	}
	return 0;
}
