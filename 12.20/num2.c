#include "stdio.h"
int main()
{
	int n,i,j,t,a[200];

 	printf("Input the number of elements to store in the array :");

 	scanf("%d",&n);

 	printf("Input %d number of elements in the array :\n",n);

 	for(i=0;i<n;i++)
 	{
 		printf("element - %d:", i);
 		scanf("%d", &a[i] );
// 		a[i]=i+1;
 		printf("%d",a[i]);
 		
	 }
	for(i=1,j=n-1;i<j;i++,j--)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
//	 printf("The values store into the array are :%d\n",a[i]);
	 printf("\nThe values store into the array in reverse are :\n");
	 
	 for(i=0;i<n;i++)
	 {
	 	printf("%d ",a[i]);
	 	printf("element - %d:\n", a[i]);
	 }
	 
	 printf("\n");
	 return 0;
}
