#include "Include.h"

void s3mainsumneg(int rangeOfArray, double* Array)
{
	double* flagandsum = new double [2];
	flagandsum = s3sumneg(rangeOfArray, Array);
	int flag = 0;
	flag = static_cast<int>(flagandsum[0]);
	double sum = 0;
	sum	= flagandsum[1];
	switch (flag)
	{
	case 1:
		cout << "There is no any negative elements in this array" << endl;
		break;
	case 2:
		cout << "There is only one negative element in this array" << endl;
		break;
	case 3:
		cout << "First and second negative elements are going after each other" << endl;
		break;
	case 4:
		cout << "There is only one element between first and negative element" << endl;
		break;
	case 0:
		cout << "Sum between first and second negative elements:" << sum << endl;
		break;
	}
	delete[] flagandsum;
}
	