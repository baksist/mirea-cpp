#include <stdio.h>

#define p 3.14
#define pi 3.1415
#define cycle(n,m) for(int i = n; i < m; i++)
/*
	#if
	#else
	#ifdef
	#endif
*/

int main()
{
	int r;
	scanf("%d", &r);
	float c = 2 * p * r;
#undef p
	cycle(10, 17)
	{
		printf("%f %d\n", c, i);
	}
	return 0;
}
