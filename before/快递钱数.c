#include "stdio.h"
int main()
{
	float g,m,money;
	int b;
	printf("输入重量g，行驶里程昆明\n");
	scanf("%f,%f",&g,&m);
	b = (int)(g/15+0.5);
	
	
	switch(b)
	{
		case 1:
			printf("5元");
			break;
		case 2:
			printf("9元");
			break;
		case 3:
			printf("14元");
			break;
		case 4:
			money = 14 + (int)(m/1000);
			printf("%.2f元",money);
			break;
		case 5:
			money = 15 + (int)(m/1000);
			printf("%.2f元",money);
			break;
	}
	return 0;
 } 
