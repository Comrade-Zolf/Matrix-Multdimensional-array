#include <iostream>
using namespace std;

int s(int matrix[][4], int l, int c)
{
	int sum = 0;
	int i, j;
	for(i = 0; i < l; i++)
		for(j = 0; j < c; j++)
			sum = sum + matrix[i][j];

	return sum;
}

int main()
{
	int matrix[3][4];
	int i, j;

	for(i = 0; i < 3; i++)
		for(j = 0; j < 4; j++)
			cin >> matrix[i][j];

	cout << "soma = " << s(matrix, 3, 4) << endl;

	return 0;
}
