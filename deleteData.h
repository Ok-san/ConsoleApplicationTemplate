template<typename T>
void deleteData(T* array)
{
	delete[] array;
}

template<typename T> 
void deleteData(T** matrix, int row)
{
	for (int i = 0; i < row; i++)
		delete matrix[i];

	delete[] matrix;
}
