#include <stdio.h>

int sum (int, int);
int main ()
{
    int total;
	printf("Function : a simple structure of function :\n");
	
    total = sum (5, 6);
    printf ("The total is :  %d\n", total);
    return 0;
}
    
int sum (int a, int b) 
{
	int s;
	s=a+b;
	printf("my result is : %d \n", s);
    return s; 
}
