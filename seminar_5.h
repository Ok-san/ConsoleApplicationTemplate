#include "libraries.h"
#include"prototypes.h"

template<typename T> void seminar_5(T type) {
	int number;
	system("cls");
	cout << "Enter in the file 'text.txt' the desired text. Maximum 100 words" << endl;
	cout << "Choose an action." << endl;
	cout << "- Reading text from a file.Enter 1" << endl;
	cout << "- Go back to the main menu. Enter 0." << endl;
	while (true) {
		cin >> number;
		cin.ignore(2, '\n');
		if (cin.fail()) { //если ввод не число
			cin.clear(); //очищаем поток
			cin.ignore(32767, '\n'); //игнорируем
			cout << "Error. Try again." << endl;
		}
		else {
			switch (number) {
			case 1:seminar_5p1(type); break;
			case 0:menu(); break;
			default:
				cout << "Error! You entered the wrong number." << endl;
				break;
			}
		}
	}
}