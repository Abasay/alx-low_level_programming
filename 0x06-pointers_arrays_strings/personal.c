#include "main.h"

/**
 * cap_string - capitalizing strings
 * @str: string
 * Return: return strings
 */

char *cap_string(char *str)
{
	int i, j;
	char temp;

	for (i = 0; str[i] != '\0'; i++)
	for (j = 0; j <= i; j++)
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[j] = str[j] - 32;
		}
		else if (str[j] == 32 || str[j] == 9 || str[j] == 10)
		{
			j = j + 1;
			if (str[j] >= 97 && str[j] <= 122)
			{
				str[j] = str[j] - 32;
			}
			else {
				temp = str[j];
				str[j] = temp;
			}
			j = j - 1;
		}
		else if (str[j] == 44 || str[j] == 59 || str[j] == 46 || str[j] == 33 || str[j] == 63 || str[j] == 34 || str[j] == 40 || str[j] == 41 || str[j] == 123 || str[j] == 125)
		{
			j = j + 2;
			if (str[j] >= 97 && str[j] <= 122)
			{
				str[j] = str[j] - 32;
			}
			else
			{
				temp = str[j];
				str[j] = temp;
			}
			j = j - 2;
		}
		else
		{
			temp = str[j];
			str[j] = temp;
		}
	}
	str[j] = '\0';

	return (str);
}
