#include "seminar3.h"

void seminar3()
{
	int rangeOfArray = 0;
	cout << "Enter the number of digits in the array" << endl;
	cin >> rangeOfArray;
	double* Array = new double[rangeOfArray];
	s3fillArray(rangeOfArray, Array);
	cout << endl << "Unsorted massive" << endl;
	s3displayArray(rangeOfArray, Array);
	s3logic(rangeOfArray, Array);
	delete[] Array;
}