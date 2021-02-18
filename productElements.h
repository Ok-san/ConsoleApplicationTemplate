template<typename T>
T productElements(T* array, int first, int second)
{
	T prod = 1;
	for (int i = first + 1; i < second; i++)
		prod *= array[i];

	return prod;
}
