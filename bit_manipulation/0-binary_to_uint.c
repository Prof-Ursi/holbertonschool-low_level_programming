#include "main.h"

/**
 * binary_to_uint - function that converts a string of
 * binary number into an unsigned int containing only 0 and 1
 *
 * @b: pointer to a string of binary numbers
 *
 * Return: converted integer number, or 0 if there is one or more chars
 * in the string b that is not 0 nor 1, or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int int_result = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			int_result = (int_result << 1) + 1;
		else if (b[i] == '0')
			int_result <<= 1;
		i++;
	}
	return (int_result);
}
