#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char * to_bin(unsigned long x)
{
  size_t int_size = pow(sizeof(x), 2);
  char * res;
  char buf[int_size];

  size_t r_pos = int_size - 1;
  size_t l_pos = 0;

  while (x > 0) {
    --r_pos;
    buf[r_pos] = (x & 1) + '0';
    x = x >> 1;
  }

  l_pos = int_size - r_pos;
  res = malloc(sizeof(char) * l_pos);
  memcpy(res, buf + r_pos, l_pos);

  return res;
}

unsigned long to_dec(char s[])
{
	unsigned long x = 0;
	size_t k = strlen(s) - 1;
	for (size_t i = 0; i <= k; ++i)
		x = x + (s[i] - '0') * pow(2, k - i);	

	return x;
}

int main()
{
	unsigned long x;
	unsigned long x_gray;
	char s[65];
	
	printf("Enter a decimal number: ");	
	scanf("%lu", &x);
	x_gray = x ^ (x >> 1);
	printf("\nNumber: %lu\n", x);
	printf("Binary equivalent: %s\n", to_bin(x));
	printf("Gray code equivalent: %s\n", to_bin(x_gray));
	
	printf("\nEnter a Gray code number: ");
	scanf("%s", s);
	x_gray = to_dec(s);
	for (unsigned long i = 1; i < 64; i <<= 1)
			x_gray ^= (x_gray >> i);
	printf("\nGray code: %s\n", s);
	printf("Binary equivalent: %s\n", to_bin(x_gray));
	printf("Decimal equivalent: %lu\n", x_gray);

	return 0;
}
