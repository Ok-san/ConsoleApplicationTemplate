#include "libraries.h"

int enterSize(const int maxSize)
{
	int size;
	cout << "Please enter the number of elements in the array. (No more than " << maxSize << ")" << endl;
	cin.ignore(32767, '\n');
	while (true)
	{
		cin >> size;
		if (cin.fail())
		{
			cin.clear(); //очищаем поток
			cin.ignore(32767, '\n'); //игнорируем
			cout << "\nError. Invalid character. Try again." << endl;
		}
		else if (size <= maxSize && size > 0) break;

		else cout << "\nAn invalid size. Try again" << endl;
	}
	/*if (confirmation())
	{
		return size;
	}
	else return 0;*/
	return size;
}