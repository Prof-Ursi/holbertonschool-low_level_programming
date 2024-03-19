#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings
 *
 * @separator: string to be printed between the strings
 * @n: number of strings
 * @...: strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg_string;
	unsigned int i;
	char *string_buffer;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(arg_string, n);

	for (i = 0; i < n; i++)
	{
		string_buffer = va_arg(arg_string, char *);
		if (string_buffer == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", string_buffer);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(arg_string);
	printf("\n");
}
