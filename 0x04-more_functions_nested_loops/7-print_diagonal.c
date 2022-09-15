#include "main.h"

/**
 * print_diagonal - printing in diagonal
 * @n : parameter n
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			for (j = 1; j < n; j++)
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
