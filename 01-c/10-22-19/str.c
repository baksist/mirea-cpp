#include <stdio.h>
#include <string.h>
int main(){
	char A[5];
	gets(A);
	puts(A);
	printf("%d",sizeof(A));
	printf("%d",strlen(A));
	return 0;
}
