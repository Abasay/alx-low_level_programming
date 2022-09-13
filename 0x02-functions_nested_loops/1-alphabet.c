#include "main.h"
/**
 * main - entry point
 * Return: return 0 upon success
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
		_putchar('\n');
	}
}

int main(void)
{
	print_alphabet();
	return (0);
}
