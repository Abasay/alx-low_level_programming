#include "main.h"

/**
 * reverse_array - reversing array
 * @a: array of integers
 * @n: array size
 * Return: return array
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	i = n - 1;
	for (j = i; j >= 0; j--)
	{
		temp = a[j];
		a[j] = temp;
		if (j > 0)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
