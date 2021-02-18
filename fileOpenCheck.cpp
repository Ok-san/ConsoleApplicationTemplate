#include "libraries.h"

char* fileOpenCheck(int size)
{
	ifstream file("text.txt");
	if (!file.is_open()) // если файл не открыт
	{
		cout << "Couldn't open the file\n";
		return 0;
	}
	else if (file.peek() == EOF)
	{
		cout << "The file is empty\n";
		return 0;
	}
	else
	{
		char* buffer = new char[size + 1];
		file.get(buffer, size);
		file.close();
		return buffer;
	}
}