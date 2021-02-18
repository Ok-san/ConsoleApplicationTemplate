#include"libraries.h"

int enterRow(const int rowMax)
{
	int row;
	bool flag = true;
	while (flag)
	{
		cout << "Enter a maximum of 8 rows in the matrix: ";
		cin >> row;
		if (cin.fail())
		{
			//если ввод не число
			cin.clear(); //очищаем поток
			cin.ignore(32767, '\n'); //игнорируем

			cout << "\nError. Invalid character. Try again." << endl;
		}
		else if (row > rowMax)
		{

			cout << "\nThe number of rows is more than 8!Try again." << endl;
		}
		else if (row <= 0)
		{

			cout << "\nInvalid size! Try again" << endl;
		}
		else flag = false;
	}
	return row;
}