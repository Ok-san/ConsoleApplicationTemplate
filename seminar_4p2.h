#include"libraries.h"

template<typename T>
void displaySeminar_4p2(T** matrix, int row, int column)
{
	system("cls"); 
	cout << "Original matrix:" << endl;
	displayData(matrix, row, column);
	cout << "\nThe sums in the rows with negative elements: " << endl;
	cout << "------------------------" << endl;
	cout << "Row " << "|" << " Sum" << endl;
	cout << "------------------------" << endl;
	bool flag = false;
	for (int i = 0; i < row; i++)
	{
		T sum = 0;
		if (searchNegativeElement(matrix, i, column))
		{
			flag = true;
			sum = sumElements(matrix, i, column);
			cout << setw(2) << i + 1 << setw(3) << "|" << setw(2) << sum << endl;
		}

	}
	if (!flag) cout << "There are no negative elements in the matrix." << endl;

	cout << "------------------------" << endl;
}