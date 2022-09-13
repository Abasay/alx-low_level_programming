#include "main.h"
/**
 * print_sign - printing sign
 * @n : parameter of the function
 * Return: return per instruction
 */
int print_sign(int n)
{
	int eturn_no;

	if (n > 0)
	{
		eturn_no = 1;

		_putchar('+');
	}
	else if (n == 0)
	{
		eturn_no = 0;

		_putchar('0');
	}
	else if (n < 0)
	{
		eturn_no = -1;

		_putchar('-');
	}
	return (eturn_no);
}
