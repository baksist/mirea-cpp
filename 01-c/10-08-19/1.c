#include <stdio.h> //посчитать и найти сумму элементов двумерного массива, найти макс и мин и поменять их местами

const int m=3;
const int n=3;

int main(){
	int a[m][n];
	int s = 0;
	
	for (int i = 0; i < m; i++){
		printf("Введите %d-ую строку:\n",i);
		
		for (int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	int imin = 0;
	int imax = 0;
	int jmin = 0;
	int jmax = 0;
	
	for (int i = 0; i < m; i++){
		
		for (int j = 0; j < n; j++){
			
			s += a[i][j];
			if (a[i][j] < a[imin][jmin]){
				imin = i;
				jmin = j;
			}
			if (a[i][j] > a[imax][jmax]){
				imax = i;
				jmax = j;	
			}
		}
	}
	
	printf("Сумма элементов массива равна %d\n",s);
	printf("Максимальный элемент массива — %d\n", a[imax][jmax]);
	printf("Минимальный элемент массива — %d\n", a[imin][jmin]);
	printf("Массив после обработки:\n");
	
	int c = a[imin][jmin];
	a[imin][jmin] = a[imax][jmax];
	a[imax][jmax] = c;
	
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
