#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c : variable for check
 * Return: 1 if uppercase or return 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
