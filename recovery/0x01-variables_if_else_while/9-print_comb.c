#include <stdio.h>
/**
 * main - entry point
 * Return: return 0 if successful
 */
int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		if (i == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
