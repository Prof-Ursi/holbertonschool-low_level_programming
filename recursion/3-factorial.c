#include "main.h"

/**
 * factorial - function that returns the factorial
 * of a given number
 * @n: number to factorial
 *
 * Return:
 * - factorial of a given number
 * - -1 if the number is negative
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
