#include <stdio.h>

int main()
{
    int a,b,c,sum,i;
    a=0;b=0;c=1;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    for(i=1;i<=30;i++)
     {
          sum=a+b+c;
          printf("%d\n",sum);
          a=b;
          b=c;
          c=sum;
     }
     while (1);
     return (0);
} 
