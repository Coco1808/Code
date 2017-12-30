#include <stdio.h>
int main()
{
	int a[5], i, *p = NULL;
	p = a;
	for (i=0; i<5; i++)
	{
		scanf("%d", &p[i]);
	}
	p = a;
	for (i=0; i<5; i++)
	{	
		printf("%4d", p[i]);
	} 
	printf("\n");
	return 0;
}

