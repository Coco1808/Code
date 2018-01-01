#include "stdio.h"
int idd(int num){
	return num % 2 == 0;
}
int ddo(int num){
	return num % 3 == 0;
}
int agg(int num){
	return num % 5 == 0;
}

int main(){
	int num;
	printf("Input any number:");
	scanf("%d",&num);
	
	if(idd(num)){
		printf("This number can be divided by 2 .\n");
	} 
	if(ddo(num)){
		printf("This number can be divided by 3.\n");
	}
	if (agg(num)){
		printf("This number can be divided by 5.\n");
	}
	
	
	
//	 if{
//		printf("This number can not be divided by 2, 3, and 5 ");
//	}
	
	return 0;
}
