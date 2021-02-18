int numberWord(char* buffer, int size)
{
	int numWord = 0, numLetters = 0;
	for (int i = 0; buffer[i] != '\0'; i++)
	{
		numLetters = 0;
		while (buffer[i] != ' ' && buffer[i] != '.' && buffer[i] != ',' && buffer[i] != '!' && buffer[i] != '?' && buffer[i] != ':' && buffer[i] != ';' && buffer[i] != '\"')
		{
			if (buffer[i] == '\0')
				break;
			else
			{
				numLetters++;
				i++;
			}
		}
		if (buffer[i] == '\0')
			break;
		else
		{
			if (numLetters < 5)
			{
				numWord++;
			}
			if (buffer[i] == '.' || buffer[i] == ',' || buffer[i] == '!' || buffer[i] == '?' || buffer[i] == ':') 
				i++;
		}
	}
	return numWord;
}