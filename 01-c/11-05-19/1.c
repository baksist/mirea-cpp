#include <stdio.h>

int main(){
	int x;
	int *px;
	px = &x;
	//массивы и адреса
	int A[5]; //аксиома: адрес массива равен адресу первого элемента;  A <--> &A[0]; 
	//A + n == A + n * sizeof(type)
	//A + n == &A[n]  
	//*(A + n) == A[n]
	

	//строки и адреса
	char *s = "ABCD";
	printf("%s\n", s);
	char *B[3] = {"ABC", "ABCDEF", "1234"};
	for (int i = 0; i < 3; i++)
			printf("%14s",B[i]);
	return 0;
}
