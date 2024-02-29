#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str : string to pointer
 */

void puts_half(char *str)
{
	int total = 0;
	int i, n;

	while (*str != '\0')
	{
		total++;
		str++;
	}

	str = str - total;

	if (total % 2 == 0)
	{
		for (i = (total / 2); i < total && i != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		n = (total - 1) / 2;
		for (i = n + 1; i < total && i != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
