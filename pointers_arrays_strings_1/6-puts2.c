#include "main.h"

/**
 * puts2 - function that prints every even character
 * of a string, starting with the first character
 * @str : variable to pointer
 */

void puts2(char *str)
{
	int j;

	j = 1;

	while (*str != '\0')
	{
		if (j % 2 != 0)
		{
			_putchar(*str);
		}

		j++;
		str++;
	}
	_putchar('\n');
}
