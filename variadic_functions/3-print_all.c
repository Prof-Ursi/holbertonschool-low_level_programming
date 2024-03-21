#include "variadic_functions.h"

/**
 * print_all - can print char, integer, float and strings
 *
 * @format: format (c for char, i for integer, f for float & s for string)
 * @...: arguments to be printed
 */

void print_all(const char * const format, ...)
{
	va_list argument;
	unsigned int i = 0;
	char *string_buffer, *separator = "";

	va_start(argument, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(argument, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(argument, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(argument, double));
					break;
				case 's':
					string_buffer = va_arg(argument, char *);
					if (string_buffer == NULL)
					{
						printf("%s(nil)", separator);
						break;
					}
					printf("%s%s", separator, string_buffer);
					break;
				default:
					i++;
					continue;
			}
			i++;
			separator = ", ";
		}
	}
	printf("\n");
	va_end(argument);
}
