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
	char *acc, *str;

	k = 0;
	acc = s;
	str = acc;
	for (i = 0; acc[i] != '\0'; i++)
	{
		for (j = 0; str[j] != '\0'; j++)
			if (str[j] == acc[i])
			{
				k++;
				break;
			}
	}

	return (k);
}
