#include "main.h"

/**
 * _strspn - string prefix check
 * @s : destination to check
 * @accept: accept string
 * Return: return integer
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	k = 0;
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
			if (accept[i] == s[j])
			{
				k++;
			}
	}

	return (k);
}
