//Сердюков М.Р., группа БББО-05-19, вариант 27
#include "iostream"
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int t;
	cout << "Введите t: ";
	cin >> t;

	int n;
	cout << "Введите размерность квадратного массива: ";
	cin >> n;

	int k = 0;
	
	int **A = new int*[n];
	for (int i = 0; i < n; i++)
		A[i] = new int[n];
	
	for (int i = 0; i < n; i++)
	{
		cout << "Введите " << i << " строку:" << endl;
		for (int j = 0; j < n; j++)
		{
			cin >> *(*(A + i) + j);
			if (*(*(A + i) + j) > t)
					k += 1;
		}
	}

	int *B = new int[k];
	int m = 0;
	cout << "Исходный массив:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (*(*(A + i) + j) > t)
			{
				*(B + m) = *(*(A + i) + j);
				m++;
			}
			cout << *(*(A + i) + j) << " ";
		}
		cout << endl;
	}

	cout << "Сформированный массив из элементов, больших чем t = " << t << ":\n";
	for (int i = 0; i < k; i++)
	{
		cout << *(B + i) << " ";
	}

	cout << "\nРазмерность сформированного массива: ";
	cout << endl << k << endl;

	for (int i = 0; i < n; i++)
			delete[] A[i];
	delete[] A;
	delete[] B;
	return 0;
}
