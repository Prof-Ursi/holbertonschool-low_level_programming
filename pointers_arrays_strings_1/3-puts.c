#include "main.h"

/**
 * _puts - function that prints a string
 * @str : variable to pointer
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
