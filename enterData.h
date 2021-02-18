#include"libraries.h"

template<typename T>
void enterData(T* array, int size)
{
	cout << "Enter " << size << " element/s" << endl;
	while (true)
	{
		bool flag = true;
		for (int i = 0; i < size; i++)
		{
			cin >> array[i];
			if (cin.fail())
			{
				cin.clear(); //очищаем поток
				cin.ignore(32767, '\n'); //игнорируем
				cout << "Error. An invalid character is present. Try again." << endl;
				flag = false;
				break;
			}
		}
		if (flag) break;
	}
}

template<typename T>
void enterData(T** matrix, int row, int column)
{
	bool flag1 = true;
	int col = row * column;
	cout << "Enter " << row * column << " elements" << endl;
	while (flag1)
	{
		bool flag = true;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				cin >> matrix[i][j];
				if (cin.fail())
				{
					cin.clear(); //очищаем поток
					cin.ignore(32767, '\n'); //игнорируем
					cout << "Error. An invalid character is present. Try again." << endl;
					flag = false;
					break;
				}
			}
			if (!flag) break;
		}
		if (flag) flag1 = false;
	}
}