#include "main.h"

/**
 * _abs - absolute value
 * @n : parameter
 * Return: return 0;
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}

	else if (n == 0)
	{
		return (0);
	}

	else
	{
		return (n);
	}

}
