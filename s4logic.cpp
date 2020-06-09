#include "Include.h"
void s4logic(int rows, int columns, int** Matrix) 
{
	char k;
	cout << "In this seminar there are 2 programs: 1 - sort Matrix, 2 - sum of column with negative element.";
	while(true)
	{
		cout << "Choose what do you want to start." << endl << "Write 1 to start sort and 2 to start sum. Type 0 for exit from programm or for going back to main menu." << endl;
		cin >> k;
		if (k < '0' || k > '0')
		{
			cout << "Error, enter type number in range from 1 to 3 to pick task from seminar4 or 0 to exit from seminar3." << endl;
			cin >> k;
		}
		switch (k)
		{
			case '1':
				s4sort(rows, columns, Matrix);
				break;
			case '2':
				sumOfColumnwithNeg(rows, columns, Matrix);
				break;
			default:
				break;
		}
		char y;
		cout << "Enter - 'y'" << endl;
		cout << "Exit menu 3 seminar or any!" << endl;
		cin >> y;
		if (y != 'y')
		{
			system("cls");
			break;
		}
		else
		{
			system("cls");
		}
	}
}