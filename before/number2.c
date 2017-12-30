#include "stdio.h"
int main()
{
	int num1=2,num2=4;
	int *p1,*p2;
	p1 = &p1;
	p2 = &p2;
	//printf("num=2,num=4");
	scanf("%d%d",&num1,&num2);
	*p1 = *p2;
	*p2 = *p1;
	printf("a=%d,b=%d\n",num1,num2);
}
