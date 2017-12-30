#include "stdio.h"
int main()
{
	int num1,num2,num3;
	int num4,num5;
	int a,b,c;//定义整形 
	
	a = num1*num1*num1;
	b = num2*num2*num2;
	c = num3*num3*num3;  //赋值 
	
	printf("Input\n",num1,num2,num3);
	
	scanf("%d%d%d%d%d%d",&num1,&a,&num2,&b,&num3,&c);
	
	printf("Number is:%d and cube of the 1 is:%d\nNumber is :%d and cube of the 1 is :%d\nNumber is :%d and cube of the 1 is :%d\n",num1,a,num2,b,num3,c);
	
	return 0;

 } 
