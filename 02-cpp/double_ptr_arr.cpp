#include "iostream"

using namespace std;

int main()
{
	int m, n, sum;
	sum = 0;
	m = 3;
	n = 4;
	int** p = new int* [m];
	for (int i = 0; i < m; i++)
			p[i] = new int[n];
	for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
					cin >> p[i][j];
	for (int i = 0; i < m; i++)
	{		
		for (int j = 0; j < n; j++)
			{
					sum += p[i][j];
			}
		delete p[i];
	}
	delete p;
	cout << sum << endl;
	return 0;
}
