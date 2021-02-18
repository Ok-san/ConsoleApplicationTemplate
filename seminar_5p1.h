#include "libraries.h"
#include "prototypes.h"

template<typename T> void seminar_5p1(T type) {
	system("cls");
	int number;
	ifstream file("text.txt");
	if (!file.is_open()) // если файл не открыт
		cout << "Couldn't open the file\n";
	else {
		cout << "The file is open\n";
		if (file.peek() == EOF) {
			cout << "The file is empty\n";
		}
		else {
			int size = 100;
			char* buffer = new char[size + 1];
			file.get(buffer, size);
			file.close();
			if (char* arrayResult = wordSerch(buffer, size)) {
				cout << "Words containing no more than 4 letters:" << endl;
				for (int i = 0; arrayResult[i] != '*'; i++) {
					cout << arrayResult[i];
				}
				cout << endl;

				delete[] arrayResult;
				delete[] buffer;
			}
			else {
				cout << "No words with no more than 4 letters." << endl;
			}
		}
	}
	cout << endl;
	cout << "Choose an action." << endl;
	cout << "- Come back. Enter 1." << endl;
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
			case 1:seminar_5(); break;
			case 0:menu(); break;
			default:
				cout << "Error! You entered the wrong number." << endl;
				break;
			}
		}
	}
}
