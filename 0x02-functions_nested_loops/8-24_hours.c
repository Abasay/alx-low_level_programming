#include "main.h"
/**
 * jack_bauer - print hours
 * Return: return 0;
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 48; i <= 51; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 53; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					if (i >= 50 && j >= 52)
					{
						break;
					}
					if (i > 50)
					{
						break;
					}
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}
}
