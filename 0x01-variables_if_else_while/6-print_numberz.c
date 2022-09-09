#include <stdio.h>
/**
 * main - body of the function
 * Return: returns 0 if successful
 */
int main(void)
{
	int a;

	a = '0';
	while (a < 10)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
