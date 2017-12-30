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


    int a[]={1,2,3,4,5,6};//定义一个六个数据的数组
    int max;//存放最大值
    int min;//存放最小值
    hanshu(a, 6, &max, &min);//函数传送数组，并将最大值，最小值的地址传送
    printf("The maxnumber is %d\n",max);
    printf("The minnumber is %d\n",min);
    return 0;
}
