#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character to revise
 * Return: 1 if lowercase, 0 if otherwise (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
