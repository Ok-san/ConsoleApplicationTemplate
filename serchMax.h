template<typename T>
T serchMax(T* array, int size)
{
	T max = array[0];

	for (int i = 1; i < size; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}
	return max;
}