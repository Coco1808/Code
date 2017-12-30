#include "stdio.h"
int main()
{
	int num1,num2,num3;
	int maximum;
	
	printf("Input\n");
	printf("Input num1:\nInput num2:\nInput num3:\n",num1,num2,num3);
	
	scanf("%d%d%d",&num1,&num2,&num3);
	
	if(num1<num2)
		maximum=num2;
	else
		maximum=num1;
	if(maximum<num3)
		maximum=num3;
		
	printf("Maximum= %d",maximum);
	
	
	
	return 0;
}
