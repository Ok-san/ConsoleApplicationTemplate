template<typename T>
T sumElements(T** matrix, int i, int column)
{
	T sum = 0;
	for (int k = 0; k < column; k++)
		sum += matrix[i][k];

	return sum;
}