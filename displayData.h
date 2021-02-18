#include"libraries.h"

template<typename T>
void displayData(T* array, int size)
{
	for (int i = 0; i < size; i++)
		cout << *(array + i) << " ";
	cout << endl;
}

template<typename T>
void displayData(T** matrix, int row, int column)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
			cout << *(*(matrix + i) + j) << " ";
		cout << "\n";
	}
}
