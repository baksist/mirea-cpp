#include <stdio.h>
const int n = 20;
int main(){
	int A[n];
	int c;
	for (int i =0; i<n; i++){
		scanf("%d", &A[i]);
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (A[i]<A[j]){
				c = A[i];
				A[i] = A[j];
				A[j] = c;
			}
		}
	}
	for (int i = 0; i < n; i++) printf("%d ", A[i]);
	printf("\n");
	printf("%d %d %d\n", A[0], A[1], A[2]);
	printf("%d %d %d\n", A[n-1], A[n-2], A[n-3]);
	return 0;
}
