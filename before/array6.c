#include<stdio.h> 
int main()
{
	
	int n,i,j,t,a[200];

 	printf("Input the number of elements to store in the array :");

 	scanf("%d",&n);

 	printf("Input 3 number of elements in the array :\n");
 	for(i=0;i<n;i++)
	{
 		printf("element - %d:", i);
 		scanf("%d", &a[i] ); 	
	}
	 
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	} 
	
	printf(" %d",a[1]);
	 
	 
}
