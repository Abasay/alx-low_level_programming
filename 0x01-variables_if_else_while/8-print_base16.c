#include <stdio.h>
/**
 * main - program starts and ends with the main
 * Return: returna 0 when successful
 */
int main(void)
{
	int i;
	char c;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		i++;
	}
	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
