#include "stdio.h"
int main()
{
	int a,b,c;
	int *p1,*p2;
	p1 = &a; 
	p2 = &b;
	scanf("%d,%d",&a,&b);
	c = *p1;
	*p1 = *p2;
	*p2 = *p1;
	printf("a=%d, b=%d\n",a,b);
	
 } 
