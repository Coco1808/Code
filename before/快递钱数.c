#include "stdio.h"
int main()
{
	float g,m,money;
	int b;
	printf("��������g����ʻ�������\n");
	scanf("%f,%f",&g,&m);
	b = (int)(g/15+0.5);
	
	
	switch(b)
	{
		case 1:
			printf("5Ԫ");
			break;
		case 2:
			printf("9Ԫ");
			break;
		case 3:
			printf("14Ԫ");
			break;
		case 4:
			money = 14 + (int)(m/1000);
			printf("%.2fԪ",money);
			break;
		case 5:
			money = 15 + (int)(m/1000);
			printf("%.2fԪ",money);
			break;
	}
	return 0;
 } 
