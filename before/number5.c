#include <stdio.h>

void main(int *arry,int size,int *m,int *n)
{
    *m=arry[0];
    *n=arry[1];
    for(int i=0;i<size;i++)
    {
        if(arry[i]>*m)
            *m=arry[i];
        if(arry[i]<*n)
            *n=arry[i];
    }
}

int main(int argc, const char * argv[6]) 
 {


    int a[]={1,2,3,4,5,6};//����һ���������ݵ�����
    int max;//������ֵ
    int min;//�����Сֵ
    hanshu(a, 6, &max, &min);//�����������飬�������ֵ����Сֵ�ĵ�ַ����
    printf("The maxnumber is %d\n",max);
    printf("The minnumber is %d\n",min);
    return 0;
}
