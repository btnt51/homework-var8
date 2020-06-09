#include "Include.h"

int coutingMinEL(int rangeOfArray, double* Array) 
{
	int amountOfMinEl = 0;
	double minElement = minimalElement(rangeOfArray, Array);
	for (int i = 0; i < rangeOfArray; i++)//поиск минимального значения
	{
		if (Array[i] < minElement) 
		{
			minElement = Array[i];
		}
		else if (Array[i] == minElement)
		{
			amountOfMinEl++;
		}
	}

	return amountOfMinEl;
}