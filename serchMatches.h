template<typename T>
bool searchMatches(T** matrix, int i, int column)
{
	int matches = true;

	for (int j = i; j < column; j++)
	{
		if (matrix[i][j] != matrix[j][i])
		{
			matches = false;
			break;
		}
	}
	return matches;
}