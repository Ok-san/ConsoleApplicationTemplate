#include "libraries.h"

template<typename T>
void seminar_3(T type)
{
	char number;
	const int maxSize = 100;
	while (true)
	{
		system("cls");
		cout << "In this workshop presented to: \n-Calculate the maximum element of the array;\n-Product of elements between the firstand second zero elements;\n-Transformation of an array by oddand even position." << endl;
		cout << "\nFirst, create an array." << endl;
		int size = enterSize(maxSize);
		T* array = new T[size];
		enterData(array, size);
		/*Выводим меню действий*/
		bool flag = true;
		while (flag)
		{
			cout << "\nChoose an action." << endl;
			cout << "- Calculate the maximum element of the array. Enter 1" << endl;
			cout << "- Product of elements between the first and second zero elements. Enter 2." << endl;
			cout << "- Transformation of an array by odd and even position. Enter 3." << endl;
			cout << "- Re-enter the array. Enter 4." << endl;
			cout << "- Go back to the main menu. Enter 0." << endl;

			while (true)
			{
				cin.ignore(32767, '\n');
				cin >> number;

				switch (number)
				{
				case '1':
					displaySeminar_3p1(array, size);
					break;
				case '2':
					displaySeminar_3p2(array, size);
					break;
				case '3':
					displaySeminar_3p3(array, size);
					break;
				case '4':
					deleteData(array);
					flag = false;
					break;
				case '0':
					deleteData(array);
					menu();
					break;
				default:
					cout << "Error! You entered the wrong number." << endl;
					break;
				}
				break;
			}
		}
	}
}
