#include "main.h"

/**
 * print_diagonal - printing in diagonal
 * @n : parameter n
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(92);
			_putchar('\n');
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
