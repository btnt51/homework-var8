#include "Include.h"

void mainMinEl(int rangeOfArray, double* Array)
{
	int amountofminEl = coutingMinEL(rangeOfArray, Array);
	int* iterOfMin = new int[amountofminEl];
	iterOfMin = s3iterOfMinElement(rangeOfArray, Array);
	double* minElements = new double[amountofminEl];
	minElements = minElement(rangeOfArray, Array);
	for (int i = 0; i < amountofminEl; i++)
		cout << "Minimal element: " << minElements[i] << " and his position is " << iterOfMin[i] << endl;
	delete[] iterOfMin;
	delete[] minElements;
}