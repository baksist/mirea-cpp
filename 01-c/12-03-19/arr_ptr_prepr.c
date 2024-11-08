#include <stdio.h>
#include <stdlib.h>

#define cycle(n) for(int i = 0; i < n; i++)
#define check_range(a,b,n) while((*n < a) || (*n > b)){ printf("Ошибка ввода, попробуйте ещё раз\n"); scanf("%d", n);}

int main()
{
	int *n = malloc(sizeof(int));
	printf("Введите размер массива(число от 5 до 20): ");
	scanf("%d", n);
	check_range(5, 20, n);

	printf("Введите %d элементов в диапазоне от -50 до 50:\n", *n);
	int A[*n];
	cycle(*n)
	{
		scanf("%d", A + i);
		check_range(-50, 50, (A + i));
	}

	int k = 0;
	cycle(*n)
	{
		if ( *(A + i) == *(A + i + 1))
				k+=1;
	}
	
	printf("В массиве %d пар(-ы,-а) соседних элементов с одинаковыми значениями\n", k);
	free(n);
	return 0;
}
