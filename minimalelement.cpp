#include "Include.h"

double minimalElement(int rangeOfArray, double* Array)
{
	double minElement = Array[0];
	for (int i = 1; i < rangeOfArray; i++)
		if (Array[i] < minElement)
			minElement = Array[i];
	return minElement;
}