template<typename T>
int positionNull(T* array, int size)
{
	int first = -1;
	for (int i = 0; i < size; i++)
	{
		if (array[i] == 0)
		{
			first = i;
			break;
		}
	}
	return first;
}

template<typename T>
int positionNull(T* array, int size, int first)
{
	int second = first;
	for (int i = first + 1; i < size; i++)
	{
		if (array[i] == 0)
		{
			second = i;
			break;
		}
	}
	return second;
}
