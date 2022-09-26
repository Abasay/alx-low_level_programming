#include "main.h"

/**
 * _strchr - search character
 * @s : string s
 * @c: character to search
 * Return: return at first discovery
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s);
	}

	if (s[i] == c)
		return (s);

	return (0);
}
