#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const int N = 1000;

int WordCmp(char * s1, char * s2); //16 вариант

int main()
{
	char *x = malloc(sizeof(char) * N);
	char *y = malloc(sizeof(char) * N);
	gets(x);
	gets(y);
	printf("%d\n", WordCmp(x,y));
	free(x);
	free(y);
	return 0;
}

int WordCmp(char *s1, char *s2)
{
	char *s1_1 = malloc(sizeof(char) * strlen(s1));
	char *s2_1 = malloc(sizeof(char) * strlen(s2));
	int j = 0;

	for (int i = 0; i < strlen(s1); i++){
		if (*(s1 + i) == ' ');
		else{
			*(s1_1 + j) = *(s1 + i);
			j++;
		}
	}

	j = 0;
	for (int i = 0; i < strlen(s2); i++)
	{
		if (*(s2 + i) == ' ');
		else
		{
			*(s2_1 + j) = *(s2 + i);
			j++;
		}
	}

	j = 0;
	while (*s1_1 == *s2_1)
	{
		if (*s1_1 == '\0' && *s2_1 == '\0')
		{
				free(s1_1 - j);
				free(s2_1 - j);
				return 1;
		}
		*s1_1++;
		*s2_1++;
		j++;
	}

	free(s1_1 - j);
	free(s2_1 - j);
	return 0;	
}
