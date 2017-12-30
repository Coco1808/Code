#include "stdio.h"
int main()
{
	int n,i,j = 0,a[200];

 	printf("Input the number of elements to store in the array :");

 	scanf("%d",&n);

 	printf("Input %d number of elements in the array :\n",n);
 	for(i=0;i<n;i++)
 	{
 		printf("element - %d:", i);
 		scanf("%d", &a[i] ); 	
		j += a[i];
	 }
	 
	 printf("Sum of all elements stored in the array is:%d",j);
	
	
	return 0;
}
