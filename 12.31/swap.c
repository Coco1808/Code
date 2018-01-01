#include<stdio.h>
#include "swep.h"
//int swap(int *,int *);
 int main()
 {
 	int num1,num2;
 	
 	printf("Input 1st number : ");
 	scanf("%d",&num1);
	 printf("Input 2nd number :");
 	scanf("%d",&num2);
 	printf("Before swapping: n1 = %d, n2 = %d ",num1,num2);
 	
 	swap(&num1,&num2);

    printf("\nAfter swapping: n1 = %d, n2 = %d \n\n",num1,num2);
    return 0;
 }

