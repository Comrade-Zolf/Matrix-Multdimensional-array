#include <iostream>
using namespace std;

int main()
{
	int matrix [50][50];
	int n;
	int i, j;

	cin >> n;

	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
		{
			if(i == j)
				matrix[i][j] = 1;
			else
				matrix[i][j] = 0;
		}

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
			cout << matrix[i][j] << " ";
		cout << endl;
	}


	return 0;
}
