#include"libraries.h"

char* wordSerch(char* buffer, int size) {
	char* arrayResult = new char[size];
	int j = 0, numWords = 0;
	for (int i = 0; buffer[i]; i++) {
		int numLetters = 0;
		while (buffer[i] && (buffer[i] != ' ' && buffer[i] != '.' && buffer[i] != ',' && buffer[i] != '!' && buffer[i] != '?' && buffer[i] != ':' && buffer[i] != ';' && buffer[i] != '\"' && buffer[i] != '\n')) {
			numLetters++;
			i++;
		}
		if (numLetters < 5) {
			for (int k = i - numLetters; k < i; k++) {
				if (j < size - 1) {
					arrayResult[j] = buffer[k];
					j++;
				}
			}
			if (j < size - 1) {
				arrayResult[j] = ' ';
				j++;
			}
			numWords++;
		}
		if (buffer[i] == '.' || buffer[i] == ',' || buffer[i] == '!' || buffer[i] == '?' || buffer[i] == ':') {
			i++;
		}
	}
	if (j < size) {
		arrayResult[j - 1] = '*';
	}
	else arrayResult[size - 2] = '*';
	if (numWords > 0) {
		cout << "Number of words: " << numWords << endl;
		return arrayResult;
	}
	else return 0;
}
