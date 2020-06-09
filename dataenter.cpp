#include "Include.h"

double* Dataenter(int rangeOfArray, double* Array)
{
	cout << "Fill the array: " << endl;
	for (int i = 0; i < rangeOfArray; i++)
	{
		cout << "\telement [ " << i << "] --->:";
		cin >> Array[i];
	}
	return Array;
}

int** Dataenter(int rows, int columns, int** Matrix)
{
	cout << "Enter a data in matrix: " << endl;
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			cout << "\n\telement [ " << i << " ] " << " [ " << j << " ] ------>:";
			cin >> Matrix[i][j];
		}
	}
	return Matrix;
}