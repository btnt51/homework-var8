#include "Include.h"
void seminar4() 
{
	int rows = 0, columns = 0;
	cout << "Enter a range of rows in matrix: ";
	cin >> rows;
	cout << endl << "Enter a range of columns in matrix: ";
	cin >> columns;
	while (true)
	{
		if (rows < 0 || rows > 50)
		{
			cout << "\n\tThis matrix dimension does not fit" << endl;
			cout << "\n\tEnter the number of rows of matrix ----->" << endl;
			cin >> rows;
		}
		else
			break;
	}
	while (true)
	{
		if (columns < 0 || columns > 50)
		{
			cout << "\n\tThis matrix dimension does not fit" << endl;
			cout << "\n\tEnter the number of columns of matrix ----->" << endl;
			cin >> columns;
		}
		else
			break;
	}
	int** Matrix = new int* [rows];
	for (int i = 0; i < rows; i++) Matrix[i] = new int[columns];
	Dataenter(rows, columns, Matrix);
	displayArray(rows, columns, Matrix);
	s4logic(rows, columns, Matrix);
	for (int i = 0; i < rows; i++)
	{
		delete[] Matrix[i];
		Matrix[i] = NULL;
	}
	delete[] Matrix;
	Matrix = NULL;
}