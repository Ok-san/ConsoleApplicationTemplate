template<typename T>
int* positionOfMaxElements(T* array, int size, T max, int quantity)
{
	int* arrayPosition = new int[quantity];
	int j = 0;

	for (int i = 0; i < size && j < quantity; i++)
	{
		if (array[i] == max) 
		{
			arrayPosition[j] = i;
			j++;
		}
	}
	return arrayPosition;
}
