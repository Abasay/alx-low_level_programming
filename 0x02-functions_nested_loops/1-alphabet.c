#include "main.h"
/**
 * print_alphabet - print the alphabets in lower case
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
