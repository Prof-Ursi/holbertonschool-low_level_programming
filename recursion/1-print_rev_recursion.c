#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: pointer to character array (string)
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		char *reverse;
		
		reverse = s + 1;
		_print_rev_recursion(reverse);
		_putchar(*s);
	}
}
