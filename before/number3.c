#include "stdio.h"

int hanshu(int *arry,int size,int *m,int *n)

{
    *m=arry[0];
    *n=arry[1];
    int i;
    for(i=0;i<size;i++)
    {
        if(arry[i]>*m)
            *m=arry[i];
        if(arry[i]<*n)
            *n=arry[i];
    }
}



