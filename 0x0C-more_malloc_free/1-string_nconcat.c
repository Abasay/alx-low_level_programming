#include "main.h"

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
	
