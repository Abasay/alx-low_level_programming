#include "main.h"

/**
 * leet - leeting
 * @s : string parameter
 * Return: return string
 */
char *leet(char *s)
{
	int i, j, k;
	int temp;
	char lets[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int nums[] = {4, 3, 0, 7, 1};

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (j = 0; j <= i; j++)
	{
		for (k = 0; k < 10; k+=2)
		{
			if (s[j] == lets[k] || s[j] == lets[k + 1])
			{
				s[j] = nums[k / 2];
				break;
			}
		}
	}
	return (s);
}
