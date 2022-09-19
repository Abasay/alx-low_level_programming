#include "main.h"

/**
 * rev_string - reverse string
 * @s : parameter s
 * Return: returns void
 */

void rev_string(char *s)
{
	int i, j;
	char first, last;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (j = (i - 1) / 2; j >= 0; j--)
	{
		first = s[j];
		last = s[j];
		s[j] = first;
		s[j] = last;
	}
}
