#include"libraries.h"

void displayWord(char* buffer, int size)
{
	for (int i = 0; buffer[i] != '\0'; i++)
	{
		int numLetters = 0;
		while (buffer[i] != ' ' && buffer[i] != '.' && buffer[i] != ',' && buffer[i] != '!' && buffer[i] != '?' && buffer[i] != ':' && buffer[i] != ';' && buffer[i] != '\"')
		{
			if (buffer[i] != '\0')
			{
				numLetters++;
				i++;
			}
			else break;
		}
		if (buffer[i] == '\0')
			break;
		else
		{
			if (numLetters < 5)
			{
				for (int k = i - numLetters; k < i; k++)
					cout << buffer[k];
				cout << ' ';
			}
			if (buffer[i] == '.' || buffer[i] == ',' || buffer[i] == '!' || buffer[i] == '?' || buffer[i] == ':') 
				i++;
		}
	}
}