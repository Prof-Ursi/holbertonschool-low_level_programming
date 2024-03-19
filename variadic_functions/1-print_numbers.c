#include "variadic_functions.h"

/**
 * print_numbers - Function that print numbers
 *
 * @separator: string to be printed between numbers
 * @n: number of parameters to passing
 * @...: numbers to print
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list number;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(number, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(number, int));

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(number);
	printf("\n");
}
