//72 mod 10 == 2 => var 2
#include "iostream"
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
		
	char c;
	char path[80];
	FILE * fp;
	int count = 0;
	int sum = 0;

	cout << "Введите путь к файлу: ";
	cin.getline(path,80);
	
	fp = fopen(path, "r");
	if (fp == NULL)
	{
		perror("Ошибка");
		return 0;
	}

	c = fgetc(fp);
	while (c != EOF)
	{
		if (c >= '0' && c <= '9')
		{
			count++;
			sum += c - '0';
		}
		c = fgetc(fp);
	}

	cout << "Количество цифр: " << count << endl;
	cout << "Сумма цифр: " << sum << endl;
	
	fclose(fp);

	return 0;
}
