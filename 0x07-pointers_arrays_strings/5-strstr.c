#include "main.h"

/**
 * _strstr - string check
 * @haystack: destination
 * @needle: what to find
 * Return: return string
 */

char *_strstr(char *haystack, char *needle)
{
	char *str;

	while (*haystack != '\0')
	{
		str = needle;
		while (*haystack != '\0' && *str != '\0' && *haystack == *str)
		{
			haystack++;
			str++;
		}
		if (*str == '\0')
			return (haystack);
		haystack = haystack + 1;
	}
	return (0);
}
