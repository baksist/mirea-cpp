//Сердюков М.Р., группа БББО-05-19, вариант 22
#include "iostream"
#include <locale.h>
#include "cstring"

#define print_arr(X,s) for(int i = 0; i < s; i++) cout << *(X + i) << " "; cout << endl;

using namespace std;

int main()
{
	int k = 0;

	cout << "Введите размерность массива: ";
	int n;
	cin >> n;

	int* A = new int[n];
	int* B = new int[1];
	*(B+k) = 0;

	cout << "Введите массив: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> *(A + i);
		if (*(A + i) < 0)
		{
			*(B + k) = *(A + i);
			int* tmp = new int[k];
			memcpy(tmp, B, k*sizeof(int));
			k++;
			delete[] B;
			int* B = new int[k];
			memcpy(B, tmp, (k-1)*sizeof(int));
			delete[] tmp;
		}
	}

	cout << "Исходный массив:" << endl;
	print_arr(A, n);
	if (*(B + 0) == 0)
			cout << "В исходном массиве нет отрицательных элементов" << endl;
	else
	{
		cout << "Массив, сформированный из отрицательных элементов исходного:" << endl;
		print_arr(B,k);
	}
	
	delete[] A;
	delete[] B;
	return 0;
}
