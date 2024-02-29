#include "main.h"

/**
 * _isdigit - checks for a digit 
 * using ASCII values (between 48 for '0' and 57 for '9')
 * @c : variable for check
 * Return: 1 if is a digit or return 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
