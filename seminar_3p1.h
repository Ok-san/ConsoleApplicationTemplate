#include "libraries.h"

template<typename T>
void displaySeminar_3p1(T* array, int size) 
{
	system("cls");

	T max = serchMax(array, size);
	int quantity = numberOfMaxElements(array, size, max);
	int* arrayPosition = new int[quantity];
	arrayPosition = positionOfMaxElements(array, size, max, quantity);

	cout << "Original array:" << endl;
	displayData(array, size);
	cout << "\nMaximum element/s: ";
	for (int i = 0; i < quantity; i++)
		cout << max << " ";
	cout << "\nQuantity: " << quantity;
	cout << "\nMaximum element position: ";
	displayData(arrayPosition, quantity);

	//cout << "\nMaximum element number/s: ";
	//for (int i = 0; i < quantity; i++)
	//	cout << *(arrayPosition + i) + 1 << " ";

	delete[] arrayPosition;
}