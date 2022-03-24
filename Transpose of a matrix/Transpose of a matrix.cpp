#include <iostream>
using namespace std;

int main()
{
	int matrix [50][50];
	int m, n; //matrix[m][n]
	int i, j; //For variables

	//Input
	cin >> m >> n;

	for(i = 0; i < m; i++)
		for(j = 0; j < n; j++)
			cin >> matrix[i][j];

	//Output
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
			cout << matrix[j][i] << " ";
		cout << endl;
	}


	return 0;
}
