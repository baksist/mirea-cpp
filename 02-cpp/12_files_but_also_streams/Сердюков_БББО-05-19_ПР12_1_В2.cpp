//72 mod 10 == 2 => var 2
#include "iostream"
#include "fstream"
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	ifstream file;
	char path[80];
	char c;
	int count = 0;
	int sum = 0;
	
	cout << "Введите путь к файлу: ";
	cin.getline(path,80);
	
	file.open(path);
	if (!file)
	{
		perror("Ошибка");
		return 0;
	}
	
	while(!file.eof())
	{
		c = file.get();
		if (c >= '0' && c <= '9')
		{
			count++;
			sum += c - '0';
		}
	}
	
	cout << "Количество цифр: " << count << endl;
	cout << "Сумма цифр: " << sum << endl;
	
	file.close();
	
	return 0;
}
