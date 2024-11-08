#include <stdio.h>
const int n = 3;
int main(){
	
	int A[n][n];
	int max_str[n];
	int max;
	int min;
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			scanf("%d", &A[i][j]);
			}
	}
	
	for (int i = 0; i < n; i++){
		max = A[i][0];
		for (int j = 0; j < n; j++){
			if (A[i][j] > max) max = A[i][j];
		}
		max_str[i] = max;
	}

	min = max_str[0];
	for (int i = 0; i < n; i++){
			if (max_str[i] < min) min = max_str[i];
	printf("%d\n", min);
	}
}

