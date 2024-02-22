#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to revise
 * Return: value of the last digit (success)
 */

int print_last_digit(int n)
{
	int j;

	j = n % 10;

	if (n < 0)
	{
		j = j * -1;
	}

	_putchar('0' + j);
	return (j);
}
