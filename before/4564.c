#include "stdio.h"
int main()
{



	int FindSecondMaxValue(int src[], int count)
	{
    	int max = 0;
    	int secondMax = 0;
    	if (count==0) return secondMax;
    	if (count==1)
    	{
        	return src[0];
    	}
    	else if (src[0] > src[1])
    	{
        	max = src[0];
        	secondMax = src[1];
    	}
    	else
    	{
       		max = src[1];
        	secondMax = src[0];
    	}
    	for (int i=2; i<count; ++i)
    	{
        	if (src[i] >= max)
        	{
            	secondMax = max;
           	max = src[i];
        	}
        	else
        	{
            	if (src[i]>secondMax)
            	{
                	secondMax = src[i];
            	}
        	}
    	}
    return 0;
}
