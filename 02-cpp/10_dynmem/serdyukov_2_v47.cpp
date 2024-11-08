//Сердюков М.Р,, группа БББО-05-19, вариант 47

#include "iostream"
#include "iomanip"
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int pr = 1;
	
	int n, m;
	cout << "Введите кол-во строк: ";
	cin >> n;
	cout << "Введите кол-во столбцов: ";
	cin >> m;

	int** A = new int* [n];
	for (int i = 0; i < n; i++)
		*(A + i) = new int [m];

	for (int i = 0; i < n; i++)
	{
		cout << "Введите " << (i + 1) << "-ую строку:" << endl;
		for (int j = 0; j < m; j++)
		{
			cin >> *(*(A + i) + j);
			if (i == j)
				pr *= *(*(A + i) + j);
		}
	}
	
	cout << "Исходный массив:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << setw(4) << *(*(A + i) + j) << " ";
		}
		delete[] *(A + i);
		cout << endl;
	}
	delete[] A;

	cout << "Произведение элементов главной диагонали: ";
	cout << pr << endl;
	
	return 0;
}
