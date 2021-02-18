#include"libraries.h"
void displayData(char* buffer, int size)
{
	for (int i = 0; buffer[i] != '\0'; i++)
	{
		cout << *(buffer + i);
	}
	cout << endl;
}