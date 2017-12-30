#include <stdio.h>
int main()
{
	int *frist = NULL, *sceond = NULL;
	int num1,num2;
	
	printf("Input the first number :");
	scanf("%d",&num1);
	printf("Input the second number :");
	scanf("%d",&num2);
	
	frist = &num1;
	sceond = &num2;
	
	if(*frist > *sceond)
		printf("%d is the maximum number.",*frist);
	else
		printf("%d is the maximum number.",*sceond);
	
	
}
