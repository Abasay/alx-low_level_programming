#include <stdio.h>
/**
 * main - body kf function
 * Return: returns 0 if succesful
 */
int main(void)
{
	char i;

	i = 'z';
	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
