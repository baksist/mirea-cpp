#include <stdio.h>

//функции - участок кода программы, который может 
//неоднократно вызываться по мере надобности
//[type/void] name (arguments) { body; [return/null] }
//

int max(int *a, int *b){
		if (*a > *b)
				return *a;
		else
				return *b;
}

int main(){
	int x1, x2;
	scanf("%d %d", &x1, &x2);
	printf("%d\n",max(&x1,&x2));
	return 0;
}
