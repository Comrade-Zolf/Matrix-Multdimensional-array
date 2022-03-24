#include <iostream>
using namespace std;

int main()
{

	int matrix[3][4];
	int l, c;

	for(l = 0; l < 3; l++)
	{
		for (c = 0; c < 4; c++)
		{
			cin >> matrix[l][c];
		}
	}

	for(l = 0; l < 3; l++)
	{
		for (c = 0; c < 4; c++)
		{
			cout << matrix [l][c] << " ";
		}
		cout << "\n";
	}



	return 0;
}
