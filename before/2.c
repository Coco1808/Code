#include "stdio.h"
int main()
{
	int a;
	printf("Test Data:",a);
	
	scanf("%d",&a);
	if(a%2 == 0)
		printf("Expected Output:%d is an even integer",a);
	else
		printf("Expected Output:%d is an odd integer",a);
	return 0;
}
