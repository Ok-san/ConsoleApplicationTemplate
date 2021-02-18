#include"libraries.h"

void seminar_5()
{
	system("cls");
	char number;
	while (true)
	{
		cout << "Enter in the file 'text.txt' the desired text. Maximum of 100 characters" << endl;
		cout << "Choose an action." << endl;
		cout << "- Reading text from a file. Enter 1" << endl;
		cout << "- Go back to the main menu. Enter 0." << endl;
		while (true)
		{
			cin.ignore(32767, '\n');
			cin >> number;
			switch (number) 
			{
			case '1':displaySeminar_5(); break;
			case '0':menu(); break;
			default:
				cout << "Error! You entered the wrong number." << endl;
				break;
			}
			break;
		}
	}
}