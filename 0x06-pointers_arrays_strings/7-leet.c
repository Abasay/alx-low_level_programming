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
	char lets[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int nums[5] = {4, 3, 0, 7, 1};

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (j = 0; j <= i; j++)
	{
		for (k = 0; k < 10; k+=2)
		{
			if (s[j] == lets[k] || s[j] == lets[k + 1])
			{
				temp = nums[k / 2];
				s[j] = temp;
				break;
			}
		}
		temp = s[j];
		s[j] = temp;
	}
	s[j] = '\0';
	return (s);
}
