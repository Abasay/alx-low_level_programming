#include "main.h"

/**
 * string_toupper - string to upper
 * @str: string
 * Return: return string
 */

char *string_toupper(char *str)
{
	int i, j;
	char temp;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	for (j = 0; j <= i; j++)
	{
		if ((str[j] >= 97) && (str[j] <= 122))
		{
			str[j] = str[j] - 32;
		}
		else
		{
			temp = str[j];
			str[j] = temp;
		}
	}
	return (str);
}
