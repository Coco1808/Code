#include <stdio.h>
//#include<math.h> //pow()所需的头文件 
int main()
{
 int a,b;
 scanf("%d%d",&a,&b); 
 double sum=pow(a,b);//调用计算平方的库函数 
 printf("%.2f",sum);//.2f保留小数点后两位
 return 0;
}
