#include <stdio.h>
int main()
{
	int m,n,temp,i;
	printf("�������������֣�");
	scanf("%d%d",&m,&n);
	
	if(m>n)
	{ 
	temp=m;m=n;n=temp;
	}
	for(i=m;i>=0;i--)
	
	if((n%i==0)&&(m%i==0))
	{
		printf("���Լ��=%d\n",i);
		
	 	printf("��С������=%d\n",m*n/i);
	 	
	 	
	 	break;
	}
	
	return 0;
}
