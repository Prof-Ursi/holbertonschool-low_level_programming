#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size : is the size of the triangle
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (j = 2; j <= size - i; j++)
		{
			_putchar(' ');
		}
		for (k = 0; k <= i ; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
