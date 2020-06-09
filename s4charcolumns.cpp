#include "Include.h"

int** charcolumns(int rows, int columns, int** Matrix)
{
	int* arrayOfSpecifications = new int[columns];
	for (int i = 0; i < columns; i++)
	{
		arrayOfSpecifications[i] = 0;
		for (int j = 0; j < rows; j++)
			if ((Matrix[j][i] < 0) && ((Matrix[j][i] % 2 != 0)))
				arrayOfSpecifications[j] += abs(Matrix[j][i]);
	}
	
	cout << "Array of characteristics:";
	for (int counter = 0; counter < columns; counter++)
		cout << setw(3) << arrayOfSpecifications[counter] << "  "; // печать характеристик массива

	int* arrayOfIndexes = new int[columns];
	int min = 1000, index_column = 0;
	for (int i = 0; i < columns; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (min > arrayOfSpecifications[j] && arrayOfSpecifications[j] != -1)
			{
				min = arrayOfSpecifications[j];
				index_column = j;
			}
		}
		arrayOfIndexes[i] = index_column;
		arrayOfSpecifications[index_column] = -1;
		min = 1000;
	}

	cout << endl << "+---------------------+---------------------+---------------------+" << endl;

	delete[] arrayOfSpecifications;
	int** MatrixRelocation = new int* [rows];
	for (int i = 0; i < rows; i++)
		MatrixRelocation[i] = new int[columns];
	for (int i = 0; i < columns; i++)
		for (int j = 0; j < rows; j++)
			MatrixRelocation[j][i] = Matrix[j][arrayOfIndexes[i]];
	return MatrixRelocation;
}
