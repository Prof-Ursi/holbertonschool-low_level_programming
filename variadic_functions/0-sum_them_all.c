#include "variadic_functions.h"

/**
 * sum_them_all - Function returning the sum of all its parameters.
 *
 * @n: numbers of arguments
 * @...: arguments to sum to each other
 *
 * Return: sum of all its parameters
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list number;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(number, n);

	for (i = 0; i < n; i++)
		sum += va_arg(number, int);

	va_end(number);
	return (sum);
}
