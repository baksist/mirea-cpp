#include <stdio.h>
const int n = 3;
int main(){
	int A[n][n];
	int sum_gl = 0;
	int sum_nad = 0;
	int sum_pod = 0;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			scanf("%d", &A[i][j]);
		}
	}
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (i == j) sum_gl += A[i][j];
			if (i < j) sum_nad += A[i][j];
			if (i > j) sum_pod += A[i][j];
			printf("%3d ", A[i][j]);
		}
		printf("\n");
	}

	printf("Сумма эл. главной диагонали равна %d\n", sum_gl);
	printf("Сумма эл. над главной диагональю равна %d\n", sum_nad);
	printf("Сумма эл. под главной диагональю равна %d\n", sum_pod);

	return 0;
}
