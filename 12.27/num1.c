#include "stdio.h" 
int main()
{
	int arr1[10];
    int one,num, sum = 0;
    int *prt;
    
	printf("Input the number of elements to store in the array (max 10) :");
	scanf("%d",&num);
	
	printf(" Input %d number of elements in the array : \n",num);
    for(one=0;one<num;one++)
      {
	   printf(" element - %d : ",one+1);
	   scanf("%d",&arr1[one]);
	  } 	
	  

    prt = arr1; 
 
    for (one = 0; one < num; one++)
	 {
       sum = sum + *prt;
       prt++;
     }
 
    printf(" The sum of array is : %d\n\n", sum);
	
	return 0;
}
