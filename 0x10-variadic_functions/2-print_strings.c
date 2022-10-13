#include "variadic_functions.h"

/**
 * print_strings - printing strings
 * @separator: separator
 * @n: argcount
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(str, char *))
			printf("%s", va_arg(str, char *));
		else
			printf("(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
