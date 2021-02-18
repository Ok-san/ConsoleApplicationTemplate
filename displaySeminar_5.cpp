#include "libraries.h"

void displaySeminar_5()
{
	system("cls");
	int size = 100;
	char* buffer = new char[size + 1];
	if (buffer = fileOpenCheck(size))
	{
		cout << "Original text:" << endl;
		displayData(buffer, size);
		int numWord = numberWord(buffer, size);
		if (numWord > 0)
		{
			cout << "\nThe number of words with no more than 4 letters: " << numWord;
			cout << "\nWords:" << endl;
			displayWord(buffer, size);
			delete[] buffer;
			cout << endl;
		}
		else
			cout << "\nNo words with no more than 4 letters." << endl;
	}
	cout << endl;
}
