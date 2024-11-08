//Сердюков М.Р., группа БББО-05-19, вариант 2
#include "iostream"
#include <locale.h>

#define print_arr(X, l) for(int i = 0; i < l; i++) cout << *(X + i) << " "; cout << endl;

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int n = 5;
	int m = 4;
	int *A = new int[n];
	int *B = new int[m];
	int pr_a = 1;
	int pr_b = 1;

	cout << "Введите массив А из " << n << " элементов:\n";	
	for (int i = 0; i < n; i++)
	{
		cin >> *(A + i);
		pr_a *= *(A + i);
	}
	
	cout << "Введите массив B из " << m << " элементов:\n";	
	for (int i = 0; i < m; i++)
	{
		cin >> *(B + i);
		pr_b *= *(B + i);
	}
	
	if (pr_a < pr_b)
	{
		cout << "Массив с наименьшим произведением элементов (" << pr_a <<"):\n";
		print_arr(A,n);	
		cout << "Массив с наибольшим произведением элементов (" << pr_b <<"):\n";
		print_arr(B,m);
	}
	else
	{
		cout << "Массив с наименьшим произведением элементов (" << pr_b <<"):\n";
		print_arr(B,m);
		cout << "Массив с наибольшим произведением элементов (" << pr_a <<"):\n";
		print_arr(A,n);
	}
	
	delete[] A;
	delete[] B;
	return 0;
}
