#include "Include.h"
void s3logic(int rangeOfArray, double* Array)
{
	char action_select;
	cout << "In this seminar there are 3 programs: 1 - sort Matrix, 2 - iterator of minimal element in array," << endl;
	cout << "3 - sum of elements between first and second negative elements. " << endl;
	while (true)
	{
		cout << "Choose what do you want to start." << endl << "Write 1 to start sort, 2 to start search "
			"iterator, 3 to start sum and 0 to exit" << endl;
		cin >> action_select;
		if (action_select < '0' || action_select > '3')
		{
			cout << "Error, enter type number in range from 1 to 3 to pick seminar or 0 to exit from program." << endl;
			cin >> action_select;
		}
		switch (action_select)
		{
			case '1':
				cout << endl << "Sorted massive" << endl;
				s3mainsort(rangeOfArray, Array);
				break;
			case '2':
				mainMinEl(rangeOfArray, Array);//
				break;
			case '3':
				s3mainsumneg(rangeOfArray, Array);//
				break;
			default:
				break;
		}
		cout << "Enter - 'y'" << endl;
		cout << "Exit menu 3 seminar or any!" << endl;
		cin >> action_select;
		if (action_select != 'y')
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