#include "stdio.h"
int main()
{
	int i,n;
	printf("input n:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int j;
		
		for (j=1;j<=i;j++)
		                                                                         
		printf("%d*%d=%d\n",i,j,i*j);
	}
	printf("\t");

	
	return 0;
}
