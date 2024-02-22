#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 97; alphabet <= 122; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
