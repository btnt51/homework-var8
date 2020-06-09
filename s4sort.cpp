#include "Include.h"

void s4sort(int rows, int columns, int** Matrix)
{

	cout << "Unsorted array" << endl;
	displayArray(rows, columns, Matrix);
	int** MatrixRelocation = new int* [rows];
	for (int i = 0; i < rows; i++)
		MatrixRelocation[i] = new int[columns];
	for (int i = 0; i < columns; i++)
		for (int j = 0; j < rows; j++)
			MatrixRelocation[j][i] = Matrix[j][i];
	
	cout << "Sorted array" << endl;
	MatrixRelocation = charcolumns(rows,columns,Matrix);
	displayArray(rows, columns, MatrixRelocation);

	for (int i = 0; i < rows; i++)
	{
		delete[] MatrixRelocation[i];
		MatrixRelocation[i] = NULL;
	}
	delete[] MatrixRelocation;
	MatrixRelocation = NULL;
}