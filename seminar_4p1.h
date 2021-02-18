#include"libraries.h"

template<typename T>
void displaySeminar_4p1(T** matrix, int row, int column)
{
	system("cls"); 
	cout << "Original matrix:" << endl;
	displayData(matrix, row, column);
	if (row == column) 
	{
		cout << "\nMatching rows and columns:" << endl;
		cout << "-------------------------------------------" << endl;
		cout << "Row / column " << "|" << " Matching elements" << endl;
		cout << "-------------------------------------------" << endl;
		bool equal = false;
		for (int i = 0; i < row; i++)
		{
			equal = false;
			if (searchMatches(matrix, i, column))
			{
				equal = true;
				cout << setw(7) << i + 1 << setw(7) << "|" << setw(2);
				for (int k = i; k < row; k++) 
					cout << *(*(matrix + i) + k) << " ";
			}
		}
		if (!equal) cout << "No matches!" << endl;

		cout << "\n-------------------------------------------" << endl;
	}
	else cout << "\nThe matrix is not square.There are no matching rows and columns." << endl;
}