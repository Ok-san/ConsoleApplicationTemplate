template<typename T>
int numberOfMaxElements(T* array, int size, T max)
{
	int quantity = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[i] == max)
			quantity++;
	}
	return quantity;
}
