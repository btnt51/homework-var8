#include "seminar3.h"

void seminar3()
{
	int rangeOfArray = 0;
	const int maxRangeOfArray = 50;
	cout << "Enter the number of digits in the array" << endl;
	cin >> rangeOfArray;
	cout << endl;
	while (true)
	{
		if (rangeOfArray <= 0 || rangeOfArray > maxRangeOfArray)
		{
			cout << "\nBuling impossible" << endl;
			cout << "\nEnter the size of the array --->";
			cin >> rangeOfArray;
		}
		else
			break;
	}
	double* Array = new double[rangeOfArray];
	Dataenter(rangeOfArray, Array);
	cout << endl << "Unsorted massive" << endl;
	displayArray(rangeOfArray, Array);
	s3logic(rangeOfArray, Array);//меню
	delete[] Array;
}