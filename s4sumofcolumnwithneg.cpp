#include "Include.h"

int sumOfColumnwithNeg(int rows, int columns, int** Matrix)
{
	int k;
	int sum=0;
	for (int j = 0; j < rows; j++)
	{
		k = 0;
		for (int i = 0; i < columns; i++)
		{
			sum += Matrix[i][j];
			if (Matrix[i][j] < 0.0) k++;
		}
		if (k) 
			cout << "col " << j + 1 << ":  sum=" << sum << "\n";
	}
	return sum;
}