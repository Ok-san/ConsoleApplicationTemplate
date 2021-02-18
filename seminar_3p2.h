#include "libraries.h"

template<typename T> 
void displaySeminar_3p2(T* array, int size)
{
	system("cls"); 
	cout << "Original array:" << endl;
	displayData(array, size);
	int first = positionNull(array, size);
	if (first != -1)
	{
		int second = positionNull(array, size, first);
		if (first != second)
		{
			if (first + 1 != second)
			{
				if (first + 2 != second)
				{
					cout << "\nThe product of the elements: " << productElements(array, first, second) << endl;
					cout << "Positions of zero elements: " << first << " " << second << endl;
				}
				else
					cout << "\nThe product cannot be calculated.\nZero elements are placed one position apart!" << endl;
			}
			else
				cout << "\nThe product cannot be calculated.\nZero elements are placed one after the other!" << endl;
		}
		else
			cout << "\nThe product cannot be calculated.\nThere is only one null element in the array!" << endl;
	}
	else
		cout << "\nThe product cannot be calculated.\nThere are no null elements in the array!" << endl;
}