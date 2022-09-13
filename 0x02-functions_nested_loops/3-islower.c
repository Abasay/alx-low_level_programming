#include "main.h"
/**
 * main - check lower case
 * _islower: print if lowercase
 * Return: return 0
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
