#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const int N = 1000;

int WordCmp(char * s1, char * s2);

int main()
{
	char *y;
	char *x;
	printf("%s",*x);
	//printf("%d\n", WordCmp(x, y));
}
/*
int WordCmp(char * s1, char * s2)
{
	char *s1_1 = malloc(sizeof(char) * N);
	char *s2_1 = malloc(sizeof(char) * N);
	int j = 0;
	printf("%d\n",strlen(&s1));
	for (int i = 0; i < strlen(&s1); i++)
	{
		if (*(s1 + i) != ' '){
			*(s1_1 + j) = *(s1 + i);
			j++;
		}
	}

	j = 0;
	
	for (int i = 0; i <= strlen(&s2); i++)
	{
		if (*(s2 + i) != ' ')
		{
			*(s2_1 + j) = *(s2 + j);
			j++;
		}
	}
	
	puts(s1_1);
	puts(s2_1);
	int flag = 1;
	if (strlen(&s1_1) != strlen(&s2_1))
			flag = 0;
	else
	{
		for (int i = 0; i < strlen(&s1_1); i++)
		{
			if (*(s1_1+i) != *(s2_1+i))
					flag = 0;
		}
	}
	free(s1_1);
	free(s2_1);
	return flag;	

}*/
