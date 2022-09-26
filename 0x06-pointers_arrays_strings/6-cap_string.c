#include "main.h"

/**
 * cap_string - capitalize string
 * @str: string
 * Return: return strings
 */

char *cap_string(char *str)
{
	int j, k, l;
	int seps[] = {32, 9, 10};
	int seps1[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (j = 0; str[j] != '\0'; j++)
	{
		for (k = 0; k < 3; k++)
			if (str[j] == seps[k])
			{
				j = j + 1;
				if (str[j] >= 97 && str[j] <= 122)
				{
					str[j] = str[j] - 32;
				}
				j = j - 1;
				break;
			}
		for (l = 0; l < 10; l++)
			if (str[j] == *(seps1 + l))
			{
				j = j + 2;
				if (str[j] >= 97 && str[j] <= 122)
				{
					str[j] = str[j] - 32;
				}
				j = j - 2;
				break;
			}
	}
	return (str);
}
