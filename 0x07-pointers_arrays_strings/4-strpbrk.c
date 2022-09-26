#include "main.h"

/**
 * _strpbrk - string break
 * @s: string s
 * @accept: string to accept for check
 * Return: return string
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (accept[j] == s[i])
				return (s);
	return (0);
}
