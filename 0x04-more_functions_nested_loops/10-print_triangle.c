#include "main.h"

/**
 * print_triangle - printing triangle
 * @size : size of the triangle
 * Return: return void
 */

void print_triangle(int size)
{
	int i, j, k, l;

	k = size - 1;
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = k; j > 0; j--)
			{
				_putchar(' ');
			}
			for (l = k; l < size; l++)
			{
				_putchar('#');
			}
			_putchar('\n');
			k--;
		}
	}
	else
	{
		_putchar('\n');
	}
}
