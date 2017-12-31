#include "stdio.h"

int odd(int num)
{
	if(num == 0)
	return (num & 1);
}
int main()
{
	int num,result ;
	printf("Input any number : ");
	scanf("%d",&num);
	
	result = odd(num);
	if(num\2==0)
		printf("The number is even.");
	else
		printf("The number is odd.");

	return 0;
}
