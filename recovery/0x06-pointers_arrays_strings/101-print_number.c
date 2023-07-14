#include "main.h"

/**
 * print_number - printing number
 * @n: parameter n
 * Return : void
 */

void print_number(int n)
{
	unsigned int j, k, i;

	if (n < 0)
	{
		_putchar(45);
		j = n * -1;
	}
	else
	{
		j = n;
	}
	k = j;

	for (i = 1; k > 9; i *= 10)
		k /= 10;
	for (; i >= 1; i /= 10)
	{
		_putchar(((j / i) % 10) + 48);
	}
}
