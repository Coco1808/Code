#include "stdio.h"
int main()
{
	int n,i,j,t,array[15];
//int num1,num2,num3,num4,array[15];
 	printf("Input the number of elements to store in the array :");

 	scanf("%d",&n);

 	printf("Input %d number of elements in the array :\n",n);

 	for(i=0;i<n;i++)
 	{
 		printf("element - %d:", i);
 		scanf("%d", &array[i] );
 		array[i]=i+1;
 		printf("%d",array[i]);
 		
	 }
	for(i=0,j=n-1;i<j;i++,j--)
	{
		t=array[i];	
		array[i]=array[j];
		array[j]=t;
	}
	 printf("The values store into the array are :%d\n",array[i]);
	 printf("\nThe values store into the array in reverse are :\n");
	 
	 for(i=0;i<n;i++)
	 printf("%d ",array[i]);
	 printf("\n");
	 return 0;
}
