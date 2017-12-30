#include "stdio.h"
int Max(int x,int y);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int max=Max(a,b);
	printf("%d",max);
	return 0;
}
	int Max(int x,int y)
{
	int m;
	if(x<y)
		m=y;
	else
 		m=x;
	return m;
}
