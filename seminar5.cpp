#include "Include.h"
void seminar5() 
{
	
	ifstream fin("input.txt", ios::in);
	if (!fin)
		cout << "Error while openning file" << endl;
	fin.seekg(0, ios::end);
	int len = fin.tellg();
	if (len == 0) 
	{
		cout << "There is no text in textfile." << endl;
	}
	else
	{

		char* buf = new char[len + 1];

		fin.seekg(0, ios::beg);
		fin.read(buf, len);
		buf[len] = '\0';

		int n = 0, i = 0, j = 0, flag = -1, counter = 0;

		while (buf[i])
		{
			if (buf[i] == '"')
				if (flag < 0)
				{
					flag = i;
					counter++;
				}
				else
				{
					for (j = flag; j <= i; j++)
						cout << buf[j];
					flag = -1;
					cout << endl;
					counter++;
				}
			i++;
		}
		switch (counter)
		{
		case 0:
			cout << "There is not \"" << endl;
			break;
		case 1:
			cout << "There is only 1 \"" << endl;
			break;
		default:
			break;
		}
		delete[]buf;
		buf = NULL;
	}
	
	fin.close();
	
}