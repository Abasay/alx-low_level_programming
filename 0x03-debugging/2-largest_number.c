#include "main.h"

/**
 * largest_number - returns the largest of the 3
 * @a : parameter a
 * @b : parameter b
 * @c : parameter c
 * Return: largest
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if ((a > b && b > c) || (a > c && c > b))
	{
		largest = a;
	}
	else if (((b > a) && (a > c)) || ((b > c) && (c > a)))
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
