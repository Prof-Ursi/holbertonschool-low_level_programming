#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet.
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 97; alphabet <= 122; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
