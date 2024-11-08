//не работает с пробелами (пока что)

#include <stdio.h>
#include <string.h>
#include <locale.h>

struct name
{
	char fam[20];
	char imya[20];
	char otch[20];
};

struct address
{
	char street[20];
	int num;
	int flat;
};

struct anketa
{
	struct name fio;
   	struct address add;
	char sex;
	int age;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	struct anketa A[10];
	int k = 0;
	int n;
	printf("Введите кол-во анкет(1, 10): ");
	scanf("%d", &n);
	struct address baza[n];
	for(int i = 0; i < n; i++)
	{
		baza[i].street[0] = '\0';
		baza[i].num = 0;
	}
	for (int i = 0; i < n; i++)
	{
		printf("\nВведите данные:\n");
		printf("Фамилия: ");
		scanf("%s", A[i].fio.fam);
		printf("Имя: ");
		scanf("%s", A[i].fio.imya);
		printf("Отчество: ");
		scanf("%s", A[i].fio.otch);
		printf("Улица: ");
		scanf("%s", A[i].add.street);
		printf("Дом: ");
		scanf("%d", &A[i].add.num);
		printf("Квартира: ");
		scanf("%d", &A[i].add.flat);
		printf("Пол(M/F): ");
		scanf("%s", &A[i].sex);
		printf("Возраст: ");
		scanf("%d", &A[i].age);
		
		int flag = 0;
		for (int j = 0; j < n; j++)
		{
			if ((strcmp(baza[j].street, A[i].add.street) == 0) && (baza[j].num == A[i].add.num))
			{
				flag = 1;
			}
		}
		if (flag == 0)
		{
			strcpy(baza[k].street, A[i].add.street);
			baza[k].num = A[i].add.num;
			k++;
		}
	}

	int sum = 0;

	for (int i = 0; i < k; i++)
	{
		sum = 0;
		for (int j = 0; j < n; j++)
		{
			if (strcmp(baza[i].street, A[j].add.street)	== 0)
			{
				if (baza[i].num == A[j].add.num)
				{
					if (A[j].sex == 'F')
					{
						if (A[j].age > 30)
						{
							sum++;
						}
					}
				}
			}
		}
		if (sum > 0)
			printf("\nПо адресу %s, дом %d проживает %d женщин(-ы, -а) старше 30\n", baza[i].street, baza[i].num, sum);
	}

	return 0;
}
