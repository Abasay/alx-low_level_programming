#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - printing
 * @n : the number to start counting from
 * Return: always 0;
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i < 98; i++)
	{
		printf("%i, ", i);
	}

	for (i = n; i > 98; i--)
	{
		printf("%i, ", i);
	}
	printf("98");
	putchar('\n');
}
