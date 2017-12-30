#include "stdio.h"
int main()
{
	int num1,num2,num3 = 0,array[10];
	
	printf("Input the number of elements to store in the array (max 10) : ");
	
	scanf("%d",&num1);
	
	printf("Input %d number of elements in the array :\n",num1);
	
	for(num2=1;num2<=num1;num2++)
	{
		printf("element -%d:",num2);
		
		scanf("%d", &array[num2] ); 
		num3 += array[num2];
		
	}
	printf("The sum of array is :%d",num3);
	
}
