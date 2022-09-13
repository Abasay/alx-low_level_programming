#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * main - entry function
 * Return: alwasys 0
 */
int main(void)
{
	int n;
	double finab;
	double x, num;
	double root;

	num = 1.618;
	for (n = 0; n <= 50; n++)
	{
		root = sqrt(5.0);
		x = (pow(num, n) - (1 - pow(num, n))) / root;
		finab = ceil(x);
		printf("%d, ", finab);
	}
	putchar('\n');
	return (0);
}
