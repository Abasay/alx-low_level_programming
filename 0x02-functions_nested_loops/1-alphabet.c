#include "main.h"
/**
 * main - entry point
 * Return: return 0 upon success
 * print_alphabet: print alphabets in lower case
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
