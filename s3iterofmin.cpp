#include "Include.h"
int *s3iterOfMinElement(int rangeOfArray, double* Array)
{
	int amountofminEl = coutingMinEL(rangeOfArray, Array);
	int *iterOfMin = new int[amountofminEl];
	int rangeOfArrayOfiterOfMin = 0;
	double minElement = minimalElement(rangeOfArray, Array);
	for (int i = 0; i < rangeOfArray; i++)//поиск минимального значения
	{
		
			if (Array[i] < minElement) 
			{
				minElement = Array[i];
				iterOfMin[rangeOfArrayOfiterOfMin] = i;
				rangeOfArrayOfiterOfMin++;
				
			}
			else if (minElement == Array[i])
			{
				minElement = Array[i];
				iterOfMin[rangeOfArrayOfiterOfMin] = i;
				rangeOfArrayOfiterOfMin++;
				

			}
			
		
	}
	return iterOfMin;
}