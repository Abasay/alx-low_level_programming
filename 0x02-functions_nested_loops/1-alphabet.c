
#include "main.h"
/**
 * main - print_alphabet
 * print_alphabet(void) - print the alphabets in lower case
 * Return: return 0 upon success
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
