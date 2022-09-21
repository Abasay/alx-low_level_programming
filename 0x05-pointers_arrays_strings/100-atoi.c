#include "main.h"

/**
 * _atoi - at of integers
 * @s : parameter s
 * Return: return 0
 */

int _atoi(char *s)
{
	unsigned int count, size = 0; j = 0; k = 1; m = 1, i;

	for (count = 0; *(s + count) != '\0'; count++)
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;
		if (*(s + count) == '-')
			k += -1;
		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if ( size > 0)
				m *= 10;
			size++;
		}
	}
	for (i = count - size; i < count; i++)
	{
		j = j + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (j * k);
}
