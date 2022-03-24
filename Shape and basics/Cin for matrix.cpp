#include <iostream>
using namespace std;

#define length 2

int main()
{
	int i; //Lines
	int j; //Columns

	int element[100][100];

	for(i = 0; i < length; i++)
	{
		for(j = 0; j < length; j++)
		{
			cin >> element[i][j];
		}
	}
	
	for(i = 0; i < length; i++)
	{
		for(j = 0; j < length; j++)
		{
			cout << element[i][j] << " " << endl;
		}
	}

	return 0;
}
