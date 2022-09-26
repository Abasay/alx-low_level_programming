#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print diagonals
 * @a : array name
 * @size: size
 * Return: voi
 */

void print_diagsums(int *a, int size)
{
	int j;
	unsigned sum1, sum2;

	for (j = 0; j < size; j++)
	{
		sum1 = a[(size * j) + j];
		sum2 = a[(size * (j + 1)) - (j + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
