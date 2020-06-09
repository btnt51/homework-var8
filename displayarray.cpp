#include "Include.h"

void displayArray(int rangeOfArray, double* Array)
{
	for (int i = 0; i < rangeOfArray; i++)//вывод массива
	{
		cout << setw(2) << Array[i] << endl;
	}
	cout << endl;
}

void displayArray(int rows, int columns, int** Matrix)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << setw(3) << Matrix[i][j] << " | ";
		}
		cout << endl;
	}
	cout << endl;
}