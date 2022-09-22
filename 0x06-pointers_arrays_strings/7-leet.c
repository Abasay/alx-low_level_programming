#include "main.h"

/**
 * leet - leeting
 * @s : string parameter
 * Return: return string
 */
char *leet(char *s)
{
	int i, j, k;
	int lower[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int nums[] = {52, 51, 48, 55, 49};

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (j = 0; j <= i; j++)
	{
		for (k = 0; k < 5; k++)
		{
			if (s[j] == lower[k] || s[j] == upper[k])
			{
				s[j] = nums[k];
				break;
			}
		}
	}
	return (s);
}
