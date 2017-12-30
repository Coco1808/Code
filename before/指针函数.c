#include <stdio.h>

int findMax( int* beginAddr, int length);

int main() 
{

    int numbers[] = { 3, 4 ,6 ,1, 2, 18, 90, 33 ,46 };
    
    int *beginAddr = numbers;
    
    printf("the max number is : %d", findMax(beginAddr, sizeof(numbers)/ sizeof(numbers[0]) ));

    return 0;
}

int findMax( int* beginAddr, int length)
{
    int max  ;
    
    max = -2^(sizeof(max) * 8 -1);
    
    for( int i = 0; i < length; i++ )
    
	{
        if(max < *(beginAddr + i) )
        
		{
			
            max = *(beginAddr +i);
            
        }
    }
    return max;
}
