#include <stdio.h>
/**
 * main - entry
 * Return: retutn 0 for success
 */
int main(void)
{
	int i, j;

	i = 48;
	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			if ((i != j) && (i < j))
			{
				putchar(i);
				putchar(j);
				if (j == 57 && i == 56)
				{
					break
						;
				}
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
