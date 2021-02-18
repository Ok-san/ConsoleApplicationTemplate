template<typename T>
bool searchNegativeElement(T* matrix, int i, int column)
{
	bool negative = false;
	for (int j = 0; j < column; j++)
		if (matrix[i][j] < 0)
			negative = true;

	return negative;
}