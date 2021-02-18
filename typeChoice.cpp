#include"libraries.h"

char typeChoice()
{
	system("cls");
	char type;
	cout << "Select the item type:" << endl;
	cout << "(1) int" << endl;
	cout << "(2) double" << endl;
	cout << "(3) float" << endl;
	cin.ignore(32767, '\n');
	while (true)
	{
		cin >> type;

		if (type < '1' || type > '3')
			cout << "Incorrect type!" << endl;
		else
			break;
	}
	return type;
}