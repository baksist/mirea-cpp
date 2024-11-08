//Сердюков М.Р., группа БББО-05-19, вариант 22

#include "iostream"
#include "cstring"
#include <locale.h>

#define print_arr(X,s) for(int i = 0; i < s; i++) cout << *(X + i) << " "; cout << endl;

using namespace std;

int main()
{
	int k = 0;

	cout << "Введите размерность массива: ";
	int n;
	cin >> n;

	int* A = new int[n];

	cout << "Введите массив: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> *(A + i);
		if (*(A + i) < 0)
			k++;
	}
	
	int* B = new int[k];
	if (k > 0)
	{
		int ind = 0;
		for (int i = 0; i < n; i++)
		{
			if (*(A + i) < 0)
			{
				*(B + ind) = *(A + i);
				ind++;
			}
		}
	}
	
	cout << "Исходный массив:" << endl;
	print_arr(A, n);
	if (k > 0)
	{
		cout << "Массив, сформированный из отрицательных элементов исходного:" << endl;
		print_arr(B,k);
	}
	else
		cout << "В исходном массиве нет отрицательных элементов" << endl;
	
	delete[] A;
	delete[] B;
	return 0;
}
