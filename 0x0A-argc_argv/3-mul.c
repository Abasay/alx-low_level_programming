#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main func
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
