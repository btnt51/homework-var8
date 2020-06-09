#include "Include.h"

void s3mainsort(int rangeOfArray, double* Array)
{
	system("cls");
	cout << "Your entered an array" << endl;
	displayArray(rangeOfArray, Array);
	cout << endl;

	double* Array_sorted = new double[rangeOfArray];

	cout << "Sorted Array" << endl;
	Array_sorted = s3sort(rangeOfArray,Array);
	displayArray(rangeOfArray, Array_sorted);

	delete[] Array_sorted;
	Array_sorted = NULL;
}