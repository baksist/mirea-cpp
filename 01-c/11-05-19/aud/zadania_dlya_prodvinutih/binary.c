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
  unsigned long input;
  char bin_input[65];

  printf("Enter a decimal number: ");
  scanf("%lu", &input);
  char * res = to_bin(input);
  printf("%lu(10) = %s(2)\n", input, res);
  free(res);

  printf("Enter a binary number: ");
  scanf("%s", bin_input);
  printf("%s(2) = %lu(10)\n", bin_input, to_dec(bin_input));

  return 0;
}
