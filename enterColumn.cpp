#include"libraries.h"

int enterColumn(const int columnMax)
{
	int column;
	bool flag = true;
	while (flag)
	{
		cout << "Enter a maximum of 8 columns in the matrix: ";
		cin >> column;
		if (cin.fail())
		{
			//если ввод не число
			cin.clear(); //очищаем поток
			cin.ignore(32767, '\n'); //игнорируем

			cout << "\nError. Invalid character. Try again." << endl;
			return 0;
		}
		else if (column > columnMax)
		{

			cout << "\nThe number of rows is more than 8!Try again." << endl;
			return 0;
		}
		else if (column <= 0)
		{

			cout << "\nInvalid size! Try again" << endl;
			return 0;
		}
		else flag = false;
	}
	return column;
}