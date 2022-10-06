#include "main.h"
#include <stdlib.h>

/**
 * _strlen - string lengrh
 * @s: parameter string
 * Return: int
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
 * string_nconcat - string concat with condition n
 * @s1 : string 1
 * @s2 : strinv 2
 * @n: byte
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int size;
	unsigned int m, c, j, k, a;

	c = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = (_strlen(s1) + _strlen(s2) + 1);

	res = malloc(size * sizeof(char *));

	for (m = 0; s1[m] != '\0'; m++)
	{
		res[c] = s1[m];
		c++;
	}
	for (j = 0; s2[j] != ' '; j++)
	{
		res[c] = s2[j];
		c++;
	}
	k = _strlen(s2);
	if (n >= k)
	{
		for (a = j; s2[j] != '\0'; a++)
		{
			res[c] = s2[j];
			c++;
		}
	}
	res[c] = '\0';
	return (res);
}
