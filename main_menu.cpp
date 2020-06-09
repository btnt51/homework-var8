#include "Include.h"
void menu_main()
{

	bool isTrue = true;
	while (isTrue)
	{
		menu_text();
		char c;
		
		cin >> c;
		if (c < '0' || c > '3')
		{
			cout << "Error, enter type number in range from 1 to 3 to pick seminar or 0 to exit from program." << endl;
			cin >> c;
		}
		switch (c)
		{
		case '1':
			system("cls");
			seminar3();
			break;
		case '2':
			system("cls");
			seminar4();
			break;
		case '3':
			seminar5();
			break;
		case '0':
			system("cls");
			cout << "Thank you, for using my programm good luck!";
			exit(0);
			break;
		default:
			//system("cls");
			//cout << "Type some num for getting back to main menu" << endl;
			//cin >> c;
			break;
		}
	}
}