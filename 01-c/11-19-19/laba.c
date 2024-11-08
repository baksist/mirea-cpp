#include <stdio.h>
#include <string.h>

const int N = 1000;

int WordCmp (char x[], char y[]);

int main()
{
	char s1[N], s2[N];
	gets(s1);
	gets(s2);
	printf("%d\n", WordCmp(s1,s2));
	return 0;
}


int WordCmp (char x[], char y[])
{
	char x1[strlen(x)], y1[strlen(y)];
	int j = 0;
	
	for (int i = 0; i < strlen(x); i++)
	{
		if (x[i] != ' '){
			x1[j] = x[i];
			j++;
		}
	}

	x1[j] = '\0';
	j = 0;
	
	for (int i = 0; i < strlen(y); i++)
	{
		if (y[i] != ' '){
			y1[j] = y[i];
			j++;
		}
	}
	y1[j] = '\0';
	
	int flag = 1;
	if (strlen(x1) != strlen(y1))
			flag = 0;
	else
	{
		for (int i = 0; i < strlen(x1); i++)
		{
			if (x1[i] != y1[i])
					flag = 0;
		}
	}
	return flag;
}
