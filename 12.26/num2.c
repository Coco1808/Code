#include <stdio.h>
int main()
{
	int *frist = NULL, *sceond = NULL;
	int num1,num2,sum;
	
	printf("Input the first number :");
	scanf("%d",&num1);
	printf("Input the second number :");
	scanf("%d",&num2);
	
	frist = &num1;
	sceond = &num2;
	
	sum = *frist + *sceond;
	
	printf("The sum of the entered numbers is :%d",sum);
}
