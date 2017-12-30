#include <stdio.h>
int main()
{
	int m,n,temp,i;
	printf("请输入两个数字：");
	scanf("%d%d",&m,&n);
	
	if(m>n)
	{ 
	temp=m;m=n;n=temp;
	}
	for(i=m;i>=0;i--)
	
	if((n%i==0)&&(m%i==0))
	{
		printf("最大公约数=%d\n",i);
		
	 	printf("最小公倍数=%d\n",m*n/i);
	 	
	 	
	 	break;
	}
	
	return 0;
}
