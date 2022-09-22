#include "main.h"

/**
 * rot13 - rot13 strings
 * @str: string
 * Return: return strings
 */

char *rot13(char *str)
{
	int j, k;
	char alphabet[]= "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
			if (*(s + i) == alphabet[j])
			{
				*(s + i) = rot13[j];
				break;
			}
	}
	return (str);
}
