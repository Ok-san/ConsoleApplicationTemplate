#include"libraries.h"

template<typename T>
void seminar_4(T type)
{
	char number;
	const int rowMax = 8;
	const int columnMax = 8;
	while (true)
	{
		system("cls");
		cout << "In this workshop presented to: \n- Matching rows and columns;\n- Sum of elements in rows with negative element." << endl;
		cout << "\nFirst, create a matrix." << endl;
		int row = enterRow(rowMax);
		T** matrix = new T* [row];
		int column = enterColumn(columnMax);
		if (column != 0)
		{
			for (int i = 0; i < row; i++)
				matrix[i] = new T[column];
			bool flag = true;
			enterData(matrix, row, column);
			while (flag)
			{
				cout << "\nChoose an action." << endl;
				cout << "- Matching rows and columns. Enter 1" << endl;
				cout << "- Sum of elements in rows with negative element. Enter 2." << endl;
				cout << "- Re-enter matrix. Enter 3." << endl;
				cout << "- Go back to the main menu. Enter 0." << endl;

				while (true)
				{
					cin.ignore(32767, '\n');
					cin >> number;
					switch (number)
					{
					case '1':displaySeminar_4p1(matrix, row, column); break;
					case '2':displaySeminar_4p2(matrix, row, column); break;
					case '3':deleteData(matrix, row); flag = false; break;
					case '0':deleteData(matrix, row); menu(); break;
					default:
						cout << "Error! You entered the wrong number." << endl;
						break;
					}
					break;
				}
			}
		}
	}
}