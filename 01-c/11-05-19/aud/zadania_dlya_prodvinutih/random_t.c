#include <stdio.h>
#include <math.h>

int main()
{
	unsigned short a, b, t, c1, c2;
	
	printf("Enter A(0..65535): ");
	scanf("%hu", &a);
	printf("Enter B(0..65535): ");
	scanf("%hu", &b);
	printf("Enter t(0..15): ");
	scanf("%hu", &t);

	unsigned short k = (int)(pow(2,(16 - t)));
	c1 = (a&k) | b&(k-1);
	c2 = (b&k) | a&(k-1);
	printf("C1 = %hu\n", c1);
	printf("C2 = %hu\n", c2);
	
	return 0;
}
