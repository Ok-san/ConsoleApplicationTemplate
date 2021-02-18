#include "libraries.h"

template<typename T> 
void displaySeminar_3p3(T* array, int size)
{
	system("cls");
	cout << "Original array:" << endl;
	displayData(array, size);
	if (size > 1)
	{
		T* arraySort = new T[size];
		arraySort = sort(array, size);
		cout << "\nSort array:" << endl;
		displayData(arraySort, size);
		delete[] arraySort;
	}
	else cout << "You can't sort an array from a single element!" << endl;
}